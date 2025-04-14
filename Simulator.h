#ifndef _simulation_H
#define _simulation_H

#include <sst/core/component.h>
#include <sst/core/link.h>
#include <sst/core/rng/marsaglia.h>

#ifdef ENABLE_SSTDBG
#include <sst/dbg/SSTDebug.h>
#endif

class Simulator : public SST::Component {
  public:
    Simulator( SST::ComponentId_t id, SST::Params& params );
    ~Simulator();

    virtual void setup() override;
    virtual void finish() override;

    bool clockTick( SST::Cycle_t currentCycle );

    // Register the component
    SST_ELI_REGISTER_COMPONENT(
      Simulator,    // class
      "pingpong",   // element library
      "simulator",  // component
      SST_ELI_ELEMENT_VERSION( 1, 0, 0 ),
      "Terminates simulation after specified number of cycles",
      COMPONENT_CATEGORY_UNCATEGORIZED
    )

    // Parameter name, description, default value
    SST_ELI_DOCUMENT_PARAMS(
      { "timeToRun",      "How long to run the simulation (in sec)", "100s" },
      { "verbose",        "Print verbose debugging output", "false" },
      { "artificialWork", "Add an artificial delay to message processing", "0"}
    )

#ifdef ENABLE_SSTDBG
    void printStatus(SST::Output& out) override;
#endif

  private:
    int64_t timeToRun;

#ifdef ENABLE_SSTDBG
    SSTDebug *dbg;
#endif
  #ifdef ENABLE_SSTCHECKPOINT
  // needed for serialization
  Simulator();
  void serialize_order(SST::Core::Serialization::serializer& ser) override;
  ImplementSerializable(Simulator)
  #endif

};

#endif
