#include <iostream>
#include <fstream>
#include <trifinger_object_tracking/color_segmenter.hpp>

namespace trifinger_object_tracking {
std::array<float, XGB_NUM_CLASSES> xgb_classify_cube_v2(
        std::array<float, XGB_NUM_FEATURES> &sample) {

  std::array<float, XGB_NUM_CLASSES> sum;
  sum.fill(0.0);

  if (sample[4] <72) {
    if (sample[3] <141) {
      if (sample[4] <59) {
        if (sample[2] <205) {
          if (sample[4] <37) {
            sum[0] += 3.49871135;
          } else {
            if (sample[3] <134) {
              sum[0] += 3.48690557;
            } else {
              sum[0] += 1.86010349;
            }
          }
        } else {
          if (sample[0] <169) {
            sum[0] += -0.443902433;
          } else {
            sum[0] += 1.02752292;
          }
        }
      } else {
        if (sample[3] <113) {
          if (sample[2] <192) {
            if (sample[2] <146) {
              sum[0] += 3.48266125;
            } else {
              sum[0] += 3.03772068;
            }
          } else {
            if (sample[0] <165) {
              sum[0] += -0.559533715;
            } else {
              sum[0] += 1.02752292;
            }
          }
        } else {
          if (sample[2] <125) {
            if (sample[1] <104) {
              sum[0] += 1.909163;
            } else {
              sum[0] += 3.23701525;
            }
          } else {
            if (sample[1] <178) {
              sum[0] += -0.412758797;
            } else {
              sum[0] += 3.21907043;
            }
          }
        }
      }
    } else {
      if (sample[4] <52) {
        if (sample[4] <40) {
          if (sample[4] <29) {
            sum[0] += 3.49302554;
          } else {
            if (sample[0] <174) {
              sum[0] += 3.33469534;
            } else {
              sum[0] += -0.0658942908;
            }
          }
        } else {
          if (sample[0] <129) {
            if (sample[0] <118) {
              sum[0] += 3.30796719;
            } else {
              sum[0] += 2.02300954;
            }
          } else {
            if (sample[0] <148) {
              sum[0] += 0.183673441;
            } else {
              sum[0] += -0.572032034;
            }
          }
        }
      } else {
        if (sample[0] <115) {
          if (sample[2] <95) {
            if (sample[1] <58) {
              sum[0] += 3.43696785;
            } else {
              sum[0] += 2.54060435;
            }
          } else {
            if (sample[4] <60) {
              sum[0] += 2.56143999;
            } else {
              sum[0] += 0.306479812;
            }
          }
        } else {
          if (sample[3] <175) {
            if (sample[0] <132) {
              sum[0] += -0.410775065;
            } else {
              sum[0] += -0.582412422;
            }
          } else {
            if (sample[2] <157) {
              sum[0] += 1.36208618;
            } else {
              sum[0] += -0.461485058;
            }
          }
        }
      }
    }
  } else {
    if (sample[5] <127) {
      if (sample[3] <72) {
        if (sample[3] <19) {
          if (sample[4] <122) {
            if (sample[3] <8) {
              sum[0] += 0.289412677;
            } else {
              sum[0] += 3.47222567;
            }
          } else {
            if (sample[2] <86) {
              sum[0] += 3.04640102;
            } else {
              sum[0] += 0.535342753;
            }
          }
        } else {
          if (sample[2] <122) {
            if (sample[2] <114) {
              sum[0] += 3.48335218;
            } else {
              sum[0] += 3.06232691;
            }
          } else {
            if (sample[4] <166) {
              sum[0] += 3.37946367;
            } else {
              sum[0] += -0.396296442;
            }
          }
        }
      } else {
        if (sample[4] <129) {
          if (sample[2] <93) {
            if (sample[1] <110) {
              sum[0] += 3.33770204;
            } else {
              sum[0] += 1.31135499;
            }
          } else {
            if (sample[2] <110) {
              sum[0] += 0.168516055;
            } else {
              sum[0] += -0.542014599;
            }
          }
        } else {
          if (sample[5] <59) {
            if (sample[4] <204) {
              sum[0] += 3.06210327;
            } else {
              sum[0] += 0.570524871;
            }
          } else {
            if (sample[4] <156) {
              sum[0] += 0.340847582;
            } else {
              sum[0] += -0.441079259;
            }
          }
        }
      }
    } else {
      if (sample[5] <155) {
        if (sample[4] <136) {
          if (sample[3] <113) {
            if (sample[1] <90) {
              sum[0] += -0.000801804126;
            } else {
              sum[0] += 3.30299711;
            }
          } else {
            if (sample[3] <124) {
              sum[0] += 0.686832666;
            } else {
              sum[0] += -0.557458401;
            }
          }
        } else {
          if (sample[3] <26) {
            if (sample[1] <86) {
              sum[0] += -0.140255764;
            } else {
              sum[0] += 2.24373627;
            }
          } else {
            if (sample[4] <142) {
              sum[0] += -0.00682632532;
            } else {
              sum[0] += -0.574088633;
            }
          }
        }
      } else {
        if (sample[5] <179) {
          if (sample[1] <123) {
            if (sample[3] <9) {
              sum[0] += 0.0671672821;
            } else {
              sum[0] += -0.470718592;
            }
          } else {
            if (sample[4] <105) {
              sum[0] += 2.14459372;
            } else {
              sum[0] += -0.416423827;
            }
          }
        } else {
          if (sample[4] <89) {
            if (sample[3] <112) {
              sum[0] += 1.86526787;
            } else {
              sum[0] += -0.572303593;
            }
          } else {
            if (sample[5] <183) {
              sum[0] += -0.433508724;
            } else {
              sum[0] += -0.572838306;
            }
          }
        }
      }
    }
  }


  if (sample[2] <4) {
    if (sample[3] <93) {
      if (sample[1] <25) {
        if (sample[1] <23) {
          sum[1] += -0.582064867;
        } else {
          if (sample[2] <1) {
            if (sample[1] <24) {
              sum[1] += 0.381818146;
            } else {
              sum[1] += -0.141057938;
            }
          } else {
            sum[1] += -0.556594908;
          }
        }
      } else {
        if (sample[1] <53) {
          if (sample[3] <74) {
            if (sample[2] <1) {
              sum[1] += 1.26071703;
            } else {
              sum[1] += -0.438204646;
            }
          } else {
            if (sample[1] <29) {
              sum[1] += 0.165680453;
            } else {
              sum[1] += 3.4193151;
            }
          }
        } else {
          if (sample[1] <55) {
            if (sample[0] <26) {
              sum[1] += -0.197461218;
            } else {
              sum[1] += 1.70731699;
            }
          } else {
            if (sample[1] <71) {
              sum[1] += -0.487696409;
            } else {
              sum[1] += -0.582789898;
            }
          }
        }
      }
    } else {
      if (sample[1] <24) {
        sum[1] += -0.55746603;
      } else {
        if (sample[1] <101) {
          if (sample[0] <37) {
            sum[1] += 0.12844035;
          } else {
            sum[1] += 3.49328923;
          }
        } else {
          if (sample[1] <112) {
            sum[1] += 0.627586186;
          } else {
            sum[1] += -0.45161289;
          }
        }
      }
    }
  } else {
    if (sample[2] <17) {
      if (sample[3] <93) {
        if (sample[4] <210) {
          if (sample[0] <58) {
            if (sample[0] <31) {
              sum[1] += -0.466576755;
            } else {
              sum[1] += 0.684193611;
            }
          } else {
            if (sample[1] <65) {
              sum[1] += 3.38256884;
            } else {
              sum[1] += -0.358514726;
            }
          }
        } else {
          if (sample[4] <220) {
            if (sample[2] <11) {
              sum[1] += 0.786586761;
            } else {
              sum[1] += -0.563815355;
            }
          } else {
            if (sample[4] <232) {
              sum[1] += -0.372729778;
            } else {
              sum[1] += -0.581879437;
            }
          }
        }
      } else {
        if (sample[0] <60) {
          if (sample[1] <48) {
            if (sample[4] <229) {
              sum[1] += -0.533636451;
            } else {
              sum[1] += 0.325183332;
            }
          } else {
            if (sample[3] <94) {
              sum[1] += 1.85067308;
            } else {
              sum[1] += 0.0256175492;
            }
          }
        } else {
          if (sample[1] <107) {
            if (sample[1] <57) {
              sum[1] += 2.68452621;
            } else {
              sum[1] += 3.45756459;
            }
          } else {
            if (sample[3] <95) {
              sum[1] += -0.52771616;
            } else {
              sum[1] += 1.02831852;
            }
          }
        }
      }
    } else {
      if (sample[2] <36) {
        if (sample[3] <94) {
          if (sample[3] <84) {
            if (sample[1] <52) {
              sum[1] += -0.582306206;
            } else {
              sum[1] += -0.413448244;
            }
          } else {
            if (sample[1] <78) {
              sum[1] += 1.41667545;
            } else {
              sum[1] += -0.579869568;
            }
          }
        } else {
          if (sample[1] <57) {
            if (sample[3] <95) {
              sum[1] += 1.13071191;
            } else {
              sum[1] += -0.527329028;
            }
          } else {
            if (sample[1] <110) {
              sum[1] += 3.1841197;
            } else {
              sum[1] += -0.330998242;
            }
          }
        }
      } else {
        if (sample[2] <53) {
          if (sample[3] <100) {
            if (sample[3] <95) {
              sum[1] += -0.576742351;
            } else {
              sum[1] += -0.0562777072;
            }
          } else {
            if (sample[4] <141) {
              sum[1] += -0.253906876;
            } else {
              sum[1] += 2.82846189;
            }
          }
        } else {
          if (sample[2] <66) {
            if (sample[3] <103) {
              sum[1] += -0.577708423;
            } else {
              sum[1] += -0.344355255;
            }
          } else {
            if (sample[4] <58) {
              sum[1] += -0.582995832;
            } else {
              sum[1] += -0.578934491;
            }
          }
        }
      }
    }
  }


  if (sample[0] <219) {
    if (sample[0] <200) {
      if (sample[3] <111) {
        if (sample[3] <94) {
          sum[2] += -0.582953095;
        } else {
          if (sample[4] <85) {
            if (sample[4] <57) {
              sum[2] += -0.582338512;
            } else {
              sum[2] += -0.57698971;
            }
          } else {
            if (sample[0] <185) {
              sum[2] += -0.562668383;
            } else {
              sum[2] += 1.33019888;
            }
          }
        }
      } else {
        if (sample[4] <91) {
          if (sample[4] <60) {
            if (sample[4] <43) {
              sum[2] += -0.581197083;
            } else {
              sum[2] += -0.482181519;
            }
          } else {
            if (sample[3] <124) {
              sum[2] += 0.268363804;
            } else {
              sum[2] += -0.575934291;
            }
          }
        } else {
          if (sample[0] <152) {
            if (sample[3] <115) {
              sum[2] += 0.678777874;
            } else {
              sum[2] += -0.545731306;
            }
          } else {
            if (sample[3] <124) {
              sum[2] += 3.39547801;
            } else {
              sum[2] += -0.243478268;
            }
          }
        }
      }
    } else {
      if (sample[1] <164) {
        if (sample[3] <120) {
          if (sample[3] <111) {
            if (sample[2] <137) {
              sum[2] += 2.91891885;
            } else {
              sum[2] += -0.207715139;
            }
          } else {
            if (sample[3] <117) {
              sum[2] += 3.49352074;
            } else {
              sum[2] += 2.70209098;
            }
          }
        } else {
          if (sample[4] <87) {
            if (sample[3] <128) {
              sum[2] += 2.14723921;
            } else {
              sum[2] += -0.491082042;
            }
          } else {
            if (sample[0] <218) {
              sum[2] += -0.488984406;
            } else {
              sum[2] += 0.577981651;
            }
          }
        }
      } else {
        if (sample[1] <174) {
          if (sample[3] <111) {
            if (sample[4] <85) {
              sum[2] += -0.494772971;
            } else {
              sum[2] += 1.64259923;
            }
          } else {
            if (sample[2] <149) {
              sum[2] += 1.02752292;
            } else {
              sum[2] += 3.24150038;
            }
          }
        } else {
          if (sample[1] <182) {
            if (sample[3] <111) {
              sum[2] += -0.561464667;
            } else {
              sum[2] += -0.34261474;
            }
          } else {
            sum[2] += -0.583143413;
          }
        }
      }
    }
  } else {
    if (sample[1] <175) {
      if (sample[3] <119) {
        if (sample[3] <116) {
          if (sample[3] <107) {
            sum[2] += 0.736842096;
          } else {
            if (sample[1] <174) {
              sum[2] += 3.49756885;
            } else {
              sum[2] += 1.47133756;
            }
          }
        } else {
          if (sample[1] <153) {
            if (sample[2] <131) {
              sum[2] += 2.8839457;
            } else {
              sum[2] += 0.532066464;
            }
          } else {
            sum[2] += 3.31459451;
          }
        }
      } else {
        if (sample[1] <150) {
          if (sample[1] <144) {
            sum[2] += -0.498516321;
          } else {
            if (sample[1] <145) {
              sum[2] += 0.577981651;
            } else {
              sum[2] += -0.34710744;
            }
          }
        } else {
          sum[2] += 2.21052623;
        }
      }
    } else {
      if (sample[0] <253) {
        if (sample[1] <180) {
          if (sample[2] <157) {
            sum[2] += -0.556291401;
          } else {
            if (sample[2] <171) {
              sum[2] += 2.61139894;
            } else {
              sum[2] += -1.09798028e-08;
            }
          }
        } else {
          if (sample[1] <183) {
            if (sample[3] <114) {
              sum[2] += -0.552828133;
            } else {
              sum[2] += -0.128119811;
            }
          } else {
            sum[2] += -0.582969546;
          }
        }
      } else {
        sum[2] += 2.01104975;
      }
    }
  }


  if (sample[2] <59) {
    if (sample[1] <94) {
      if (sample[1] <79) {
        if (sample[1] <73) {
          if (sample[1] <71) {
            if (sample[1] <67) {
              sum[3] += -0.582944155;
            } else {
              sum[3] += -0.567689776;
            }
          } else {
            if (sample[0] <16) {
              sum[3] += 2.08619428;
            } else {
              sum[3] += -0.546203673;
            }
          }
        } else {
          if (sample[0] <51) {
            if (sample[2] <28) {
              sum[3] += 3.45469356;
            } else {
              sum[3] += -0.440590084;
            }
          } else {
            if (sample[0] <59) {
              sum[3] += -0.341560066;
            } else {
              sum[3] += -0.572652161;
            }
          }
        }
      } else {
        if (sample[3] <86) {
          if (sample[2] <42) {
            if (sample[3] <67) {
              sum[3] += 0.279534072;
            } else {
              sum[3] += 3.46176815;
            }
          } else {
            if (sample[1] <87) {
              sum[3] += -0.326799184;
            } else {
              sum[3] += 0.474782556;
            }
          }
        } else {
          if (sample[3] <92) {
            if (sample[4] <137) {
              sum[3] += -0.216663674;
            } else {
              sum[3] += 2.8790729;
            }
          } else {
            if (sample[3] <94) {
              sum[3] += -0.207072437;
            } else {
              sum[3] += -0.565385818;
            }
          }
        }
      }
    } else {
      if (sample[3] <97) {
        if (sample[3] <74) {
          if (sample[2] <45) {
            if (sample[2] <39) {
              sum[3] += 0.751219451;
            } else {
              sum[3] += 2.24205375;
            }
          } else {
            if (sample[4] <123) {
              sum[3] += 0.993178666;
            } else {
              sum[3] += -0.449197859;
            }
          }
        } else {
          if (sample[3] <95) {
            if (sample[4] <119) {
              sum[3] += 2.18236947;
            } else {
              sum[3] += 3.49335742;
            }
          } else {
            if (sample[1] <100) {
              sum[3] += -0.0502152219;
            } else {
              sum[3] += 2.81237555;
            }
          }
        }
      } else {
        if (sample[1] <115) {
          if (sample[1] <104) {
            if (sample[0] <144) {
              sum[3] += -0.100864567;
            } else {
              sum[3] += -0.5620718;
            }
          } else {
            if (sample[0] <137) {
              sum[3] += 1.73599994;
            } else {
              sum[3] += 0.351955265;
            }
          }
        } else {
          sum[3] += 2.15085602;
        }
      }
    }
  } else {
    if (sample[2] <61) {
      if (sample[1] <99) {
        if (sample[1] <98) {
          if (sample[1] <88) {
            if (sample[0] <125) {
              sum[3] += -0.582168937;
            } else {
              sum[3] += -0.0482758731;
            }
          } else {
            if (sample[4] <106) {
              sum[3] += -0.332791537;
            } else {
              sum[3] += -0.545320928;
            }
          }
        } else {
          if (sample[0] <75) {
            sum[3] += -0.32110092;
          } else {
            if (sample[0] <98) {
              sum[3] += 0.627586186;
            } else {
              sum[3] += -1.09798028e-08;
            }
          }
        }
      } else {
        if (sample[3] <96) {
          if (sample[3] <74) {
            if (sample[0] <55) {
              sum[3] += 0.12844035;
            } else {
              sum[3] += -0.475471705;
            }
          } else {
            if (sample[1] <112) {
              sum[3] += 2.51444745;
            } else {
              sum[3] += 3.47638917;
            }
          }
        } else {
          if (sample[1] <117) {
            if (sample[3] <98) {
              sum[3] += 0.397379875;
            } else {
              sum[3] += -0.479194611;
            }
          } else {
            if (sample[3] <100) {
              sum[3] += 1.39612186;
            } else {
              sum[3] += 0.310249269;
            }
          }
        }
      }
    } else {
      if (sample[4] <82) {
        if (sample[4] <48) {
          sum[3] += -0.583099961;
        } else {
          if (sample[1] <145) {
            if (sample[1] <110) {
              sum[3] += -0.582456112;
            } else {
              sum[3] += -0.579186857;
            }
          } else {
            if (sample[2] <115) {
              sum[3] += -0.285422057;
            } else {
              sum[3] += -0.571891487;
            }
          }
        }
      } else {
        if (sample[3] <53) {
          sum[3] += -0.582866728;
        } else {
          if (sample[3] <98) {
            if (sample[4] <121) {
              sum[3] += 0.268825352;
            } else {
              sum[3] += 2.75125718;
            }
          } else {
            if (sample[3] <101) {
              sum[3] += -0.114680797;
            } else {
              sum[3] += -0.579487205;
            }
          }
        }
      }
    }
  }


  if (sample[3] <142) {
    if (sample[3] <12) {
      if (sample[1] <78) {
        if (sample[2] <96) {
          if (sample[2] <95) {
            if (sample[2] <93) {
              sum[4] += -0.567552686;
            } else {
              sum[4] += -0.228545949;
            }
          } else {
            if (sample[0] <50) {
              sum[4] += 3.06287146;
            } else {
              sum[4] += -0.515304148;
            }
          }
        } else {
          if (sample[2] <123) {
            if (sample[4] <89) {
              sum[4] += 0.437981397;
            } else {
              sum[4] += 3.16841793;
            }
          } else {
            if (sample[4] <109) {
              sum[4] += 0.577981651;
            } else {
              sum[4] += -0.582016826;
            }
          }
        }
      } else {
        if (sample[1] <86) {
          if (sample[3] <4) {
            if (sample[4] <77) {
              sum[4] += -0.571308374;
            } else {
              sum[4] += 3.23897243;
            }
          } else {
            if (sample[3] <6) {
              sum[4] += -0.130697235;
            } else {
              sum[4] += -0.556553066;
            }
          }
        } else {
          if (sample[4] <46) {
            if (sample[4] <26) {
              sum[4] += -0.582961977;
            } else {
              sum[4] += -0.573106945;
            }
          } else {
            if (sample[0] <107) {
              sum[4] += -0.557014406;
            } else {
              sum[4] += -0.249431252;
            }
          }
        }
      }
    } else {
      if (sample[3] <136) {
        if (sample[3] <14) {
          if (sample[1] <70) {
            if (sample[2] <92) {
              sum[4] += -0.53801012;
            } else {
              sum[4] += 0.766359866;
            }
          } else {
            if (sample[1] <75) {
              sum[4] += -0.530108392;
            } else {
              sum[4] += -0.578330815;
            }
          }
        } else {
          if (sample[3] <121) {
            if (sample[3] <18) {
              sum[4] += -0.572873771;
            } else {
              sum[4] += -0.582867622;
            }
          } else {
            if (sample[4] <57) {
              sum[4] += -0.577880859;
            } else {
              sum[4] += 0.75021708;
            }
          }
        }
      } else {
        if (sample[4] <45) {
          if (sample[4] <37) {
            if (sample[4] <28) {
              sum[4] += -0.581301689;
            } else {
              sum[4] += -0.425623;
            }
          } else {
            if (sample[2] <119) {
              sum[4] += -0.436737537;
            } else {
              sum[4] += 2.05015039;
            }
          }
        } else {
          if (sample[0] <124) {
            if (sample[2] <94) {
              sum[4] += -0.388801068;
            } else {
              sum[4] += 0.843373418;
            }
          } else {
            if (sample[0] <132) {
              sum[4] += 1.53185582;
            } else {
              sum[4] += 3.19118619;
            }
          }
        }
      }
    }
  } else {
    if (sample[4] <54) {
      if (sample[4] <40) {
        if (sample[4] <33) {
          if (sample[4] <26) {
            if (sample[4] <22) {
              sum[4] += -0.582557857;
            } else {
              sum[4] += -0.564953327;
            }
          } else {
            if (sample[0] <176) {
              sum[4] += -0.533653855;
            } else {
              sum[4] += 0.621621549;
            }
          }
        } else {
          if (sample[5] <150) {
            if (sample[0] <133) {
              sum[4] += -0.541152596;
            } else {
              sum[4] += 0.20121026;
            }
          } else {
            if (sample[3] <172) {
              sum[4] += 2.83844376;
            } else {
              sum[4] += -0.170362368;
            }
          }
        }
      } else {
        if (sample[0] <129) {
          if (sample[0] <118) {
            if (sample[3] <161) {
              sum[4] += -0.214781642;
            } else {
              sum[4] += -0.515446186;
            }
          } else {
            if (sample[1] <107) {
              sum[4] += 1.42818785;
            } else {
              sum[4] += 0.144773588;
            }
          }
        } else {
          if (sample[0] <149) {
            if (sample[1] <118) {
              sum[4] += 2.73498774;
            } else {
              sum[4] += 1.60331011;
            }
          } else {
            sum[4] += 3.3071332;
          }
        }
      }
    } else {
      if (sample[5] <102) {
        if (sample[2] <94) {
          if (sample[1] <73) {
            if (sample[1] <65) {
              sum[4] += -0.53768158;
            } else {
              sum[4] += -0.226428092;
            }
          } else {
            sum[4] += 0.867768586;
          }
        } else {
          if (sample[0] <65) {
            if (sample[1] <58) {
              sum[4] += 0.577981651;
            } else {
              sum[4] += 2.43478251;
            }
          } else {
            if (sample[4] <89) {
              sum[4] += 0.79576993;
            } else {
              sum[4] += -0.436672956;
            }
          }
        }
      } else {
        if (sample[4] <97) {
          if (sample[3] <167) {
            if (sample[2] <118) {
              sum[4] += 1.96279836;
            } else {
              sum[4] += 3.48847866;
            }
          } else {
            if (sample[1] <96) {
              sum[4] += 3.34670472;
            } else {
              sum[4] += 1.87670863;
            }
          }
        } else {
          if (sample[2] <127) {
            if (sample[4] <101) {
              sum[4] += 2.79402328;
            } else {
              sum[4] += 0.136216193;
            }
          } else {
            if (sample[3] <167) {
              sum[4] += 1.83375299;
            } else {
              sum[4] += -0.494373947;
            }
          }
        }
      }
    }
  }


  if (sample[3] <18) {
    if (sample[4] <128) {
      if (sample[4] <119) {
        if (sample[4] <101) {
          if (sample[4] <74) {
            if (sample[4] <44) {
              sum[5] += -0.582812965;
            } else {
              sum[5] += -0.573001027;
            }
          } else {
            if (sample[2] <154) {
              sum[5] += -0.559118092;
            } else {
              sum[5] += 1.27925134;
            }
          }
        } else {
          if (sample[2] <154) {
            if (sample[2] <129) {
              sum[5] += -0.549198985;
            } else {
              sum[5] += 0.439084947;
            }
          } else {
            if (sample[3] <14) {
              sum[5] += 3.26635408;
            } else {
              sum[5] += -0.0830039605;
            }
          }
        }
      } else {
        if (sample[2] <157) {
          if (sample[2] <126) {
            if (sample[3] <6) {
              sum[5] += 0.0179257188;
            } else {
              sum[5] += -0.558776975;
            }
          } else {
            if (sample[1] <90) {
              sum[5] += 1.63169265;
            } else {
              sum[5] += 0.0120068435;
            }
          }
        } else {
          if (sample[1] <121) {
            if (sample[2] <169) {
              sum[5] += 2.51449943;
            } else {
              sum[5] += 3.48940611;
            }
          } else {
            sum[5] += -0.34710744;
          }
        }
      }
    } else {
      if (sample[2] <84) {
        if (sample[2] <57) {
          if (sample[2] <46) {
            if (sample[2] <38) {
              sum[5] += -0.581862986;
            } else {
              sum[5] += -0.50492996;
            }
          } else {
            if (sample[1] <20) {
              sum[5] += 2.52752876;
            } else {
              sum[5] += -0.536819458;
            }
          }
        } else {
          if (sample[0] <1) {
            if (sample[3] <15) {
              sum[5] += 2.83226895;
            } else {
              sum[5] += 0.664879322;
            }
          } else {
            sum[5] += -0.557858169;
          }
        }
      } else {
        if (sample[2] <134) {
          if (sample[0] <3) {
            if (sample[3] <15) {
              sum[5] += 1.34828484;
            } else {
              sum[5] += 3.35004687;
            }
          } else {
            if (sample[2] <119) {
              sum[5] += -0.278257996;
            } else {
              sum[5] += 1.03773463;
            }
          }
        } else {
          if (sample[4] <172) {
            if (sample[0] <77) {
              sum[5] += 2.65703344;
            } else {
              sum[5] += 3.375983;
            }
          } else {
            if (sample[3] <14) {
              sum[5] += 3.38259435;
            } else {
              sum[5] += 2.94992185;
            }
          }
        }
      }
    }
  } else {
    if (sample[3] <19) {
      if (sample[4] <221) {
        if (sample[4] <201) {
          if (sample[4] <147) {
            if (sample[4] <84) {
              sum[5] += -0.582951248;
            } else {
              sum[5] += -0.567443252;
            }
          } else {
            if (sample[1] <108) {
              sum[5] += -0.48484385;
            } else {
              sum[5] += 1.56846464;
            }
          }
        } else {
          if (sample[2] <92) {
            if (sample[2] <86) {
              sum[5] += -0.566450059;
            } else {
              sum[5] += -0.265822798;
            }
          } else {
            if (sample[1] <81) {
              sum[5] += 0.561497271;
            } else {
              sum[5] += -0.207715139;
            }
          }
        }
      } else {
        if (sample[2] <84) {
          if (sample[2] <71) {
            if (sample[1] <40) {
              sum[5] += -0.580781996;
            } else {
              sum[5] += -0.416451097;
            }
          } else {
            if (sample[1] <43) {
              sum[5] += 0.490092427;
            } else {
              sum[5] += -0.157791585;
            }
          }
        } else {
          if (sample[2] <92) {
            if (sample[1] <53) {
              sum[5] += 2.46277356;
            } else {
              sum[5] += 0.79130429;
            }
          } else {
            if (sample[4] <229) {
              sum[5] += 1.11401415;
            } else {
              sum[5] += 3.38985682;
            }
          }
        }
      }
    } else {
      if (sample[3] <166) {
        if (sample[3] <20) {
          if (sample[4] <213) {
            if (sample[4] <119) {
              sum[5] += -0.582287729;
            } else {
              sum[5] += -0.534585178;
            }
          } else {
            if (sample[2] <91) {
              sum[5] += -0.520135581;
            } else {
              sum[5] += 2.22422934;
            }
          }
        } else {
          if (sample[4] <59) {
            if (sample[3] <151) {
              sum[5] += -0.583223641;
            } else {
              sum[5] += -0.576013267;
            }
          } else {
            if (sample[3] <22) {
              sum[5] += -0.565342784;
            } else {
              sum[5] += -0.581533432;
            }
          }
        }
      } else {
        if (sample[4] <97) {
          if (sample[4] <47) {
            if (sample[4] <33) {
              sum[5] += -0.581480205;
            } else {
              sum[5] += -0.545525372;
            }
          } else {
            if (sample[2] <156) {
              sum[5] += -0.497731686;
            } else {
              sum[5] += 0.856749535;
            }
          }
        } else {
          if (sample[1] <81) {
            if (sample[2] <150) {
              sum[5] += -0.326863199;
            } else {
              sum[5] += 1.64137924;
            }
          } else {
            if (sample[0] <88) {
              sum[5] += 0.535031796;
            } else {
              sum[5] += 3.16114497;
            }
          }
        }
      }
    }
  }


  if (sample[2] <203) {
    if (sample[2] <196) {
      if (sample[4] <97) {
        if (sample[4] <80) {
          if (sample[4] <63) {
            if (sample[4] <39) {
              sum[6] += -0.583167911;
            } else {
              sum[6] += -0.581671715;
            }
          } else {
            if (sample[1] <178) {
              sum[6] += -0.579844236;
            } else {
              sum[6] += 0.186036184;
            }
          }
        } else {
          if (sample[1] <171) {
            if (sample[1] <159) {
              sum[6] += -0.578852832;
            } else {
              sum[6] += 0.601323247;
            }
          } else {
            if (sample[3] <52) {
              sum[6] += 3.00572371;
            } else {
              sum[6] += -0.545979738;
            }
          }
        }
      } else {
        if (sample[1] <168) {
          if (sample[2] <113) {
            if (sample[2] <106) {
              sum[6] += -0.580337286;
            } else {
              sum[6] += -0.465013593;
            }
          } else {
            if (sample[3] <25) {
              sum[6] += -0.569682479;
            } else {
              sum[6] += 0.484850615;
            }
          }
        } else {
          if (sample[3] <47) {
            if (sample[2] <166) {
              sum[6] += 2.37932301;
            } else {
              sum[6] += 3.49177575;
            }
          } else {
            if (sample[3] <65) {
              sum[6] += 0.90212065;
            } else {
              sum[6] += -0.580224097;
            }
          }
        }
      }
    } else {
      if (sample[0] <152) {
        if (sample[1] <159) {
          if (sample[3] <7) {
            sum[6] += -0.506702423;
          } else {
            sum[6] += 0.867768586;
          }
        } else {
          sum[6] += 3.49778533;
        }
      } else {
        if (sample[0] <164) {
          if (sample[1] <194) {
            if (sample[4] <56) {
              sum[6] += -0.536704719;
            } else {
              sum[6] += 0.462809891;
            }
          } else {
            sum[6] += 2.88086629;
          }
        } else {
          if (sample[0] <170) {
            if (sample[3] <29) {
              sum[6] += -0.561497331;
            } else {
              sum[6] += 1.47368419;
            }
          } else {
            sum[6] += -0.582964897;
          }
        }
      }
    }
  } else {
    if (sample[4] <43) {
      sum[6] += -0.580329895;
    } else {
      if (sample[1] <168) {
        sum[6] += 0.965517223;
      } else {
        sum[6] += 3.49960303;
      }
    }
  }


  return sum;
}
}

