#ifndef _pingPonger_H
#define _pingPonger_H

#include <sst/core/component.h>
#include <sst/core/link.h>

#ifdef ENABLE_SSTDBG
#include <sst/dbg/SSTDebug.h>
#endif

class Ponger : public SST::Component {
  public:
    Ponger( SST::ComponentId_t id, SST::Params& params );
    ~Ponger();

    void setup() override;
    void finish() override;

    bool tick( SST::Cycle_t currentCycle );

    void handleEvent(SST::Event *ev, bool fromLhs);

    // Register the component
    SST_ELI_REGISTER_COMPONENT(
      Ponger,   // class
      "pingpong",   // element library
      "ponger", // component
      SST_ELI_ELEMENT_VERSION( 1, 0, 0 ),
      "component that takes balls from its neighbors and passes along. If there's no neighbor to pass to, bounce back",
      COMPONENT_CATEGORY_UNCATEGORIZED
    )

    // Parameter name, description, default value
    SST_ELI_DOCUMENT_PARAMS(
     { "ballsHeadingNorth", "Balls currently heading north", "0" },
     { "ballsHeadingSouth", "Balls currently heading south", "0" },
     { "ballsHeadingWest",  "Balls currently heading west",  "0" },
     { "ballsHeadingEast",  "Balls currently heading east",  "0" }
    )

    // Port name, description, event type
    SST_ELI_DOCUMENT_PORTS(
      { "northPort", "Port to north", {"pingpong.BallEvent"}},
      { "southPort", "Port to south", {"pingpong.BallEvent"}},
      { "westPort" , "Port to west",  {"pingpong.BallEvent"}},
      { "eastPort",  "Port to east",  {"pingpong.BallEvent"}}
    )

  #ifdef ENABLE_SSTCHECKPOINT
    // needed for serialization
    Ponger();
    // needed for serialization
    void serialize_order(SST::Core::Serialization::serializer& ser) override;
    ImplementSerializable(Ponger)
  #endif


#ifdef ENABLE_SSTDBG
    void printStatus(SST::Output& out) override;
#endif

  private:
    void handleNorthPort(SST::Event *ev);
    void handleSouthPort(SST::Event *ev);
    void handleWestPort(SST::Event *ev);
    void handleEastPort(SST::Event *ev);

    int64_t ballsHeadingNorth;
    int64_t ballsHeadingSouth;
    int64_t ballsHeadingWest;
    int64_t ballsHeadingEast;


    SST::Link *northPort, *southPort, *westPort, *eastPort;

#ifdef ENABLE_SSTDBG
    SSTDebug *dbg;
#endif
};


#endif
