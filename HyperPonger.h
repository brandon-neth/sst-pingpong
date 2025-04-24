#ifndef _hyperPonger_H
#define _hyperPonger_H

#include <sst/core/component.h>
#include <sst/core/link.h>

class HyperPonger : public SST::Component {
  public:
    HyperPonger( SST::ComponentId_t id, SST::Params& params );
    ~HyperPonger();

    void setup() override;
    void finish() override;

    bool tick( SST::Cycle_t currentCycle );

    void handleEvent(SST::Event *ev);

    // Register the component
    SST_ELI_REGISTER_COMPONENT(
      HyperPonger,  // class
      "pingpong",   // element library
      "hyperPonger", // component
      SST_ELI_ELEMENT_VERSION( 1, 0, 0 ),
      "component that takes balls from its neighbors and passes along. If there's no neighbor to pass to, bounce back",
      COMPONENT_CATEGORY_UNCATEGORIZED
    )

    // Parameter name, description, default value
    SST_ELI_DOCUMENT_PARAMS(
     { "numBalls", "Balls currently on the component", "0" },
    )

    // Port name, description, event type
    SST_ELI_DOCUMENT_PORTS(
      { "port_n", "Port to north", {"pingpong.BallEvent"}},
      { "port_s", "Port to south", {"pingpong.BallEvent"}},
      { "port_w" , "Port to west", {"pingpong.BallEvent"}},
      { "port_e",  "Port to east", {"pingpong.BallEvent"}},

      { "port_0",  "0th port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_1",  "1st port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_2",  "2nd port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_3",  "3rd port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_4",  "4th port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_5",  "5th port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_6",  "6th port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_7",  "7th port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_8",  "8th port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_9",  "9th port to neighboring grid",  {"pingpong.BallEvent"}},

      { "port_10", "10th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_11", "11th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_12", "12th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_13", "13th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_14", "14th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_15", "15th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_16", "16th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_17", "17th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_18", "18th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_19", "19th port to neighboring grid", {"pingpong.BallEvent"}},

      { "port_20", "20th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_21", "21st port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_22", "22nd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_23", "23rd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_24", "24th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_25", "25th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_26", "26th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_27", "27th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_28", "28th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_29", "29th port to neighboring grid", {"pingpong.BallEvent"}},

      { "port_30", "30th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_31", "31st port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_32", "32nd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_33", "33rd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_34", "34th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_35", "35th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_36", "36th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_37", "37th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_38", "38th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_39", "39th port to neighboring grid", {"pingpong.BallEvent"}},

      { "port_40", "40th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_41", "41st port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_42", "42nd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_43", "43rd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_44", "44th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_45", "45th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_46", "46th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_47", "47th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_48", "48th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_49", "49th port to neighboring grid", {"pingpong.BallEvent"}},

      { "port_50", "50th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_51", "51st port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_52", "52nd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_53", "53rd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_54", "54th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_55", "55th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_56", "56th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_57", "57th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_58", "58th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_59", "59th port to neighboring grid", {"pingpong.BallEvent"}},

      { "port_60", "60th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_61", "61st port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_62", "22nd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_63", "63rd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_64", "64th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_65", "65th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_66", "66th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_67", "67th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_68", "68th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_69", "69th port to neighboring grid", {"pingpong.BallEvent"}},

      { "port_70", "70th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_71", "71st port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_72", "72nd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_73", "73rd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_74", "74th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_75", "75th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_76", "76th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_77", "77th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_78", "78th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_79", "79th port to neighboring grid", {"pingpong.BallEvent"}},

      { "port_80", "80th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_81", "81st port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_82", "82nd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_83", "83rd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_84", "84th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_85", "85th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_86", "86th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_87", "87th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_88", "88th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_89", "89th port to neighboring grid", {"pingpong.BallEvent"}},

      { "port_90", "90th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_91", "91st port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_92", "92nd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_93", "93rd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_94", "94th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_95", "95th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_96", "96th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_97", "97th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_98", "98th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_99", "99th port to neighboring grid", {"pingpong.BallEvent"}},

      { "port_100",  "100th port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_101",  "101st port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_102",  "102nd port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_103",  "103rd port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_104",  "104th port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_105",  "105th port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_106",  "106th port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_107",  "107th port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_108",  "108th port to neighboring grid",  {"pingpong.BallEvent"}},
      { "port_109",  "109th port to neighboring grid",  {"pingpong.BallEvent"}},

      { "port_110", "110th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_111", "111th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_112", "112th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_113", "113th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_114", "114th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_115", "115th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_116", "116th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_117", "117th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_118", "118th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_119", "119th port to neighboring grid", {"pingpong.BallEvent"}},

      { "port_120", "120th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_121", "121st port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_122", "122nd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_123", "123rd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_124", "124th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_125", "125th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_126", "126th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_127", "127th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_128", "128th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_129", "129th port to neighboring grid", {"pingpong.BallEvent"}},

      { "port_130", "130th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_131", "131st port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_132", "132nd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_133", "133rd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_134", "134th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_135", "135th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_136", "136th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_137", "137th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_138", "138th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_139", "139th port to neighboring grid", {"pingpong.BallEvent"}},

      { "port_140", "140th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_141", "141st port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_142", "142nd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_143", "143rd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_144", "144th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_145", "145th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_146", "146th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_147", "147th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_148", "148th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_149", "149th port to neighboring grid", {"pingpong.BallEvent"}},

      { "port_150", "150th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_151", "151st port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_152", "152nd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_153", "153rd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_154", "154th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_155", "155th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_156", "156th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_157", "157th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_158", "158th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_159", "159th port to neighboring grid", {"pingpong.BallEvent"}},

      { "port_160", "160th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_161", "161st port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_162", "122nd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_163", "163rd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_164", "164th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_165", "165th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_166", "166th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_167", "167th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_168", "168th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_169", "169th port to neighboring grid", {"pingpong.BallEvent"}},

      { "port_170", "170th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_171", "171st port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_172", "172nd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_173", "173rd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_174", "174th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_175", "175th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_176", "176th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_177", "177th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_178", "178th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_179", "179th port to neighboring grid", {"pingpong.BallEvent"}},

      { "port_180", "180th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_181", "181st port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_182", "182nd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_183", "183rd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_184", "184th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_185", "185th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_186", "186th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_187", "187th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_188", "188th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_189", "189th port to neighboring grid", {"pingpong.BallEvent"}},

      { "port_190", "190th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_191", "191st port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_192", "192nd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_193", "193rd port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_194", "194th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_195", "195th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_196", "196th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_197", "197th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_198", "198th port to neighboring grid", {"pingpong.BallEvent"}},
      { "port_199", "199th port to neighboring grid", {"pingpong.BallEvent"}}
    )

  #ifdef ENABLE_SSTCHECKPOINT
    // needed for serialization
    HyperPonger();
    // needed for serialization
    void serialize_order(SST::Core::Serialization::serializer& ser) override;
    ImplementSerializable(HyperPonger)
  #endif

  private:
    void sendOutRandomBall();

    int64_t initialBalls;
    SST::RNG::MarsagliaRNG* rng;

    SST::Output out;
    SST::Link *linkN, *linkS, *linkW, *linkE;
    SST::Link *hyperLink[200]; /* if this count changes, be sure to update loop in serialize_order*/
};

#endif
