#include <trifinger_object_tracking/color_segmenter.hpp>
#include <iostream>
#include <fstream>

namespace trifinger_object_tracking {
    std::array<float, XGB_NUM_CLASSES> xgb_classify_cube_v2(std::array<float, XGB_NUM_FEATURES> &sample) {

    std::array<float, XGB_NUM_CLASSES> sum;
    sum.fill(0.0);

  if (sample[4] <77) {
    if (sample[3] <141) {
      if (sample[4] <59) {
        if (sample[4] <37) {
          if (sample[1] <87) {
            if (sample[4] <13) {
              if (sample[0] <81) {
                sum[0] += 1.74101746;
              } else {
                if (sample[0] <83) {
                  if (sample[4] <4) {
                    if (sample[0] <82) {
                      sum[0] += 1.70504272;
                    } else {
                      if (sample[2] <83) {
                        if (sample[1] <83) {
                          sum[0] += 1.17767537;
                        } else {
                          sum[0] += 0.932756722;
                        }
                      } else {
                        sum[0] += 1.38497269;
                      }
                    }
                  } else {
                    if (sample[3] <46) {
                      if (sample[5] <86) {
                        if (sample[1] <84) {
                          sum[0] += 1.67816544;
                        } else {
                          sum[0] += 1.33730721;
                        }
                      } else {
                        sum[0] += 1.72951293;
                      }
                    } else {
                      if (sample[4] <7) {
                        if (sample[0] <82) {
                          sum[0] += 1.699224;
                        } else {
                          sum[0] += 1.4977293;
                        }
                      } else {
                        sum[0] += 1.7200731;
                      }
                    }
                  }
                } else {
                  if (sample[0] <87) {
                    sum[0] += 1.72644806;
                  } else {
                    if (sample[0] <88) {
                      if (sample[4] <10) {
                        sum[0] += 1.49147248;
                      } else {
                        sum[0] += 1.69536591;
                      }
                    } else {
                      sum[0] += 1.70936346;
                    }
                  }
                }
              }
            } else {
              sum[0] += 1.74708867;
            }
          } else {
            sum[0] += 1.74948251;
          }
        } else {
          if (sample[3] <134) {
            if (sample[3] <113) {
              if (sample[2] <205) {
                if (sample[1] <149) {
                  if (sample[2] <179) {
                    if (sample[2] <177) {
                      sum[0] += 1.7480123;
                    } else {
                      if (sample[3] <4) {
                        sum[0] += 0.0642201751;
                      } else {
                        sum[0] += 0.921052575;
                      }
                    }
                  } else {
                    if (sample[0] <143) {
                      sum[0] += 0.0642201751;
                    } else {
                      sum[0] += -0.23517786;
                    }
                  }
                } else {
                  if (sample[4] <52) {
                    sum[0] += 1.74040544;
                  } else {
                    if (sample[3] <7) {
                      if (sample[1] <152) {
                        sum[0] += -0.16055046;
                      } else {
                        sum[0] += 0.184210509;
                      }
                    } else {
                      if (sample[3] <111) {
                        if (sample[2] <201) {
                          sum[0] += 1.68045318;
                        } else {
                          sum[0] += 0.732851923;
                        }
                      } else {
                        if (sample[0] <204) {
                          sum[0] += 0.827723622;
                        } else {
                          sum[0] += 1.69332445;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <197) {
                  sum[0] += 1.65086699;
                } else {
                  if (sample[0] <178) {
                    sum[0] += -0.253351212;
                  } else {
                    sum[0] += 1.04132223;
                  }
                }
              }
            } else {
              if (sample[0] <167) {
                if (sample[2] <143) {
                  if (sample[4] <49) {
                    if (sample[0] <122) {
                      sum[0] += 1.73722899;
                    } else {
                      if (sample[2] <108) {
                        if (sample[0] <125) {
                          sum[0] += 1.71190417;
                        } else {
                          sum[0] += 1.58908224;
                        }
                      } else {
                        if (sample[3] <124) {
                          sum[0] += 1.72450352;
                        } else {
                          sum[0] += 1.57631052;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <135) {
                      if (sample[0] <127) {
                        if (sample[0] <125) {
                          sum[0] += 1.63636816;
                        } else {
                          sum[0] += 1.41122389;
                        }
                      } else {
                        if (sample[3] <123) {
                          sum[0] += 1.7090584;
                        } else {
                          sum[0] += 1.05543232;
                        }
                      }
                    } else {
                      if (sample[3] <130) {
                        sum[0] += -0.225806445;
                      } else {
                        sum[0] += -0.0445859917;
                      }
                    }
                  }
                } else {
                  if (sample[2] <145) {
                    sum[0] += 0.313793093;
                  } else {
                    if (sample[3] <131) {
                      sum[0] += 0.0289256144;
                    } else {
                      sum[0] += -0.212707177;
                    }
                  }
                }
              } else {
                if (sample[1] <175) {
                  if (sample[0] <175) {
                    if (sample[3] <117) {
                      if (sample[1] <143) {
                        if (sample[0] <169) {
                          sum[0] += 1.13842654;
                        } else {
                          sum[0] += 0.149643689;
                        }
                      } else {
                        if (sample[3] <115) {
                          sum[0] += 1.47659218;
                        } else {
                          sum[0] += 0.802292228;
                        }
                      }
                    } else {
                      if (sample[4] <43) {
                        if (sample[3] <122) {
                          sum[0] += 0.942693353;
                        } else {
                          sum[0] += 0.0289256144;
                        }
                      } else {
                        if (sample[3] <128) {
                          sum[0] += 0.147567555;
                        } else {
                          sum[0] += -0.256723702;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <46) {
                      if (sample[1] <168) {
                        if (sample[4] <39) {
                          sum[0] += 0.969529033;
                        } else {
                          sum[0] += 0.0981900319;
                        }
                      } else {
                        if (sample[2] <169) {
                          sum[0] += 1.13347912;
                        } else {
                          sum[0] += 0.231404945;
                        }
                      }
                    } else {
                      if (sample[1] <166) {
                        if (sample[3] <115) {
                          sum[0] += 0.0352241434;
                        } else {
                          sum[0] += -0.188603282;
                        }
                      } else {
                        if (sample[2] <169) {
                          sum[0] += 0.405307561;
                        } else {
                          sum[0] += -0.244186044;
                        }
                      }
                    }
                  }
                } else {
                  sum[0] += 1.67965782;
                }
              }
            }
          } else {
            if (sample[0] <135) {
              if (sample[2] <119) {
                if (sample[4] <47) {
                  sum[0] += 1.66592407;
                } else {
                  if (sample[0] <76) {
                    sum[0] += 1.67016649;
                  } else {
                    if (sample[0] <77) {
                      if (sample[1] <62) {
                        sum[0] += 0.552631557;
                      } else {
                        sum[0] += -5.48990142e-09;
                      }
                    } else {
                      if (sample[4] <55) {
                        sum[0] += 1.40612054;
                      } else {
                        if (sample[0] <102) {
                          sum[0] += 1.22696626;
                        } else {
                          sum[0] += 0.40697673;
                        }
                      }
                    }
                  }
                }
              } else {
                sum[0] += 0.838587582;
              }
            } else {
              if (sample[0] <157) {
                if (sample[4] <42) {
                  sum[0] += 0.610929787;
                } else {
                  if (sample[3] <140) {
                    if (sample[1] <125) {
                      if (sample[2] <141) {
                        if (sample[1] <111) {
                          sum[0] += -0.221951216;
                        } else {
                          sum[0] += 0.093610689;
                        }
                      } else {
                        if (sample[1] <122) {
                          sum[0] += 0.0642201751;
                        } else {
                          sum[0] += 0.670984447;
                        }
                      }
                    } else {
                      sum[0] += -0.225806445;
                    }
                  } else {
                    sum[0] += -0.244186044;
                  }
                }
              } else {
                if (sample[1] <128) {
                  if (sample[4] <57) {
                    if (sample[1] <127) {
                      sum[0] += 0.0289256144;
                    } else {
                      sum[0] += -0.200636938;
                    }
                  } else {
                    if (sample[0] <159) {
                      sum[0] += -0.16055046;
                    } else {
                      sum[0] += 0.433884293;
                    }
                  }
                } else {
                  sum[0] += -0.278740406;
                }
              }
            }
          }
        }
      } else {
        if (sample[3] <113) {
          if (sample[2] <192) {
            if (sample[1] <132) {
              if (sample[2] <157) {
                if (sample[3] <3) {
                  if (sample[2] <127) {
                    if (sample[4] <68) {
                      sum[0] += 1.63142896;
                    } else {
                      if (sample[2] <105) {
                        sum[0] += 1.54095554;
                      } else {
                        if (sample[3] <2) {
                          sum[0] += 0.0415430181;
                        } else {
                          sum[0] += 0.763636291;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <66) {
                      if (sample[1] <120) {
                        if (sample[2] <149) {
                          sum[0] += 0.766423285;
                        } else {
                          sum[0] += 1.41772139;
                        }
                      } else {
                        sum[0] += -0.16055046;
                      }
                    } else {
                      if (sample[2] <151) {
                        if (sample[2] <134) {
                          sum[0] += 0.207838461;
                        } else {
                          sum[0] += -0.108053692;
                        }
                      } else {
                        if (sample[2] <155) {
                          sum[0] += 1.16157198;
                        } else {
                          sum[0] += 0.288990825;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <112) {
                    if (sample[3] <5) {
                      if (sample[2] <135) {
                        sum[0] += 1.67055917;
                      } else {
                        if (sample[1] <115) {
                          sum[0] += 0.0203094687;
                        } else {
                          sum[0] += 1.0366056;
                        }
                      }
                    } else {
                      sum[0] += 1.74558449;
                    }
                  } else {
                    if (sample[0] <127) {
                      if (sample[0] <114) {
                        sum[0] += 1.6180042;
                      } else {
                        if (sample[0] <116) {
                          sum[0] += 0.843106151;
                        } else {
                          sum[0] += 1.49094617;
                        }
                      }
                    } else {
                      if (sample[0] <163) {
                        sum[0] += 1.72773421;
                      } else {
                        sum[0] += 0.569767416;
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <7) {
                  if (sample[4] <76) {
                    sum[0] += -0.276013136;
                  } else {
                    sum[0] += -0.0241379365;
                  }
                } else {
                  if (sample[1] <129) {
                    sum[0] += 0.231404945;
                  } else {
                    sum[0] += 1.31948876;
                  }
                }
              }
            } else {
              if (sample[3] <9) {
                if (sample[4] <62) {
                  if (sample[3] <7) {
                    if (sample[0] <130) {
                      sum[0] += 0.231404945;
                    } else {
                      if (sample[0] <142) {
                        sum[0] += -0.184210524;
                      } else {
                        sum[0] += 0.0642201751;
                      }
                    }
                  } else {
                    sum[0] += 1.44459832;
                  }
                } else {
                  if (sample[2] <171) {
                    if (sample[1] <136) {
                      if (sample[0] <123) {
                        sum[0] += 0.0642201751;
                      } else {
                        sum[0] += -0.193103448;
                      }
                    } else {
                      sum[0] += 1.10526311;
                    }
                  } else {
                    if (sample[0] <140) {
                      if (sample[4] <63) {
                        sum[0] += 0.0289256144;
                      } else {
                        if (sample[3] <4) {
                          sum[0] += -0.11290323;
                        } else {
                          sum[0] += -0.261194021;
                        }
                      }
                    } else {
                      sum[0] += 0.0289256144;
                    }
                  }
                }
              } else {
                if (sample[3] <112) {
                  if (sample[3] <101) {
                    if (sample[1] <183) {
                      if (sample[3] <24) {
                        if (sample[2] <180) {
                          sum[0] += 1.72391903;
                        } else {
                          sum[0] += 1.48571634;
                        }
                      } else {
                        if (sample[2] <149) {
                          sum[0] += 1.62534654;
                        } else {
                          sum[0] += 1.35215926;
                        }
                      }
                    } else {
                      if (sample[3] <58) {
                        if (sample[1] <189) {
                          sum[0] += 0.506672025;
                        } else {
                          sum[0] += -0.241914034;
                        }
                      } else {
                        sum[0] += 1.71446323;
                      }
                    }
                  } else {
                    if (sample[3] <111) {
                      sum[0] += 1.72605598;
                    } else {
                      if (sample[4] <72) {
                        sum[0] += 1.59380317;
                      } else {
                        if (sample[2] <124) {
                          sum[0] += 1.21438634;
                        } else {
                          sum[0] += 0.853059113;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <173) {
                    if (sample[4] <69) {
                      sum[0] += 1.4659251;
                    } else {
                      sum[0] += 0.922010362;
                    }
                  } else {
                    if (sample[1] <174) {
                      if (sample[0] <191) {
                        if (sample[1] <146) {
                          sum[0] += 0.515337408;
                        } else {
                          sum[0] += 0.916751206;
                        }
                      } else {
                        if (sample[1] <162) {
                          sum[0] += -0.127272725;
                        } else {
                          sum[0] += 0.22580643;
                        }
                      }
                    } else {
                      sum[0] += 1.58905101;
                    }
                  }
                }
              }
            }
          } else {
            if (sample[3] <26) {
              if (sample[1] <174) {
                if (sample[2] <194) {
                  sum[0] += 0.0289256144;
                } else {
                  sum[0] += -0.17355372;
                }
              } else {
                if (sample[3] <25) {
                  sum[0] += 1.61154068;
                } else {
                  sum[0] += 0.779245257;
                }
              }
            } else {
              if (sample[0] <165) {
                if (sample[1] <189) {
                  if (sample[2] <194) {
                    sum[0] += 0.738532066;
                  } else {
                    sum[0] += 0.231404945;
                  }
                } else {
                  if (sample[3] <27) {
                    if (sample[1] <193) {
                      sum[0] += 0.0642201751;
                    } else {
                      sum[0] += -0.200636938;
                    }
                  } else {
                    sum[0] += -0.286826938;
                  }
                }
              } else {
                sum[0] += 1.04132223;
              }
            }
          }
        } else {
          if (sample[2] <124) {
            if (sample[1] <104) {
              if (sample[0] <114) {
                if (sample[2] <93) {
                  if (sample[1] <58) {
                    sum[0] += 1.7375381;
                  } else {
                    sum[0] += 1.50824249;
                  }
                } else {
                  if (sample[3] <138) {
                    if (sample[4] <61) {
                      if (sample[2] <99) {
                        sum[0] += 0.0642201751;
                      } else {
                        sum[0] += 0.288990825;
                      }
                    } else {
                      if (sample[2] <98) {
                        sum[0] += 1.0866425;
                      } else {
                        sum[0] += 0.288990825;
                      }
                    }
                  } else {
                    if (sample[0] <111) {
                      sum[0] += -0.221951216;
                    } else {
                      sum[0] += 0.0642201751;
                    }
                  }
                }
              } else {
                if (sample[2] <91) {
                  if (sample[0] <122) {
                    if (sample[0] <116) {
                      if (sample[1] <89) {
                        if (sample[1] <86) {
                          sum[0] += 0.733201563;
                        } else {
                          sum[0] += 1.44598532;
                        }
                      } else {
                        if (sample[4] <64) {
                          sum[0] += 0.88176012;
                        } else {
                          sum[0] += 0.349908859;
                        }
                      }
                    } else {
                      if (sample[1] <92) {
                        sum[0] += 1.47820151;
                      } else {
                        if (sample[1] <95) {
                          sum[0] += 0.847936094;
                        } else {
                          sum[0] += 1.22605681;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <124) {
                      if (sample[0] <123) {
                        if (sample[1] <95) {
                          sum[0] += 0.586446047;
                        } else {
                          sum[0] += -0.077146478;
                        }
                      } else {
                        if (sample[1] <98) {
                          sum[0] += 0.289348155;
                        } else {
                          sum[0] += 1.33707857;
                        }
                      }
                    } else {
                      if (sample[4] <74) {
                        if (sample[0] <126) {
                          sum[0] += 0.898791492;
                        } else {
                          sum[0] += 0.431850761;
                        }
                      } else {
                        if (sample[3] <118) {
                          sum[0] += 1.16865814;
                        } else {
                          sum[0] += 0.231404945;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <126) {
                    if (sample[3] <115) {
                      if (sample[0] <122) {
                        sum[0] += 1.46287167;
                      } else {
                        if (sample[0] <123) {
                          sum[0] += 0.662427783;
                        } else {
                          sum[0] += 1.15152609;
                        }
                      }
                    } else {
                      if (sample[4] <65) {
                        sum[0] += 1.58388948;
                      } else {
                        if (sample[0] <124) {
                          sum[0] += 0.599286497;
                        } else {
                          sum[0] += 1.30635977;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <98) {
                      sum[0] += 1.22079992;
                    } else {
                      if (sample[1] <99) {
                        if (sample[4] <68) {
                          sum[0] += 0.237799019;
                        } else {
                          sum[0] += -0.139844611;
                        }
                      } else {
                        if (sample[2] <121) {
                          sum[0] += 0.9174757;
                        } else {
                          sum[0] += -0.16055046;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[3] <118) {
                if (sample[4] <72) {
                  if (sample[0] <162) {
                    if (sample[3] <117) {
                      sum[0] += 1.68350458;
                    } else {
                      if (sample[4] <70) {
                        sum[0] += 1.47814941;
                      } else {
                        if (sample[0] <151) {
                          sum[0] += 0.636363626;
                        } else {
                          sum[0] += -0.200636938;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <65) {
                      if (sample[0] <164) {
                        sum[0] += 0.913946509;
                      } else {
                        sum[0] += 0.313793093;
                      }
                    } else {
                      sum[0] += 1.36522996;
                    }
                  }
                } else {
                  if (sample[3] <117) {
                    if (sample[0] <134) {
                      sum[0] += 0.174273849;
                    } else {
                      if (sample[3] <114) {
                        if (sample[0] <162) {
                          sum[0] += 1.59927869;
                        } else {
                          sum[0] += 0.974683464;
                        }
                      } else {
                        if (sample[0] <168) {
                          sum[0] += 1.31992269;
                        } else {
                          sum[0] += 0.731591403;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <146) {
                      sum[0] += 0.513761461;
                    } else {
                      if (sample[0] <164) {
                        sum[0] += -0.232365146;
                      } else {
                        sum[0] += 0.288990825;
                      }
                    }
                  }
                }
              } else {
                if (sample[0] <148) {
                  if (sample[4] <69) {
                    if (sample[2] <120) {
                      sum[0] += 1.19048893;
                    } else {
                      sum[0] += 0.184210509;
                    }
                  } else {
                    if (sample[2] <107) {
                      if (sample[3] <119) {
                        sum[0] += 0.963302732;
                      } else {
                        sum[0] += 0.328729272;
                      }
                    } else {
                      sum[0] += -0.217616573;
                    }
                  }
                } else {
                  if (sample[0] <160) {
                    if (sample[3] <121) {
                      if (sample[4] <72) {
                        if (sample[1] <114) {
                          sum[0] += 1.10526311;
                        } else {
                          sum[0] += 0.498812318;
                        }
                      } else {
                        if (sample[0] <151) {
                          sum[0] += 0.433884293;
                        } else {
                          sum[0] += -0.062130183;
                        }
                      }
                    } else {
                      if (sample[0] <156) {
                        if (sample[3] <122) {
                          sum[0] += 0.111464955;
                        } else {
                          sum[0] += -0.237735853;
                        }
                      } else {
                        if (sample[3] <124) {
                          sum[0] += -0.17355372;
                        } else {
                          sum[0] += 0.738532066;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <65) {
                      sum[0] += 0.184210509;
                    } else {
                      if (sample[4] <69) {
                        sum[0] += -0.0445859917;
                      } else {
                        sum[0] += -0.264023215;
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[1] <174) {
              if (sample[2] <132) {
                if (sample[3] <117) {
                  if (sample[0] <178) {
                    if (sample[1] <136) {
                      sum[0] += 1.12421262;
                    } else {
                      if (sample[2] <127) {
                        if (sample[0] <176) {
                          sum[0] += 0.316981107;
                        } else {
                          sum[0] += -0.16055046;
                        }
                      } else {
                        sum[0] += 0.877632856;
                      }
                    }
                  } else {
                    if (sample[2] <130) {
                      if (sample[1] <136) {
                        sum[0] += -0.0445859917;
                      } else {
                        if (sample[1] <141) {
                          sum[0] += 0.813953459;
                        } else {
                          sum[0] += 0.0828402266;
                        }
                      }
                    } else {
                      if (sample[3] <114) {
                        if (sample[0] <181) {
                          sum[0] += 0.423566848;
                        } else {
                          sum[0] += 0.0289256144;
                        }
                      } else {
                        if (sample[1] <140) {
                          sum[0] += -0.0241379365;
                        } else {
                          sum[0] += -0.212707177;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <118) {
                    if (sample[0] <171) {
                      sum[0] += 0.423566848;
                    } else {
                      if (sample[1] <134) {
                        sum[0] += 0.0642201751;
                      } else {
                        sum[0] += -0.207100585;
                      }
                    }
                  } else {
                    if (sample[4] <61) {
                      if (sample[2] <127) {
                        sum[0] += 0.267515898;
                      } else {
                        sum[0] += -0.16055046;
                      }
                    } else {
                      if (sample[2] <126) {
                        if (sample[4] <70) {
                          sum[0] += 0.0396226309;
                        } else {
                          sum[0] += -0.221951216;
                        }
                      } else {
                        sum[0] += -0.281580806;
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <173) {
                  if (sample[3] <114) {
                    if (sample[0] <186) {
                      if (sample[2] <133) {
                        sum[0] += 0.552631557;
                      } else {
                        if (sample[4] <64) {
                          sum[0] += 0.202823162;
                        } else {
                          sum[0] += -0.0640599057;
                        }
                      }
                    } else {
                      if (sample[4] <61) {
                        sum[0] += 0.288990825;
                      } else {
                        if (sample[0] <209) {
                          sum[0] += -0.246820807;
                        } else {
                          sum[0] += -0.0241379365;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <135) {
                      if (sample[4] <61) {
                        if (sample[0] <157) {
                          sum[0] += 0.0642201751;
                        } else {
                          sum[0] += 0.433884293;
                        }
                      } else {
                        if (sample[3] <115) {
                          sum[0] += 0.0612691343;
                        } else {
                          sum[0] += -0.245836347;
                        }
                      }
                    } else {
                      if (sample[1] <157) {
                        if (sample[0] <183) {
                          sum[0] += -0.242715836;
                        } else {
                          sum[0] += -0.288963974;
                        }
                      } else {
                        if (sample[4] <60) {
                          sum[0] += 0.231404945;
                        } else {
                          sum[0] += -0.206636146;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <166) {
                    sum[0] += -0.184210524;
                  } else {
                    sum[0] += 0.870165706;
                  }
                }
              }
            } else {
              if (sample[0] <223) {
                sum[0] += 0.0289256144;
              } else {
                sum[0] += 1.72433507;
              }
            }
          }
        }
      }
    } else {
      if (sample[4] <54) {
        if (sample[4] <43) {
          if (sample[4] <35) {
            if (sample[4] <26) {
              sum[0] += 1.74790859;
            } else {
              if (sample[0] <184) {
                if (sample[0] <150) {
                  sum[0] += 1.72682059;
                } else {
                  if (sample[3] <158) {
                    if (sample[3] <144) {
                      if (sample[4] <27) {
                        sum[0] += 1.04777062;
                      } else {
                        if (sample[0] <153) {
                          sum[0] += 0.288990825;
                        } else {
                          sum[0] += -0.193103448;
                        }
                      }
                    } else {
                      sum[0] += -0.278297454;
                    }
                  } else {
                    if (sample[1] <143) {
                      if (sample[4] <30) {
                        sum[0] += 0.963302732;
                      } else {
                        sum[0] += -5.48990142e-09;
                      }
                    } else {
                      sum[0] += 1.69050467;
                    }
                  }
                }
              } else {
                if (sample[3] <154) {
                  sum[0] += -0.259550571;
                } else {
                  sum[0] += 1.1586206;
                }
              }
            }
          } else {
            if (sample[0] <141) {
              if (sample[0] <125) {
                if (sample[3] <162) {
                  sum[0] += 1.59709191;
                } else {
                  sum[0] += 1.71099091;
                }
              } else {
                if (sample[3] <174) {
                  if (sample[4] <37) {
                    sum[0] += 1.08813107;
                  } else {
                    if (sample[1] <126) {
                      if (sample[3] <148) {
                        if (sample[1] <117) {
                          sum[0] += 1.18092906;
                        } else {
                          sum[0] += 0.290155411;
                        }
                      } else {
                        if (sample[3] <160) {
                          sum[0] += 0.281382203;
                        } else {
                          sum[0] += 0.914309442;
                        }
                      }
                    } else {
                      sum[0] += -0.207100585;
                    }
                  }
                } else {
                  sum[0] += 1.53143573;
                }
              }
            } else {
              if (sample[3] <172) {
                if (sample[5] <150) {
                  if (sample[1] <121) {
                    sum[0] += 0.144827574;
                  } else {
                    sum[0] += 0.78978616;
                  }
                } else {
                  if (sample[3] <171) {
                    if (sample[0] <147) {
                      if (sample[2] <157) {
                        sum[0] += -0.193103448;
                      } else {
                        sum[0] += -5.48990142e-09;
                      }
                    } else {
                      if (sample[3] <168) {
                        sum[0] += -0.28735286;
                      } else {
                        if (sample[0] <159) {
                          sum[0] += -0.217616573;
                        } else {
                          sum[0] += 0.0642201751;
                        }
                      }
                    }
                  } else {
                    sum[0] += 0.313793093;
                  }
                }
              } else {
                if (sample[4] <38) {
                  sum[0] += 1.48712432;
                } else {
                  if (sample[0] <156) {
                    if (sample[4] <40) {
                      sum[0] += 0.790322542;
                    } else {
                      sum[0] += 0.0828402266;
                    }
                  } else {
                    sum[0] += -0.200636938;
                  }
                }
              }
            }
          }
        } else {
          if (sample[0] <121) {
            if (sample[3] <168) {
              if (sample[5] <91) {
                if (sample[5] <75) {
                  sum[0] += 1.69357085;
                } else {
                  if (sample[2] <72) {
                    sum[0] += 0.0642201751;
                  } else {
                    sum[0] += 1.42431748;
                  }
                }
              } else {
                if (sample[3] <161) {
                  if (sample[4] <49) {
                    if (sample[2] <99) {
                      sum[0] += 1.36506462;
                    } else {
                      if (sample[3] <156) {
                        if (sample[3] <146) {
                          sum[0] += 1.08076;
                        } else {
                          sum[0] += 0.42956239;
                        }
                      } else {
                        if (sample[0] <99) {
                          sum[0] += 0.433884293;
                        } else {
                          sum[0] += 1.28910887;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <96) {
                      sum[0] += 0.958461463;
                    } else {
                      if (sample[3] <152) {
                        if (sample[0] <118) {
                          sum[0] += 0.190152779;
                        } else {
                          sum[0] += -0.16055046;
                        }
                      } else {
                        if (sample[0] <111) {
                          sum[0] += 0.349272311;
                        } else {
                          sum[0] += 0.732851923;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <100) {
                    if (sample[4] <51) {
                      if (sample[0] <98) {
                        sum[0] += 1.14276266;
                      } else {
                        if (sample[3] <164) {
                          sum[0] += 0.0642201751;
                        } else {
                          sum[0] += 0.599447489;
                        }
                      }
                    } else {
                      if (sample[2] <107) {
                        sum[0] += 0.731591403;
                      } else {
                        sum[0] += -0.17355372;
                      }
                    }
                  } else {
                    if (sample[2] <131) {
                      sum[0] += 1.48274481;
                    } else {
                      if (sample[1] <107) {
                        sum[0] += -5.48990142e-09;
                      } else {
                        sum[0] += 1.02371538;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[2] <136) {
                sum[0] += 1.65996397;
              } else {
                if (sample[0] <118) {
                  if (sample[1] <112) {
                    sum[0] += 0.111464955;
                  } else {
                    sum[0] += 0.670984447;
                  }
                } else {
                  if (sample[1] <115) {
                    sum[0] += 0.144827574;
                  } else {
                    sum[0] += -0.193103448;
                  }
                }
              }
            }
          } else {
            if (sample[0] <132) {
              if (sample[2] <150) {
                if (sample[4] <47) {
                  if (sample[1] <119) {
                    if (sample[0] <129) {
                      if (sample[4] <44) {
                        if (sample[0] <125) {
                          sum[0] += 0.797927439;
                        } else {
                          sum[0] += -0.0906735808;
                        }
                      } else {
                        if (sample[3] <170) {
                          sum[0] += 0.86691308;
                        } else {
                          sum[0] += 0.144827574;
                        }
                      }
                    } else {
                      if (sample[2] <130) {
                        sum[0] += 0.0642201751;
                      } else {
                        sum[0] += -0.0241379365;
                      }
                    }
                  } else {
                    sum[0] += -0.17355372;
                  }
                } else {
                  if (sample[3] <144) {
                    sum[0] += 0.736842096;
                  } else {
                    if (sample[3] <153) {
                      sum[0] += -0.232365146;
                    } else {
                      if (sample[3] <161) {
                        if (sample[2] <132) {
                          sum[0] += 0.0289256144;
                        } else {
                          sum[0] += 0.482758611;
                        }
                      } else {
                        if (sample[3] <164) {
                          sum[0] += -0.23517786;
                        } else {
                          sum[0] += 0.0762376115;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <127) {
                  if (sample[1] <123) {
                    sum[0] += 0.288990825;
                  } else {
                    sum[0] += 1.51472461;
                  }
                } else {
                  sum[0] += -0.0241379365;
                }
              }
            } else {
              if (sample[0] <146) {
                if (sample[3] <171) {
                  if (sample[5] <136) {
                    if (sample[2] <128) {
                      sum[0] += -0.16055046;
                    } else {
                      if (sample[5] <133) {
                        sum[0] += 0.0289256144;
                      } else {
                        sum[0] += 0.735668778;
                      }
                    }
                  } else {
                    if (sample[0] <145) {
                      if (sample[4] <45) {
                        if (sample[2] <141) {
                          sum[0] += 0.202166051;
                        } else {
                          sum[0] += -0.151624545;
                        }
                      } else {
                        if (sample[3] <152) {
                          sum[0] += -0.136283189;
                        } else {
                          sum[0] += -0.262565643;
                        }
                      }
                    } else {
                      if (sample[2] <142) {
                        sum[0] += 0.513761461;
                      } else {
                        if (sample[4] <47) {
                          sum[0] += 0.0642201751;
                        } else {
                          sum[0] += -0.207100585;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <158) {
                    sum[0] += 0.6517241;
                  } else {
                    if (sample[2] <168) {
                      if (sample[0] <137) {
                        sum[0] += -0.200636938;
                      } else {
                        sum[0] += -0.0241379365;
                      }
                    } else {
                      sum[0] += 0.417098433;
                    }
                  }
                }
              } else {
                if (sample[2] <146) {
                  if (sample[4] <49) {
                    sum[0] += 0.552631557;
                  } else {
                    sum[0] += -0.232365146;
                  }
                } else {
                  if (sample[3] <179) {
                    sum[0] += -0.28534317;
                  } else {
                    sum[0] += 0.0642201751;
                  }
                }
              }
            }
          }
        }
      } else {
        if (sample[5] <101) {
          if (sample[2] <90) {
            if (sample[5] <79) {
              sum[0] += 1.7278806;
            } else {
              sum[0] += 1.38392448;
            }
          } else {
            if (sample[2] <98) {
              if (sample[1] <68) {
                if (sample[0] <74) {
                  if (sample[3] <178) {
                    if (sample[1] <64) {
                      sum[0] += 0.288990825;
                    } else {
                      sum[0] += 0.969529033;
                    }
                  } else {
                    sum[0] += 0.267515898;
                  }
                } else {
                  if (sample[4] <71) {
                    sum[0] += 0.636363626;
                  } else {
                    if (sample[4] <75) {
                      sum[0] += -0.221951216;
                    } else {
                      sum[0] += 0.231404945;
                    }
                  }
                }
              } else {
                if (sample[2] <95) {
                  sum[0] += 1.26944244;
                } else {
                  if (sample[0] <96) {
                    if (sample[1] <69) {
                      if (sample[3] <165) {
                        sum[0] += 0.513761461;
                      } else {
                        sum[0] += 0.0289256144;
                      }
                    } else {
                      sum[0] += 0.991370499;
                    }
                  } else {
                    if (sample[4] <70) {
                      sum[0] += -0.0241379365;
                    } else {
                      sum[0] += 0.513761461;
                    }
                  }
                }
              }
            } else {
              if (sample[3] <165) {
                if (sample[4] <57) {
                  sum[0] += 0.288990825;
                } else {
                  sum[0] += -0.232365146;
                }
              } else {
                if (sample[4] <75) {
                  if (sample[1] <77) {
                    if (sample[1] <75) {
                      sum[0] += 0.813953459;
                    } else {
                      sum[0] += 0.111464955;
                    }
                  } else {
                    sum[0] += 1.33170724;
                  }
                } else {
                  sum[0] += -0.16055046;
                }
              }
            }
          }
        } else {
          if (sample[3] <175) {
            if (sample[2] <108) {
              if (sample[3] <169) {
                if (sample[1] <84) {
                  if (sample[0] <88) {
                    sum[0] += 0.544041395;
                  } else {
                    if (sample[4] <60) {
                      if (sample[3] <152) {
                        if (sample[1] <83) {
                          sum[0] += -0.193103448;
                        } else {
                          sum[0] += 0.0642201751;
                        }
                      } else {
                        if (sample[1] <82) {
                          sum[0] += 0.501886785;
                        } else {
                          sum[0] += 0.163212419;
                        }
                      }
                    } else {
                      if (sample[3] <143) {
                        if (sample[1] <78) {
                          sum[0] += 0.0642201751;
                        } else {
                          sum[0] += 0.288990825;
                        }
                      } else {
                        if (sample[4] <66) {
                          sum[0] += -0.090810813;
                        } else {
                          sum[0] += -0.283731252;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <106) {
                    if (sample[0] <110) {
                      sum[0] += 0.0642201751;
                    } else {
                      sum[0] += -0.184210524;
                    }
                  } else {
                    sum[0] += 0.987551808;
                  }
                }
              } else {
                if (sample[4] <67) {
                  sum[0] += 1.06286263;
                } else {
                  if (sample[2] <104) {
                    if (sample[4] <71) {
                      sum[0] += 0.636363626;
                    } else {
                      if (sample[4] <74) {
                        if (sample[1] <74) {
                          sum[0] += -0.0773480684;
                        } else {
                          sum[0] += 0.231404945;
                        }
                      } else {
                        if (sample[0] <82) {
                          sum[0] += 0.144827574;
                        } else {
                          sum[0] += 0.482758611;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <107) {
                      if (sample[0] <85) {
                        if (sample[0] <84) {
                          sum[0] += -0.072800003;
                        } else {
                          sum[0] += 0.517751455;
                        }
                      } else {
                        sum[0] += -0.217616573;
                      }
                    } else {
                      if (sample[0] <88) {
                        sum[0] += 0.564516127;
                      } else {
                        sum[0] += -0.16055046;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[4] <58) {
                if (sample[0] <119) {
                  if (sample[3] <159) {
                    if (sample[5] <114) {
                      if (sample[2] <110) {
                        if (sample[0] <109) {
                          sum[0] += -0.17355372;
                        } else {
                          sum[0] += 0.0642201751;
                        }
                      } else {
                        sum[0] += 0.564516127;
                      }
                    } else {
                      if (sample[1] <95) {
                        sum[0] += -0.225806445;
                      } else {
                        sum[0] += 0.0642201751;
                      }
                    }
                  } else {
                    if (sample[2] <134) {
                      if (sample[0] <98) {
                        if (sample[3] <169) {
                          sum[0] += -0.17355372;
                        } else {
                          sum[0] += 0.488372058;
                        }
                      } else {
                        if (sample[4] <55) {
                          sum[0] += 1.09053826;
                        } else {
                          sum[0] += 0.730080545;
                        }
                      }
                    } else {
                      if (sample[0] <117) {
                        sum[0] += -0.17355372;
                      } else {
                        sum[0] += 0.0642201751;
                      }
                    }
                  }
                } else {
                  if (sample[0] <131) {
                    if (sample[1] <118) {
                      if (sample[4] <57) {
                        if (sample[4] <55) {
                          sum[0] += -0.138339922;
                        } else {
                          sum[0] += 0.152173892;
                        }
                      } else {
                        sum[0] += -0.221951216;
                      }
                    } else {
                      sum[0] += 0.552631557;
                    }
                  } else {
                    if (sample[2] <144) {
                      if (sample[5] <139) {
                        sum[0] += -0.25207755;
                      } else {
                        if (sample[5] <141) {
                          sum[0] += 0.313793093;
                        } else {
                          sum[0] += -0.0995623693;
                        }
                      }
                    } else {
                      if (sample[0] <145) {
                        if (sample[0] <144) {
                          sum[0] += -0.236011475;
                        } else {
                          sum[0] += -0.0241379365;
                        }
                      } else {
                        sum[0] += -0.287310481;
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <171) {
                  if (sample[0] <133) {
                    if (sample[4] <66) {
                      if (sample[0] <96) {
                        if (sample[1] <83) {
                          sum[0] += -0.16055046;
                        } else {
                          sum[0] += 0.467509001;
                        }
                      } else {
                        if (sample[1] <105) {
                          sum[0] += -0.103789128;
                        } else {
                          sum[0] += -0.257894725;
                        }
                      }
                    } else {
                      if (sample[2] <159) {
                        if (sample[2] <135) {
                          sum[0] += -0.28442356;
                        } else {
                          sum[0] += -0.240607828;
                        }
                      } else {
                        sum[0] += 0.111464955;
                      }
                    }
                  } else {
                    if (sample[3] <168) {
                      sum[0] += -0.291247576;
                    } else {
                      if (sample[4] <75) {
                        if (sample[4] <68) {
                          sum[0] += -0.254114211;
                        } else {
                          sum[0] += -0.136283189;
                        }
                      } else {
                        if (sample[0] <139) {
                          sum[0] += -0.184210524;
                        } else {
                          sum[0] += 0.288990825;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <62) {
                    if (sample[1] <92) {
                      if (sample[2] <117) {
                        if (sample[0] <93) {
                          sum[0] += 0.544041395;
                        } else {
                          sum[0] += -0.200636938;
                        }
                      } else {
                        sum[0] += 0.921052575;
                      }
                    } else {
                      if (sample[1] <117) {
                        if (sample[0] <111) {
                          sum[0] += 0.202166051;
                        } else {
                          sum[0] += -0.259550571;
                        }
                      } else {
                        if (sample[0] <128) {
                          sum[0] += 1.04777062;
                        } else {
                          sum[0] += -0.0323325694;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <127) {
                      if (sample[4] <72) {
                        if (sample[0] <120) {
                          sum[0] += -0.118644066;
                        } else {
                          sum[0] += -0.276414067;
                        }
                      } else {
                        if (sample[2] <110) {
                          sum[0] += 0.0121107185;
                        } else {
                          sum[0] += -0.258793175;
                        }
                      }
                    } else {
                      if (sample[0] <137) {
                        if (sample[2] <169) {
                          sum[0] += 0.00493652187;
                        } else {
                          sum[0] += 0.735668778;
                        }
                      } else {
                        if (sample[2] <184) {
                          sum[0] += -0.258660495;
                        } else {
                          sum[0] += 0.227810636;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[4] <61) {
              if (sample[2] <134) {
                if (sample[2] <127) {
                  sum[0] += 1.43051767;
                } else {
                  if (sample[4] <56) {
                    sum[0] += 1.32305622;
                  } else {
                    if (sample[3] <179) {
                      if (sample[2] <132) {
                        if (sample[0] <102) {
                          sum[0] += -5.48990142e-09;
                        } else {
                          sum[0] += 0.0642201751;
                        }
                      } else {
                        sum[0] += -0.16055046;
                      }
                    } else {
                      if (sample[2] <132) {
                        sum[0] += 0.231404945;
                      } else {
                        sum[0] += 0.738532066;
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <146) {
                  if (sample[3] <178) {
                    sum[0] += -0.249258161;
                  } else {
                    if (sample[2] <142) {
                      if (sample[3] <179) {
                        sum[0] += 0.513761461;
                      } else {
                        sum[0] += 0.0642201751;
                      }
                    } else {
                      sum[0] += -0.17355372;
                    }
                  }
                } else {
                  if (sample[2] <156) {
                    if (sample[2] <153) {
                      if (sample[0] <121) {
                        if (sample[1] <115) {
                          sum[0] += 0.372781038;
                        } else {
                          sum[0] += -0.16055046;
                        }
                      } else {
                        sum[0] += 0.544041395;
                      }
                    } else {
                      sum[0] += 1.30232549;
                    }
                  } else {
                    if (sample[1] <144) {
                      if (sample[4] <59) {
                        sum[0] += -0.25207755;
                      } else {
                        if (sample[3] <177) {
                          sum[0] += -0.200636938;
                        } else {
                          sum[0] += 0.328729272;
                        }
                      }
                    } else {
                      sum[0] += 0.482758611;
                    }
                  }
                }
              }
            } else {
              if (sample[2] <150) {
                if (sample[2] <108) {
                  if (sample[0] <77) {
                    if (sample[2] <104) {
                      sum[0] += 0.313793093;
                    } else {
                      sum[0] += 0.0642201751;
                    }
                  } else {
                    if (sample[0] <80) {
                      if (sample[3] <177) {
                        sum[0] += 0.423566848;
                      } else {
                        sum[0] += 1.09763312;
                      }
                    } else {
                      if (sample[0] <81) {
                        sum[0] += 0.0289256144;
                      } else {
                        sum[0] += 0.552631557;
                      }
                    }
                  }
                } else {
                  if (sample[4] <66) {
                    if (sample[0] <99) {
                      if (sample[4] <63) {
                        sum[0] += 0.909747243;
                      } else {
                        if (sample[1] <88) {
                          sum[0] += 0.0396226309;
                        } else {
                          sum[0] += 0.355384588;
                        }
                      }
                    } else {
                      if (sample[3] <176) {
                        if (sample[4] <63) {
                          sum[0] += -0.17355372;
                        } else {
                          sum[0] += 0.111464955;
                        }
                      } else {
                        if (sample[2] <149) {
                          sum[0] += -0.216634423;
                        } else {
                          sum[0] += 0.0289256144;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <141) {
                      if (sample[1] <95) {
                        if (sample[1] <94) {
                          sum[0] += -0.216538608;
                        } else {
                          sum[0] += 0.0528967157;
                        }
                      } else {
                        sum[0] += -0.279141098;
                      }
                    } else {
                      if (sample[0] <107) {
                        if (sample[1] <103) {
                          sum[0] += 0.90322578;
                        } else {
                          sum[0] += 0.144827574;
                        }
                      } else {
                        if (sample[4] <70) {
                          sum[0] += 0.227810636;
                        } else {
                          sum[0] += -0.253351212;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <156) {
                  if (sample[1] <108) {
                    if (sample[1] <107) {
                      if (sample[0] <111) {
                        sum[0] += 0.0642201751;
                      } else {
                        sum[0] += -0.229257643;
                      }
                    } else {
                      sum[0] += 0.144827574;
                    }
                  } else {
                    if (sample[0] <116) {
                      if (sample[2] <151) {
                        if (sample[1] <112) {
                          sum[0] += 0.0642201751;
                        } else {
                          sum[0] += 0.838842928;
                        }
                      } else {
                        sum[0] += 1.52912617;
                      }
                    } else {
                      if (sample[4] <62) {
                        sum[0] += 0.0289256144;
                      } else {
                        if (sample[2] <155) {
                          sum[0] += 0.701711476;
                        } else {
                          sum[0] += 0.144827574;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <187) {
                    if (sample[0] <118) {
                      sum[0] += -0.0241379365;
                    } else {
                      if (sample[0] <138) {
                        sum[0] += -0.277831554;
                      } else {
                        if (sample[1] <135) {
                          sum[0] += 0.0642201751;
                        } else {
                          sum[0] += -0.193103448;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <189) {
                      sum[0] += 0.288990825;
                    } else {
                      sum[0] += -0.16055046;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if (sample[5] <119) {
      if (sample[3] <69) {
        if (sample[3] <19) {
          if (sample[4] <212) {
            if (sample[3] <9) {
              if (sample[4] <89) {
                if (sample[3] <4) {
                  if (sample[2] <87) {
                    sum[0] += 1.65234709;
                  } else {
                    if (sample[4] <81) {
                      if (sample[3] <1) {
                        if (sample[0] <72) {
                          sum[0] += 0.288990825;
                        } else {
                          sum[0] += 0.0289256144;
                        }
                      } else {
                        sum[0] += 0.888059676;
                      }
                    } else {
                      if (sample[2] <112) {
                        if (sample[4] <86) {
                          sum[0] += 0.372992665;
                        } else {
                          sum[0] += 0.0513866134;
                        }
                      } else {
                        if (sample[1] <81) {
                          sum[0] += -0.238967523;
                        } else {
                          sum[0] += -0.062130183;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <6) {
                    if (sample[2] <98) {
                      sum[0] += 1.55165756;
                    } else {
                      if (sample[4] <82) {
                        sum[0] += 1.28518963;
                      } else {
                        if (sample[4] <88) {
                          sum[0] += 0.543763638;
                        } else {
                          sum[0] += -5.48990142e-09;
                        }
                      }
                    }
                  } else {
                    sum[0] += 1.69457555;
                  }
                }
              } else {
                if (sample[2] <94) {
                  if (sample[1] <54) {
                    sum[0] += 1.69675386;
                  } else {
                    if (sample[4] <121) {
                      if (sample[3] <6) {
                        if (sample[2] <91) {
                          sum[0] += 1.0181818;
                        } else {
                          sum[0] += 0.290858716;
                        }
                      } else {
                        sum[0] += 1.35689497;
                      }
                    } else {
                      if (sample[0] <44) {
                        sum[0] += 0.891719699;
                      } else {
                        if (sample[1] <55) {
                          sum[0] += 0.231404945;
                        } else {
                          sum[0] += -0.151624545;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[1] <82) {
                    if (sample[2] <108) {
                      if (sample[1] <73) {
                        if (sample[4] <145) {
                          sum[0] += 0.0394771248;
                        } else {
                          sum[0] += 1.17047298;
                        }
                      } else {
                        if (sample[3] <6) {
                          sum[0] += 0.482758611;
                        } else {
                          sum[0] += 1.43171215;
                        }
                      }
                    } else {
                      if (sample[4] <138) {
                        if (sample[0] <62) {
                          sum[0] += -0.246890515;
                        } else {
                          sum[0] += -0.042356208;
                        }
                      } else {
                        if (sample[2] <110) {
                          sum[0] += 0.193370149;
                        } else {
                          sum[0] += 0.994261086;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <7) {
                      if (sample[4] <93) {
                        sum[0] += 0.482758611;
                      } else {
                        sum[0] += 0.0289256144;
                      }
                    } else {
                      if (sample[0] <72) {
                        sum[0] += 0.368421048;
                      } else {
                        sum[0] += 1.28648639;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[4] <130) {
                if (sample[3] <10) {
                  if (sample[4] <105) {
                    sum[0] += 1.72321188;
                  } else {
                    if (sample[2] <95) {
                      sum[0] += 1.51719451;
                    } else {
                      if (sample[4] <124) {
                        if (sample[0] <61) {
                          sum[0] += 0.698150575;
                        } else {
                          sum[0] += 0.295227498;
                        }
                      } else {
                        if (sample[1] <73) {
                          sum[0] += 0.45846644;
                        } else {
                          sum[0] += -0.273367465;
                        }
                      }
                    }
                  }
                } else {
                  sum[0] += 1.74113762;
                }
              } else {
                if (sample[3] <13) {
                  if (sample[1] <58) {
                    if (sample[2] <92) {
                      sum[0] += 1.71805906;
                    } else {
                      if (sample[4] <180) {
                        if (sample[3] <11) {
                          sum[0] += 0.666219771;
                        } else {
                          sum[0] += 0.0252707507;
                        }
                      } else {
                        sum[0] += 1.57453573;
                      }
                    }
                  } else {
                    if (sample[2] <109) {
                      if (sample[4] <163) {
                        if (sample[1] <69) {
                          sum[0] += -0.116659522;
                        } else {
                          sum[0] += 0.839067638;
                        }
                      } else {
                        if (sample[1] <60) {
                          sum[0] += 0.381818146;
                        } else {
                          sum[0] += 1.02723145;
                        }
                      }
                    } else {
                      if (sample[0] <56) {
                        if (sample[2] <111) {
                          sum[0] += 0.400821894;
                        } else {
                          sum[0] += 1.04769301;
                        }
                      } else {
                        if (sample[1] <79) {
                          sum[0] += -0.240185127;
                        } else {
                          sum[0] += 1.32305622;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <186) {
                    if (sample[3] <15) {
                      if (sample[4] <159) {
                        if (sample[3] <14) {
                          sum[0] += 1.44785929;
                        } else {
                          sum[0] += 1.62969196;
                        }
                      } else {
                        if (sample[2] <88) {
                          sum[0] += 1.67308486;
                        } else {
                          sum[0] += 1.01871932;
                        }
                      }
                    } else {
                      if (sample[2] <108) {
                        sum[0] += 1.71991301;
                      } else {
                        if (sample[0] <36) {
                          sum[0] += 1.37093353;
                        } else {
                          sum[0] += 1.65500987;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <89) {
                      if (sample[4] <200) {
                        sum[0] += 1.69282258;
                      } else {
                        if (sample[2] <75) {
                          sum[0] += 1.70068121;
                        } else {
                          sum[0] += 1.34116924;
                        }
                      }
                    } else {
                      if (sample[1] <63) {
                        if (sample[0] <23) {
                          sum[0] += 1.16293919;
                        } else {
                          sum[0] += 0.291552037;
                        }
                      } else {
                        if (sample[3] <14) {
                          sum[0] += 0.669339895;
                        } else {
                          sum[0] += 1.33056438;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[2] <81) {
              if (sample[2] <66) {
                if (sample[2] <57) {
                  sum[0] += 1.74434924;
                } else {
                  if (sample[3] <14) {
                    if (sample[3] <11) {
                      if (sample[2] <62) {
                        if (sample[2] <58) {
                          sum[0] += -0.0241379365;
                        } else {
                          sum[0] += -0.242214531;
                        }
                      } else {
                        if (sample[1] <21) {
                          sum[0] += 0.517751455;
                        } else {
                          sum[0] += -0.16055046;
                        }
                      }
                    } else {
                      if (sample[2] <64) {
                        sum[0] += 0.832778633;
                      } else {
                        if (sample[1] <28) {
                          sum[0] += 0.0289256144;
                        } else {
                          sum[0] += 0.552631557;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <15) {
                      sum[0] += 1.18609202;
                    } else {
                      sum[0] += 1.69046569;
                    }
                  }
                }
              } else {
                if (sample[3] <15) {
                  if (sample[0] <1) {
                    if (sample[1] <33) {
                      if (sample[1] <31) {
                        if (sample[1] <30) {
                          sum[0] += -0.0884101093;
                        } else {
                          sum[0] += 0.841772079;
                        }
                      } else {
                        if (sample[2] <69) {
                          sum[0] += 0.368421048;
                        } else {
                          sum[0] += -0.224436745;
                        }
                      }
                    } else {
                      if (sample[2] <80) {
                        if (sample[1] <36) {
                          sum[0] += 0.469472677;
                        } else {
                          sum[0] += 0.859562397;
                        }
                      } else {
                        if (sample[1] <38) {
                          sum[0] += 0.240687653;
                        } else {
                          sum[0] += 0.495121926;
                        }
                      }
                    }
                  } else {
                    sum[0] += 1.4015317;
                  }
                } else {
                  if (sample[2] <77) {
                    if (sample[0] <11) {
                      if (sample[1] <40) {
                        sum[0] += 1.61206579;
                      } else {
                        if (sample[3] <17) {
                          sum[0] += 1.27473676;
                        } else {
                          sum[0] += 1.50182533;
                        }
                      }
                    } else {
                      if (sample[3] <17) {
                        if (sample[2] <73) {
                          sum[0] += 0.987551808;
                        } else {
                          sum[0] += 0.0538461432;
                        }
                      } else {
                        sum[0] += 1.4046979;
                      }
                    }
                  } else {
                    if (sample[3] <16) {
                      if (sample[2] <78) {
                        sum[0] += 1.38716495;
                      } else {
                        if (sample[1] <45) {
                          sum[0] += 0.701589048;
                        } else {
                          sum[0] += -0.062130183;
                        }
                      }
                    } else {
                      if (sample[1] <41) {
                        sum[0] += 0.787807703;
                      } else {
                        if (sample[4] <217) {
                          sum[0] += 0.811816156;
                        } else {
                          sum[0] += 1.38220072;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[4] <250) {
                if (sample[3] <15) {
                  if (sample[1] <60) {
                    if (sample[4] <213) {
                      if (sample[1] <55) {
                        sum[0] += 1.04132223;
                      } else {
                        sum[0] += 0.0642201751;
                      }
                    } else {
                      sum[0] += 1.61666322;
                    }
                  } else {
                    if (sample[3] <14) {
                      if (sample[4] <214) {
                        sum[0] += -0.184210524;
                      } else {
                        if (sample[0] <19) {
                          sum[0] += 0.338709652;
                        } else {
                          sum[0] += 0.0642201751;
                        }
                      }
                    } else {
                      if (sample[2] <115) {
                        sum[0] += 1.12600529;
                      } else {
                        if (sample[0] <18) {
                          sum[0] += 0.352030933;
                        } else {
                          sum[0] += 0.787365139;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <106) {
                    if (sample[3] <16) {
                      if (sample[0] <6) {
                        if (sample[1] <54) {
                          sum[0] += 0.771565437;
                        } else {
                          sum[0] += -0.200636938;
                        }
                      } else {
                        if (sample[2] <82) {
                          sum[0] += 0.184210509;
                        } else {
                          sum[0] += 1.26544058;
                        }
                      }
                    } else {
                      if (sample[2] <85) {
                        if (sample[1] <51) {
                          sum[0] += 0.190909073;
                        } else {
                          sum[0] += 1.31517744;
                        }
                      } else {
                        if (sample[0] <14) {
                          sum[0] += 0.333677799;
                        } else {
                          sum[0] += 0.819358408;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <17) {
                      if (sample[0] <12) {
                        if (sample[3] <17) {
                          sum[0] += 1.07915902;
                        } else {
                          sum[0] += 0.447101831;
                        }
                      } else {
                        if (sample[4] <218) {
                          sum[0] += 0.539525688;
                        } else {
                          sum[0] += 1.26386321;
                        }
                      }
                    } else {
                      if (sample[2] <113) {
                        if (sample[1] <73) {
                          sum[0] += 1.194942;
                        } else {
                          sum[0] += 0.423566848;
                        }
                      } else {
                        if (sample[1] <70) {
                          sum[0] += 0.256097525;
                        } else {
                          sum[0] += 0.761458933;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <44) {
                  if (sample[2] <89) {
                    if (sample[2] <85) {
                      if (sample[1] <42) {
                        if (sample[2] <82) {
                          sum[0] += 0.436565548;
                        } else {
                          sum[0] += 0.754416883;
                        }
                      } else {
                        if (sample[2] <83) {
                          sum[0] += 0.551063776;
                        } else {
                          sum[0] += 0.173607841;
                        }
                      }
                    } else {
                      if (sample[2] <88) {
                        if (sample[1] <43) {
                          sum[0] += 0.990229309;
                        } else {
                          sum[0] += 0.412478298;
                        }
                      } else {
                        if (sample[1] <42) {
                          sum[0] += -0.207100585;
                        } else {
                          sum[0] += 0.614634097;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <40) {
                      sum[0] += 0.0642201751;
                    } else {
                      sum[0] += 1.4396863;
                    }
                  }
                } else {
                  if (sample[2] <84) {
                    if (sample[2] <83) {
                      if (sample[1] <45) {
                        sum[0] += 0.687610567;
                      } else {
                        sum[0] += 1.13035011;
                      }
                    } else {
                      if (sample[1] <48) {
                        if (sample[1] <45) {
                          sum[0] += 0.109770797;
                        } else {
                          sum[0] += 0.23595503;
                        }
                      } else {
                        sum[0] += 0.830628753;
                      }
                    }
                  } else {
                    if (sample[3] <15) {
                      if (sample[1] <55) {
                        if (sample[1] <49) {
                          sum[0] += 1.15999997;
                        } else {
                          sum[0] += 0.62953496;
                        }
                      } else {
                        if (sample[2] <118) {
                          sum[0] += -0.0312383845;
                        } else {
                          sum[0] += -0.255667508;
                        }
                      }
                    } else {
                      if (sample[2] <92) {
                        if (sample[3] <18) {
                          sum[0] += -0.124727897;
                        } else {
                          sum[0] += 0.64005971;
                        }
                      } else {
                        if (sample[2] <108) {
                          sum[0] += -0.251990497;
                        } else {
                          sum[0] += -0.160135716;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          if (sample[1] <98) {
            if (sample[3] <52) {
              if (sample[2] <101) {
                if (sample[3] <46) {
                  if (sample[2] <96) {
                    if (sample[5] <69) {
                      sum[0] += 1.7491225;
                    } else {
                      if (sample[2] <43) {
                        if (sample[1] <74) {
                          sum[0] += -0.123102553;
                        } else {
                          sum[0] += 1.37554574;
                        }
                      } else {
                        if (sample[4] <247) {
                          sum[0] += 1.74677956;
                        } else {
                          sum[0] += 1.66634881;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <232) {
                      if (sample[4] <206) {
                        if (sample[4] <166) {
                          sum[0] += 1.74817431;
                        } else {
                          sum[0] += 1.65294147;
                        }
                      } else {
                        if (sample[1] <88) {
                          sum[0] += 1.60688138;
                        } else {
                          sum[0] += 0.258881748;
                        }
                      }
                    } else {
                      if (sample[1] <84) {
                        if (sample[1] <62) {
                          sum[0] += 0.613182962;
                        } else {
                          sum[0] += 1.2728653;
                        }
                      } else {
                        if (sample[3] <30) {
                          sum[0] += -0.184536606;
                        } else {
                          sum[0] += 0.599447489;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[1] <69) {
                    if (sample[1] <56) {
                      sum[0] += 1.74850225;
                    } else {
                      if (sample[4] <211) {
                        if (sample[4] <190) {
                          sum[0] += 1.73894572;
                        } else {
                          sum[0] += 1.37229633;
                        }
                      } else {
                        if (sample[1] <63) {
                          sum[0] += 0.639175236;
                        } else {
                          sum[0] += -0.104127929;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <42) {
                      if (sample[2] <36) {
                        if (sample[0] <15) {
                          sum[0] += -0.278173655;
                        } else {
                          sum[0] += 0.193370149;
                        }
                      } else {
                        if (sample[4] <188) {
                          sum[0] += 0.827272654;
                        } else {
                          sum[0] += 0.285930395;
                        }
                      }
                    } else {
                      if (sample[0] <30) {
                        if (sample[4] <150) {
                          sum[0] += 0.46408838;
                        } else {
                          sum[0] += 1.43480146;
                        }
                      } else {
                        sum[0] += 1.71623647;
                      }
                    }
                  }
                }
              } else {
                if (sample[4] <195) {
                  if (sample[3] <28) {
                    if (sample[4] <184) {
                      sum[0] += 1.74190331;
                    } else {
                      if (sample[3] <26) {
                        if (sample[1] <75) {
                          sum[0] += 0.895348787;
                        } else {
                          sum[0] += 1.60687602;
                        }
                      } else {
                        if (sample[1] <96) {
                          sum[0] += 0.802292228;
                        } else {
                          sum[0] += -0.119167723;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <36) {
                      if (sample[2] <103) {
                        if (sample[0] <32) {
                          sum[0] += 0.325581372;
                        } else {
                          sum[0] += 0.0522387959;
                        }
                      } else {
                        sum[0] += -0.221951216;
                      }
                    } else {
                      sum[0] += 1.50429797;
                    }
                  }
                } else {
                  if (sample[3] <26) {
                    if (sample[3] <20) {
                      if (sample[2] <109) {
                        if (sample[1] <66) {
                          sum[0] += 0.631448209;
                        } else {
                          sum[0] += 1.18189108;
                        }
                      } else {
                        if (sample[0] <9) {
                          sum[0] += -0.151079133;
                        } else {
                          sum[0] += 1.15384614;
                        }
                      }
                    } else {
                      if (sample[1] <90) {
                        if (sample[4] <231) {
                          sum[0] += 1.56425452;
                        } else {
                          sum[0] += 1.35222888;
                        }
                      } else {
                        if (sample[0] <10) {
                          sum[0] += 0.0707865059;
                        } else {
                          sum[0] += 0.954545379;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <209) {
                      if (sample[1] <94) {
                        if (sample[4] <204) {
                          sum[0] += 1.17509019;
                        } else {
                          sum[0] += 0.313793093;
                        }
                      } else {
                        if (sample[2] <102) {
                          sum[0] += 0.614634097;
                        } else {
                          sum[0] += -0.108680315;
                        }
                      }
                    } else {
                      if (sample[0] <1) {
                        sum[0] += -0.274252504;
                      } else {
                        if (sample[0] <5) {
                          sum[0] += 0.301916897;
                        } else {
                          sum[0] += -0.205336243;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[1] <62) {
                if (sample[1] <58) {
                  if (sample[1] <52) {
                    sum[0] += 1.74503911;
                  } else {
                    if (sample[4] <252) {
                      if (sample[0] <9) {
                        if (sample[2] <4) {
                          sum[0] += 0.423566848;
                        } else {
                          sum[0] += 1.38934004;
                        }
                      } else {
                        sum[0] += 1.72402883;
                      }
                    } else {
                      if (sample[1] <53) {
                        if (sample[2] <9) {
                          sum[0] += 0.248865336;
                        } else {
                          sum[0] += 1.28119791;
                        }
                      } else {
                        if (sample[2] <14) {
                          sum[0] += -0.200900391;
                        } else {
                          sum[0] += 0.536741197;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <15) {
                    if (sample[4] <231) {
                      if (sample[1] <60) {
                        if (sample[4] <199) {
                          sum[0] += 0.144827574;
                        } else {
                          sum[0] += 1.21255672;
                        }
                      } else {
                        if (sample[3] <59) {
                          sum[0] += 0.0184940472;
                        } else {
                          sum[0] += 0.90322578;
                        }
                      }
                    } else {
                      if (sample[2] <16) {
                        if (sample[3] <66) {
                          sum[0] += -0.219489694;
                        } else {
                          sum[0] += 0.372781038;
                        }
                      } else {
                        sum[0] += 0.552631557;
                      }
                    }
                  } else {
                    sum[0] += 1.71112525;
                  }
                }
              } else {
                if (sample[4] <137) {
                  if (sample[4] <119) {
                    if (sample[4] <107) {
                      if (sample[1] <83) {
                        sum[0] += 1.69991171;
                      } else {
                        if (sample[2] <55) {
                          sum[0] += 1.05089962;
                        } else {
                          sum[0] += 1.6067667;
                        }
                      }
                    } else {
                      if (sample[3] <58) {
                        sum[0] += 1.62709022;
                      } else {
                        if (sample[1] <73) {
                          sum[0] += 1.56024086;
                        } else {
                          sum[0] += 1.05630279;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <58) {
                      sum[0] += 1.62029147;
                    } else {
                      if (sample[1] <76) {
                        if (sample[1] <70) {
                          sum[0] += 1.64659524;
                        } else {
                          sum[0] += 1.07422256;
                        }
                      } else {
                        if (sample[1] <92) {
                          sum[0] += 0.243794471;
                        } else {
                          sum[0] += 1.2104404;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <167) {
                    if (sample[1] <68) {
                      sum[0] += 1.58310616;
                    } else {
                      if (sample[2] <42) {
                        if (sample[3] <63) {
                          sum[0] += 0.375143409;
                        } else {
                          sum[0] += -0.124906674;
                        }
                      } else {
                        if (sample[0] <54) {
                          sum[0] += 1.50947857;
                        } else {
                          sum[0] += -0.184210524;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <65) {
                      if (sample[0] <15) {
                        if (sample[4] <211) {
                          sum[0] += 0.318811864;
                        } else {
                          sum[0] += -0.256354332;
                        }
                      } else {
                        if (sample[4] <219) {
                          sum[0] += 1.53337133;
                        } else {
                          sum[0] += -0.16055046;
                        }
                      }
                    } else {
                      if (sample[2] <29) {
                        if (sample[1] <86) {
                          sum[0] += -0.27346009;
                        } else {
                          sum[0] += 0.134888425;
                        }
                      } else {
                        if (sample[1] <78) {
                          sum[0] += 0.0841813013;
                        } else {
                          sum[0] += 0.944636643;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[4] <147) {
              if (sample[4] <136) {
                if (sample[1] <111) {
                  if (sample[4] <125) {
                    if (sample[2] <55) {
                      sum[0] += 0.797927439;
                    } else {
                      sum[0] += 1.74490702;
                    }
                  } else {
                    if (sample[1] <108) {
                      sum[0] += 1.68570352;
                    } else {
                      if (sample[2] <110) {
                        sum[0] += 1.59936523;
                      } else {
                        if (sample[2] <114) {
                          sum[0] += 0.647707939;
                        } else {
                          sum[0] += 1.25999999;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <123) {
                    sum[0] += 1.67923927;
                  } else {
                    if (sample[2] <112) {
                      if (sample[2] <62) {
                        sum[0] += 0.6517241;
                      } else {
                        sum[0] += 1.57807648;
                      }
                    } else {
                      if (sample[0] <55) {
                        sum[0] += 0.0289256144;
                      } else {
                        sum[0] += 1.19414127;
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <108) {
                  sum[0] += 1.61885142;
                } else {
                  if (sample[3] <32) {
                    if (sample[3] <30) {
                      if (sample[3] <27) {
                        sum[0] += 1.10526311;
                      } else {
                        if (sample[1] <114) {
                          sum[0] += 0.0870542303;
                        } else {
                          sum[0] += 0.790322542;
                        }
                      }
                    } else {
                      if (sample[4] <145) {
                        if (sample[4] <138) {
                          sum[0] += 0.193370149;
                        } else {
                          sum[0] += 0.797407866;
                        }
                      } else {
                        if (sample[2] <110) {
                          sum[0] += 0.670984447;
                        } else {
                          sum[0] += 0.114243314;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <60) {
                      if (sample[2] <111) {
                        sum[0] += 1.43927419;
                      } else {
                        sum[0] += 0.599447489;
                      }
                    } else {
                      if (sample[1] <113) {
                        sum[0] += 0.231404945;
                      } else {
                        sum[0] += 0.738532066;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[3] <30) {
                if (sample[0] <32) {
                  if (sample[3] <29) {
                    if (sample[0] <21) {
                      if (sample[1] <112) {
                        if (sample[1] <108) {
                          sum[0] += -0.264613926;
                        } else {
                          sum[0] += -0.225341052;
                        }
                      } else {
                        sum[0] += 0.111464955;
                      }
                    } else {
                      if (sample[2] <112) {
                        if (sample[1] <104) {
                          sum[0] += -0.235057965;
                        } else {
                          sum[0] += -0.0568101667;
                        }
                      } else {
                        if (sample[1] <107) {
                          sum[0] += 0.194388181;
                        } else {
                          sum[0] += -0.0661157072;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <23) {
                      if (sample[2] <109) {
                        if (sample[0] <14) {
                          sum[0] += 0.227480024;
                        } else {
                          sum[0] += 1.28264368;
                        }
                      } else {
                        if (sample[2] <111) {
                          sum[0] += 0.291248173;
                        } else {
                          sum[0] += -0.117867164;
                        }
                      }
                    } else {
                      if (sample[1] <110) {
                        if (sample[0] <26) {
                          sum[0] += 0.123468876;
                        } else {
                          sum[0] += -0.150700644;
                        }
                      } else {
                        if (sample[4] <200) {
                          sum[0] += 0.682572603;
                        } else {
                          sum[0] += 0.193370149;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[1] <107) {
                    if (sample[4] <169) {
                      if (sample[0] <42) {
                        if (sample[1] <103) {
                          sum[0] += 1.35639334;
                        } else {
                          sum[0] += 0.909488976;
                        }
                      } else {
                        sum[0] += 1.55220664;
                      }
                    } else {
                      if (sample[3] <26) {
                        if (sample[0] <33) {
                          sum[0] += 0.184210509;
                        } else {
                          sum[0] += 1.07787609;
                        }
                      } else {
                        if (sample[1] <103) {
                          sum[0] += 0.510050237;
                        } else {
                          sum[0] += 0.167896658;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <44) {
                      if (sample[1] <110) {
                        if (sample[2] <111) {
                          sum[0] += 0.45161289;
                        } else {
                          sum[0] += -0.134306327;
                        }
                      } else {
                        if (sample[3] <29) {
                          sum[0] += 0.209825128;
                        } else {
                          sum[0] += 0.691828728;
                        }
                      }
                    } else {
                      if (sample[2] <114) {
                        if (sample[0] <45) {
                          sum[0] += 0.0642201751;
                        } else {
                          sum[0] += 0.690311372;
                        }
                      } else {
                        if (sample[3] <29) {
                          sum[0] += -0.00378652103;
                        } else {
                          sum[0] += -0.189035803;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <112) {
                  if (sample[3] <62) {
                    if (sample[5] <108) {
                      if (sample[3] <44) {
                        sum[0] += 1.59721732;
                      } else {
                        if (sample[2] <68) {
                          sum[0] += 1.57172549;
                        } else {
                          sum[0] += 0.522004843;
                        }
                      }
                    } else {
                      if (sample[0] <16) {
                        if (sample[0] <9) {
                          sum[0] += -0.212707177;
                        } else {
                          sum[0] += 0.0642201751;
                        }
                      } else {
                        if (sample[3] <39) {
                          sum[0] += 1.40036321;
                        } else {
                          sum[0] += 0.816574991;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <48) {
                      sum[0] += 0.482758611;
                    } else {
                      if (sample[1] <107) {
                        sum[0] += -0.237735853;
                      } else {
                        sum[0] += 0.0642201751;
                      }
                    }
                  }
                } else {
                  if (sample[0] <42) {
                    if (sample[4] <211) {
                      if (sample[1] <117) {
                        if (sample[4] <164) {
                          sum[0] += 0.231404945;
                        } else {
                          sum[0] += 1.13794351;
                        }
                      } else {
                        if (sample[5] <118) {
                          sum[0] += 0.0828402266;
                        } else {
                          sum[0] += 0.734146297;
                        }
                      }
                    } else {
                      if (sample[4] <225) {
                        sum[0] += -0.207100585;
                      } else {
                        sum[0] += 0.0642201751;
                      }
                    }
                  } else {
                    if (sample[1] <118) {
                      if (sample[0] <49) {
                        if (sample[2] <115) {
                          sum[0] += 0.00824822392;
                        } else {
                          sum[0] += -0.1388973;
                        }
                      } else {
                        if (sample[2] <118) {
                          sum[0] += 0.579617798;
                        } else {
                          sum[0] += -0.212707177;
                        }
                      }
                    } else {
                      sum[0] += 0.482758611;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if (sample[4] <147) {
          if (sample[2] <96) {
            if (sample[1] <104) {
              if (sample[4] <126) {
                if (sample[3] <88) {
                  if (sample[1] <87) {
                    if (sample[1] <82) {
                      if (sample[1] <61) {
                        sum[0] += 1.74291313;
                      } else {
                        if (sample[4] <121) {
                          sum[0] += 1.67378044;
                        } else {
                          sum[0] += 1.28878498;
                        }
                      }
                    } else {
                      if (sample[4] <113) {
                        if (sample[4] <94) {
                          sum[0] += 1.61488199;
                        } else {
                          sum[0] += 1.23972785;
                        }
                      } else {
                        if (sample[0] <71) {
                          sum[0] += 0.272579759;
                        } else {
                          sum[0] += 1.04630709;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <99) {
                      if (sample[4] <91) {
                        sum[0] += 1.45149207;
                      } else {
                        if (sample[1] <95) {
                          sum[0] += 1.25870419;
                        } else {
                          sum[0] += 0.630354106;
                        }
                      }
                    } else {
                      if (sample[3] <82) {
                        if (sample[1] <94) {
                          sum[0] += 0.175454155;
                        } else {
                          sum[0] += -0.134125516;
                        }
                      } else {
                        if (sample[1] <90) {
                          sum[0] += 1.07480311;
                        } else {
                          sum[0] += 0.31605348;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <91) {
                    if (sample[4] <97) {
                      if (sample[3] <111) {
                        if (sample[3] <95) {
                          sum[0] += 1.67364275;
                        } else {
                          sum[0] += 1.73918879;
                        }
                      } else {
                        if (sample[1] <58) {
                          sum[0] += 1.72871447;
                        } else {
                          sum[0] += 1.56217313;
                        }
                      }
                    } else {
                      if (sample[1] <100) {
                        if (sample[1] <58) {
                          sum[0] += 1.73203516;
                        } else {
                          sum[0] += 1.63437271;
                        }
                      } else {
                        if (sample[2] <60) {
                          sum[0] += 0.220946893;
                        } else {
                          sum[0] += 1.42890477;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <70) {
                      if (sample[4] <102) {
                        if (sample[0] <68) {
                          sum[0] += 0.290858716;
                        } else {
                          sum[0] += -0.0773480684;
                        }
                      } else {
                        sum[0] += -0.184210524;
                      }
                    } else {
                      if (sample[1] <62) {
                        if (sample[0] <90) {
                          sum[0] += 1.61773765;
                        } else {
                          sum[0] += 0.734806597;
                        }
                      } else {
                        if (sample[0] <83) {
                          sum[0] += 0.329321653;
                        } else {
                          sum[0] += 0.909488976;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <83) {
                  if (sample[1] <61) {
                    if (sample[1] <56) {
                      sum[0] += 1.73571074;
                    } else {
                      if (sample[2] <26) {
                        if (sample[0] <58) {
                          sum[0] += 1.36491072;
                        } else {
                          sum[0] += 0.0872576088;
                        }
                      } else {
                        if (sample[0] <116) {
                          sum[0] += 1.60715795;
                        } else {
                          sum[0] += 0.288990825;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <138) {
                      if (sample[3] <102) {
                        if (sample[5] <73) {
                          sum[0] += 1.45646381;
                        } else {
                          sum[0] += 1.08886421;
                        }
                      } else {
                        sum[0] += 1.50505221;
                      }
                    } else {
                      if (sample[5] <72) {
                        if (sample[3] <87) {
                          sum[0] += 1.57334864;
                        } else {
                          sum[0] += 1.04578304;
                        }
                      } else {
                        if (sample[3] <104) {
                          sum[0] += 0.531009674;
                        } else {
                          sum[0] += 1.41357017;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <94) {
                    if (sample[3] <84) {
                      if (sample[1] <95) {
                        if (sample[4] <128) {
                          sum[0] += -0.127688542;
                        } else {
                          sum[0] += -0.257245839;
                        }
                      } else {
                        if (sample[3] <80) {
                          sum[0] += 0.35945943;
                        } else {
                          sum[0] += -0.21472393;
                        }
                      }
                    } else {
                      if (sample[4] <136) {
                        if (sample[1] <95) {
                          sum[0] += 0.754533172;
                        } else {
                          sum[0] += -0.0913043544;
                        }
                      } else {
                        if (sample[3] <90) {
                          sum[0] += -0.196143955;
                        } else {
                          sum[0] += 0.192913368;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <140) {
                      if (sample[1] <99) {
                        if (sample[4] <136) {
                          sum[0] += 1.4944185;
                        } else {
                          sum[0] += 1.22802293;
                        }
                      } else {
                        if (sample[1] <102) {
                          sum[0] += 0.841573;
                        } else {
                          sum[0] += -5.48990142e-09;
                        }
                      }
                    } else {
                      if (sample[0] <118) {
                        if (sample[2] <48) {
                          sum[0] += 0.71300751;
                        } else {
                          sum[0] += 1.20477736;
                        }
                      } else {
                        if (sample[1] <87) {
                          sum[0] += 0.738532066;
                        } else {
                          sum[0] += 0.222493872;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[2] <65) {
                if (sample[4] <118) {
                  if (sample[0] <93) {
                    if (sample[1] <107) {
                      if (sample[0] <84) {
                        if (sample[0] <78) {
                          sum[0] += 0.513761461;
                        } else {
                          sum[0] += -0.209037319;
                        }
                      } else {
                        if (sample[3] <79) {
                          sum[0] += 0.329321653;
                        } else {
                          sum[0] += -0.124814264;
                        }
                      }
                    } else {
                      if (sample[3] <78) {
                        sum[0] += 1.36798334;
                      } else {
                        sum[0] += 0.0828402266;
                      }
                    }
                  } else {
                    if (sample[0] <103) {
                      if (sample[0] <97) {
                        if (sample[4] <106) {
                          sum[0] += 0.279999971;
                        } else {
                          sum[0] += 0.701711476;
                        }
                      } else {
                        if (sample[4] <114) {
                          sum[0] += 1.24036968;
                        } else {
                          sum[0] += 0.288990825;
                        }
                      }
                    } else {
                      if (sample[3] <94) {
                        if (sample[0] <109) {
                          sum[0] += 0.107858233;
                        } else {
                          sum[0] += -0.263366342;
                        }
                      } else {
                        sum[0] += 0.734806597;
                      }
                    }
                  }
                } else {
                  if (sample[3] <80) {
                    if (sample[1] <107) {
                      if (sample[4] <125) {
                        if (sample[2] <57) {
                          sum[0] += -0.240072206;
                        } else {
                          sum[0] += -0.0773480684;
                        }
                      } else {
                        sum[0] += 0.423566848;
                      }
                    } else {
                      if (sample[4] <135) {
                        sum[0] += 1.29369617;
                      } else {
                        if (sample[0] <82) {
                          sum[0] += 0.736842096;
                        } else {
                          sum[0] += -0.184210524;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <96) {
                      if (sample[4] <119) {
                        if (sample[3] <86) {
                          sum[0] += 0.513761461;
                        } else {
                          sum[0] += -0.242214531;
                        }
                      } else {
                        if (sample[1] <110) {
                          sum[0] += -0.226795092;
                        } else {
                          sum[0] += -0.290023029;
                        }
                      }
                    } else {
                      sum[0] += 0.372781038;
                    }
                  }
                }
              } else {
                if (sample[3] <96) {
                  if (sample[3] <75) {
                    sum[0] += 1.63086677;
                  } else {
                    if (sample[4] <90) {
                      if (sample[1] <112) {
                        sum[0] += 1.2475158;
                      } else {
                        if (sample[0] <104) {
                          sum[0] += 0.134926736;
                        } else {
                          sum[0] += 0.89977783;
                        }
                      }
                    } else {
                      if (sample[1] <107) {
                        if (sample[3] <83) {
                          sum[0] += 0.346153826;
                        } else {
                          sum[0] += 1.23239434;
                        }
                      } else {
                        if (sample[0] <93) {
                          sum[0] += 1.24193537;
                        } else {
                          sum[0] += 0.3857449;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <106) {
                    sum[0] += 1.66607726;
                  } else {
                    if (sample[1] <106) {
                      sum[0] += 0.734146297;
                    } else {
                      sum[0] += 0.0289256144;
                    }
                  }
                }
              }
            }
          } else {
            if (sample[2] <98) {
              if (sample[3] <162) {
                if (sample[1] <57) {
                  sum[0] += 1.1586206;
                } else {
                  if (sample[4] <98) {
                    if (sample[1] <75) {
                      if (sample[4] <93) {
                        if (sample[0] <93) {
                          sum[0] += 0.0642201751;
                        } else {
                          sum[0] += -0.184210524;
                        }
                      } else {
                        sum[0] += 0.738532066;
                      }
                    } else {
                      sum[0] += 0.738532066;
                    }
                  } else {
                    sum[0] += -0.17355372;
                  }
                }
              } else {
                if (sample[4] <86) {
                  if (sample[4] <83) {
                    sum[0] += -0.212707177;
                  } else {
                    sum[0] += 0.552631557;
                  }
                } else {
                  if (sample[1] <56) {
                    sum[0] += 0.0642201751;
                  } else {
                    if (sample[0] <65) {
                      sum[0] += -0.0241379365;
                    } else {
                      sum[0] += -0.206783369;
                    }
                  }
                }
              }
            } else {
              if (sample[2] <109) {
                if (sample[4] <89) {
                  if (sample[3] <171) {
                    if (sample[0] <91) {
                      if (sample[0] <84) {
                        if (sample[2] <103) {
                          sum[0] += -0.253351212;
                        } else {
                          sum[0] += 0.0289256144;
                        }
                      } else {
                        if (sample[1] <74) {
                          sum[0] += 0.291011214;
                        } else {
                          sum[0] += -0.229257643;
                        }
                      }
                    } else {
                      sum[0] += -0.270802915;
                    }
                  } else {
                    if (sample[4] <84) {
                      if (sample[0] <79) {
                        if (sample[3] <177) {
                          sum[0] += -0.0726643652;
                        } else {
                          sum[0] += 0.534852505;
                        }
                      } else {
                        if (sample[1] <73) {
                          sum[0] += -5.48990142e-09;
                        } else {
                          sum[0] += 0.830039501;
                        }
                      }
                    } else {
                      if (sample[2] <108) {
                        if (sample[2] <102) {
                          sum[0] += -0.229257643;
                        } else {
                          sum[0] += 0.0121107185;
                        }
                      } else {
                        sum[0] += 0.368421048;
                      }
                    }
                  }
                } else {
                  if (sample[4] <98) {
                    if (sample[3] <178) {
                      if (sample[0] <74) {
                        if (sample[2] <103) {
                          sum[0] += -0.274427027;
                        } else {
                          sum[0] += -0.121739134;
                        }
                      } else {
                        sum[0] += -0.269420028;
                      }
                    } else {
                      if (sample[2] <108) {
                        if (sample[2] <101) {
                          sum[0] += 0.184210509;
                        } else {
                          sum[0] += -0.169245645;
                        }
                      } else {
                        if (sample[1] <68) {
                          sum[0] += -0.16055046;
                        } else {
                          sum[0] += 0.313793093;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <144) {
                      sum[0] += -5.48990142e-09;
                    } else {
                      if (sample[1] <59) {
                        if (sample[0] <83) {
                          sum[0] += -0.232365146;
                        } else {
                          sum[0] += 0.0642201751;
                        }
                      } else {
                        sum[0] += -0.285909206;
                      }
                    }
                  }
                }
              } else {
                if (sample[4] <107) {
                  if (sample[4] <96) {
                    if (sample[0] <87) {
                      if (sample[0] <80) {
                        if (sample[4] <87) {
                          sum[0] += -0.0138705494;
                        } else {
                          sum[0] += -0.272083014;
                        }
                      } else {
                        if (sample[2] <114) {
                          sum[0] += 0.0538461432;
                        } else {
                          sum[0] += -0.197589263;
                        }
                      }
                    } else {
                      if (sample[5] <110) {
                        if (sample[0] <91) {
                          sum[0] += -0.0813953504;
                        } else {
                          sum[0] += -0.232365146;
                        }
                      } else {
                        if (sample[3] <173) {
                          sum[0] += -0.291094631;
                        } else {
                          sum[0] += -0.218497112;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <118) {
                      if (sample[0] <70) {
                        if (sample[2] <110) {
                          sum[0] += -0.16055046;
                        } else {
                          sum[0] += 0.0289256144;
                        }
                      } else {
                        sum[0] += -0.291017443;
                      }
                    } else {
                      sum[0] += -0.0445859917;
                    }
                  }
                } else {
                  if (sample[1] <65) {
                    sum[0] += -0.212707177;
                  } else {
                    sum[0] += 0.736842096;
                  }
                }
              }
            }
          }
        } else {
          if (sample[5] <60) {
            if (sample[1] <47) {
              if (sample[4] <236) {
                sum[0] += 1.72416294;
              } else {
                if (sample[1] <30) {
                  if (sample[1] <24) {
                    sum[0] += 1.6888448;
                  } else {
                    if (sample[3] <72) {
                      sum[0] += 0.0642201751;
                    } else {
                      if (sample[3] <82) {
                        if (sample[3] <79) {
                          sum[0] += 1.28373694;
                        } else {
                          sum[0] += 0.0580110401;
                        }
                      } else {
                        sum[0] += 1.48770809;
                      }
                    }
                  }
                } else {
                  if (sample[2] <1) {
                    if (sample[3] <97) {
                      if (sample[0] <29) {
                        if (sample[0] <23) {
                          sum[0] += -0.133286327;
                        } else {
                          sum[0] += 0.469168872;
                        }
                      } else {
                        if (sample[3] <96) {
                          sum[0] += -0.281665504;
                        } else {
                          sum[0] += 0.111464955;
                        }
                      }
                    } else {
                      if (sample[3] <101) {
                        if (sample[3] <98) {
                          sum[0] += 0.735668778;
                        } else {
                          sum[0] += 0.100286521;
                        }
                      } else {
                        sum[0] += 1.02371538;
                      }
                    }
                  } else {
                    if (sample[1] <43) {
                      if (sample[3] <86) {
                        if (sample[0] <21) {
                          sum[0] += 0.820689619;
                        } else {
                          sum[0] += 0.223642156;
                        }
                      } else {
                        sum[0] += 1.32826257;
                      }
                    } else {
                      if (sample[0] <56) {
                        if (sample[5] <44) {
                          sum[0] += -0.217616573;
                        } else {
                          sum[0] += 0.125842676;
                        }
                      } else {
                        sum[0] += 0.820689619;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[3] <77) {
                if (sample[3] <75) {
                  sum[0] += 1.63390386;
                } else {
                  if (sample[2] <14) {
                    if (sample[4] <192) {
                      if (sample[1] <50) {
                        sum[0] += 0.830039501;
                      } else {
                        if (sample[0] <34) {
                          sum[0] += 0.290613711;
                        } else {
                          sum[0] += -0.16055046;
                        }
                      }
                    } else {
                      if (sample[0] <31) {
                        if (sample[0] <28) {
                          sum[0] += 0.849840224;
                        } else {
                          sum[0] += 1.50335562;
                        }
                      } else {
                        if (sample[0] <32) {
                          sum[0] += 0.399419695;
                        } else {
                          sum[0] += 1.26376438;
                        }
                      }
                    }
                  } else {
                    sum[0] += 1.5861026;
                  }
                }
              } else {
                if (sample[2] <11) {
                  if (sample[2] <9) {
                    if (sample[0] <55) {
                      if (sample[0] <33) {
                        if (sample[1] <51) {
                          sum[0] += 0.148556858;
                        } else {
                          sum[0] += 0.987551808;
                        }
                      } else {
                        if (sample[4] <235) {
                          sum[0] += -0.049634397;
                        } else {
                          sum[0] += -0.258440614;
                        }
                      }
                    } else {
                      if (sample[2] <2) {
                        sum[0] += -0.25207755;
                      } else {
                        if (sample[1] <50) {
                          sum[0] += 1.13953483;
                        } else {
                          sum[0] += 0.404624254;
                        }
                      }
                    }
                  } else {
                    if (sample[5] <55) {
                      if (sample[1] <50) {
                        if (sample[3] <84) {
                          sum[0] += 0.65488559;
                        } else {
                          sum[0] += 1.2234956;
                        }
                      } else {
                        if (sample[0] <34) {
                          sum[0] += 1.04132223;
                        } else {
                          sum[0] += 0.0629436672;
                        }
                      }
                    } else {
                      sum[0] += 1.24593294;
                    }
                  }
                } else {
                  if (sample[5] <59) {
                    if (sample[4] <186) {
                      if (sample[1] <58) {
                        sum[0] += 1.66842306;
                      } else {
                        if (sample[0] <58) {
                          sum[0] += 1.49130428;
                        } else {
                          sum[0] += -0.122270741;
                        }
                      }
                    } else {
                      if (sample[0] <46) {
                        if (sample[0] <36) {
                          sum[0] += 0.465405375;
                        } else {
                          sum[0] += 0.988761485;
                        }
                      } else {
                        sum[0] += 1.55711412;
                      }
                    }
                  } else {
                    if (sample[1] <55) {
                      if (sample[3] <94) {
                        sum[0] += 0.231404945;
                      } else {
                        sum[0] += 1.6112591;
                      }
                    } else {
                      if (sample[0] <58) {
                        sum[0] += 1.44059861;
                      } else {
                        if (sample[2] <25) {
                          sum[0] += 0.125803366;
                        } else {
                          sum[0] += -0.209829211;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[5] <73) {
              if (sample[3] <98) {
                if (sample[4] <178) {
                  if (sample[3] <87) {
                    if (sample[1] <72) {
                      if (sample[0] <57) {
                        sum[0] += 1.61703241;
                      } else {
                        if (sample[1] <65) {
                          sum[0] += 0.730166435;
                        } else {
                          sum[0] += 1.66729176;
                        }
                      }
                    } else {
                      if (sample[2] <26) {
                        if (sample[0] <52) {
                          sum[0] += -0.234026745;
                        } else {
                          sum[0] += -0.0445859917;
                        }
                      } else {
                        if (sample[0] <50) {
                          sum[0] += 0.184210509;
                        } else {
                          sum[0] += 0.6517241;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <57) {
                      if (sample[3] <95) {
                        if (sample[2] <23) {
                          sum[0] += 0.834437013;
                        } else {
                          sum[0] += 0.059546303;
                        }
                      } else {
                        sum[0] += 1.67801583;
                      }
                    } else {
                      if (sample[1] <64) {
                        if (sample[2] <26) {
                          sum[0] += 0.0730099455;
                        } else {
                          sum[0] += 0.629966438;
                        }
                      } else {
                        if (sample[5] <70) {
                          sum[0] += 1.36056328;
                        } else {
                          sum[0] += 0.842131913;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <198) {
                    if (sample[1] <55) {
                      if (sample[3] <95) {
                        if (sample[2] <15) {
                          sum[0] += 0.111464955;
                        } else {
                          sum[0] += 0.599447489;
                        }
                      } else {
                        sum[0] += 1.56264222;
                      }
                    } else {
                      if (sample[3] <91) {
                        if (sample[1] <69) {
                          sum[0] += 1.24156451;
                        } else {
                          sum[0] += -0.144098818;
                        }
                      } else {
                        if (sample[1] <57) {
                          sum[0] += 0.182364717;
                        } else {
                          sum[0] += -0.161514774;
                        }
                      }
                    }
                  } else {
                    if (sample[5] <67) {
                      if (sample[5] <62) {
                        if (sample[1] <60) {
                          sum[0] += -0.180773452;
                        } else {
                          sum[0] += 0.847918808;
                        }
                      } else {
                        if (sample[3] <97) {
                          sum[0] += 0.211044759;
                        } else {
                          sum[0] += 1.1501143;
                        }
                      }
                    } else {
                      if (sample[0] <69) {
                        if (sample[1] <57) {
                          sum[0] += -0.186615884;
                        } else {
                          sum[0] += -0.2660667;
                        }
                      } else {
                        if (sample[2] <15) {
                          sum[0] += -0.0688251108;
                        } else {
                          sum[0] += -0.258633167;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <1) {
                  sum[0] += -0.288422227;
                } else {
                  if (sample[3] <99) {
                    if (sample[0] <69) {
                      if (sample[4] <236) {
                        sum[0] += 1.63659954;
                      } else {
                        if (sample[0] <62) {
                          sum[0] += -0.16055046;
                        } else {
                          sum[0] += -0.0241379365;
                        }
                      }
                    } else {
                      if (sample[4] <227) {
                        if (sample[0] <72) {
                          sum[0] += 1.02128983;
                        } else {
                          sum[0] += 0.0624380447;
                        }
                      } else {
                        if (sample[1] <54) {
                          sum[0] += -0.275144517;
                        } else {
                          sum[0] += -0.0847201273;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <57) {
                      if (sample[4] <229) {
                        sum[0] += 1.69028497;
                      } else {
                        if (sample[1] <49) {
                          sum[0] += 1.60494065;
                        } else {
                          sum[0] += 0.443037957;
                        }
                      }
                    } else {
                      if (sample[2] <25) {
                        sum[0] += 0.288990825;
                      } else {
                        sum[0] += 1.00638974;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[3] <105) {
                if (sample[1] <58) {
                  if (sample[4] <242) {
                    if (sample[3] <100) {
                      if (sample[1] <56) {
                        if (sample[2] <7) {
                          sum[0] += 0.32639882;
                        } else {
                          sum[0] += 1.38924444;
                        }
                      } else {
                        if (sample[1] <57) {
                          sum[0] += 0.229926988;
                        } else {
                          sum[0] += -0.177732885;
                        }
                      }
                    } else {
                      if (sample[1] <57) {
                        if (sample[4] <234) {
                          sum[0] += 1.63045871;
                        } else {
                          sum[0] += 1.30187511;
                        }
                      } else {
                        if (sample[0] <77) {
                          sum[0] += 0.0230832547;
                        } else {
                          sum[0] += 1.04312897;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <250) {
                      if (sample[4] <246) {
                        if (sample[4] <244) {
                          sum[0] += -0.206256822;
                        } else {
                          sum[0] += 0.192059368;
                        }
                      } else {
                        if (sample[4] <247) {
                          sum[0] += 1.52486479;
                        } else {
                          sum[0] += 0.291476876;
                        }
                      }
                    } else {
                      sum[0] += -0.291546971;
                    }
                  }
                } else {
                  if (sample[3] <103) {
                    if (sample[4] <156) {
                      if (sample[3] <93) {
                        if (sample[1] <76) {
                          sum[0] += 0.731737971;
                        } else {
                          sum[0] += -0.277754784;
                        }
                      } else {
                        if (sample[0] <86) {
                          sum[0] += 0.461610287;
                        } else {
                          sum[0] += 0.0273607429;
                        }
                      }
                    } else {
                      if (sample[3] <92) {
                        sum[0] += -0.290748775;
                      } else {
                        if (sample[4] <170) {
                          sum[0] += -0.0912089944;
                        } else {
                          sum[0] += -0.270653665;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <96) {
                      if (sample[2] <19) {
                        if (sample[2] <16) {
                          sum[0] += -0.17355372;
                        } else {
                          sum[0] += 0.231404945;
                        }
                      } else {
                        if (sample[1] <65) {
                          sum[0] += 1.21420002;
                        } else {
                          sum[0] += 0.745409966;
                        }
                      }
                    } else {
                      if (sample[4] <194) {
                        if (sample[3] <104) {
                          sum[0] += -0.109272152;
                        } else {
                          sum[0] += 0.450868756;
                        }
                      } else {
                        sum[0] += -0.289477706;
                      }
                    }
                  }
                }
              } else {
                if (sample[4] <246) {
                  if (sample[0] <102) {
                    if (sample[0] <92) {
                      sum[0] += 1.63582242;
                    } else {
                      if (sample[4] <209) {
                        if (sample[3] <106) {
                          sum[0] += 1.05548847;
                        } else {
                          sum[0] += 1.47479439;
                        }
                      } else {
                        if (sample[3] <107) {
                          sum[0] += -0.0445859917;
                        } else {
                          sum[0] += 0.734806597;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <200) {
                      if (sample[3] <107) {
                        if (sample[4] <159) {
                          sum[0] += 1.09053826;
                        } else {
                          sum[0] += 0.346200228;
                        }
                      } else {
                        if (sample[0] <116) {
                          sum[0] += 1.4482758;
                        } else {
                          sum[0] += 0.803960323;
                        }
                      }
                    } else {
                      if (sample[4] <215) {
                        if (sample[1] <55) {
                          sum[0] += -0.221951216;
                        } else {
                          sum[0] += 0.208955199;
                        }
                      } else {
                        sum[0] += -0.277990431;
                      }
                    }
                  }
                } else {
                  if (sample[1] <32) {
                    sum[0] += 1.64347816;
                  } else {
                    if (sample[0] <83) {
                      sum[0] += 0.0642201751;
                    } else {
                      sum[0] += -0.288838297;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if (sample[4] <95) {
        if (sample[3] <113) {
          if (sample[2] <178) {
            if (sample[3] <6) {
              if (sample[1] <95) {
                if (sample[3] <5) {
                  if (sample[2] <133) {
                    if (sample[3] <4) {
                      if (sample[2] <132) {
                        sum[0] += -0.284698933;
                      } else {
                        if (sample[0] <86) {
                          sum[0] += 0.0828402266;
                        } else {
                          sum[0] += -0.232980326;
                        }
                      }
                    } else {
                      if (sample[2] <128) {
                        if (sample[0] <81) {
                          sum[0] += -0.184210524;
                        } else {
                          sum[0] += 0.495121926;
                        }
                      } else {
                        if (sample[4] <88) {
                          sum[0] += -5.48990142e-09;
                        } else {
                          sum[0] += -0.249258161;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <2) {
                      if (sample[4] <88) {
                        sum[0] += -0.279141098;
                      } else {
                        if (sample[4] <92) {
                          sum[0] += 0.451143414;
                        } else {
                          sum[0] += -0.194371477;
                        }
                      }
                    } else {
                      if (sample[4] <91) {
                        sum[0] += -0.193103448;
                      } else {
                        if (sample[1] <92) {
                          sum[0] += 1.19087136;
                        } else {
                          sum[0] += 0.184210509;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <127) {
                    if (sample[4] <93) {
                      sum[0] += 1.05934715;
                    } else {
                      sum[0] += 0.313793093;
                    }
                  } else {
                    if (sample[0] <84) {
                      sum[0] += 0.267515898;
                    } else {
                      if (sample[2] <131) {
                        sum[0] += -0.217616573;
                      } else {
                        sum[0] += 0.0289256144;
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <155) {
                  if (sample[2] <149) {
                    if (sample[4] <90) {
                      if (sample[1] <103) {
                        if (sample[1] <99) {
                          sum[0] += -0.0705289692;
                        } else {
                          sum[0] += 0.430056691;
                        }
                      } else {
                        sum[0] += -0.221951216;
                      }
                    } else {
                      if (sample[3] <5) {
                        sum[0] += 0.901661992;
                      } else {
                        sum[0] += 0.144827574;
                      }
                    }
                  } else {
                    if (sample[4] <81) {
                      if (sample[4] <80) {
                        if (sample[0] <106) {
                          sum[0] += 0.267515898;
                        } else {
                          sum[0] += 0.891719699;
                        }
                      } else {
                        sum[0] += -0.17355372;
                      }
                    } else {
                      sum[0] += 1.44282842;
                    }
                  }
                } else {
                  if (sample[4] <79) {
                    sum[0] += -0.0241379365;
                  } else {
                    sum[0] += -0.279271454;
                  }
                }
              }
            } else {
              if (sample[1] <131) {
                if (sample[3] <112) {
                  if (sample[2] <154) {
                    if (sample[3] <8) {
                      if (sample[2] <130) {
                        if (sample[4] <88) {
                          sum[0] += 1.64994156;
                        } else {
                          sum[0] += 0.766423285;
                        }
                      } else {
                        if (sample[4] <90) {
                          sum[0] += 0.641736984;
                        } else {
                          sum[0] += -0.0582120642;
                        }
                      }
                    } else {
                      if (sample[1] <122) {
                        if (sample[2] <138) {
                          sum[0] += 1.73356187;
                        } else {
                          sum[0] += 1.54526031;
                        }
                      } else {
                        if (sample[2] <91) {
                          sum[0] += 1.34871268;
                        } else {
                          sum[0] += 1.67914021;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <14) {
                      if (sample[0] <111) {
                        sum[0] += -0.273081928;
                      } else {
                        if (sample[2] <166) {
                          sum[0] += 0.0289256144;
                        } else {
                          sum[0] += -0.217616573;
                        }
                      }
                    } else {
                      sum[0] += 1.4015317;
                    }
                  }
                } else {
                  if (sample[4] <90) {
                    if (sample[0] <158) {
                      if (sample[4] <84) {
                        if (sample[0] <120) {
                          sum[0] += 0.779245257;
                        } else {
                          sum[0] += 1.60971797;
                        }
                      } else {
                        if (sample[0] <131) {
                          sum[0] += 0.932756722;
                        } else {
                          sum[0] += 1.47749102;
                        }
                      }
                    } else {
                      if (sample[2] <110) {
                        if (sample[1] <122) {
                          sum[0] += 0.778529942;
                        } else {
                          sum[0] += 0.139767036;
                        }
                      } else {
                        if (sample[0] <172) {
                          sum[0] += 1.22166491;
                        } else {
                          sum[0] += 0.267515898;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <155) {
                      if (sample[4] <93) {
                        if (sample[0] <120) {
                          sum[0] += 0.0642201751;
                        } else {
                          sum[0] += 1.04517043;
                        }
                      } else {
                        if (sample[1] <111) {
                          sum[0] += 0.447939217;
                        } else {
                          sum[0] += 1.12055326;
                        }
                      }
                    } else {
                      if (sample[1] <115) {
                        if (sample[0] <156) {
                          sum[0] += -0.215319663;
                        } else {
                          sum[0] += -0.0290456489;
                        }
                      } else {
                        if (sample[4] <92) {
                          sum[0] += 0.184642419;
                        } else {
                          sum[0] += 0.558282197;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <112) {
                  if (sample[3] <103) {
                    if (sample[1] <180) {
                      if (sample[1] <160) {
                        if (sample[2] <89) {
                          sum[0] += 0.823057294;
                        } else {
                          sum[0] += 1.47124696;
                        }
                      } else {
                        if (sample[2] <128) {
                          sum[0] += 1.48027873;
                        } else {
                          sum[0] += 0.852441192;
                        }
                      }
                    } else {
                      if (sample[3] <63) {
                        if (sample[2] <159) {
                          sum[0] += -0.00892099366;
                        } else {
                          sum[0] += -0.256365925;
                        }
                      } else {
                        sum[0] += 1.47046971;
                      }
                    }
                  } else {
                    if (sample[3] <111) {
                      if (sample[2] <139) {
                        if (sample[1] <158) {
                          sum[0] += 1.66769421;
                        } else {
                          sum[0] += 1.05533826;
                        }
                      } else {
                        sum[0] += 1.74404466;
                      }
                    } else {
                      if (sample[2] <146) {
                        if (sample[1] <140) {
                          sum[0] += 1.12779355;
                        } else {
                          sum[0] += 0.37453872;
                        }
                      } else {
                        sum[0] += 1.63807094;
                      }
                    }
                  }
                } else {
                  if (sample[1] <171) {
                    if (sample[0] <175) {
                      sum[0] += 0.940298438;
                    } else {
                      if (sample[2] <121) {
                        if (sample[1] <135) {
                          sum[0] += 0.0635400787;
                        } else {
                          sum[0] += 0.354430348;
                        }
                      } else {
                        if (sample[1] <164) {
                          sum[0] += -0.115848526;
                        } else {
                          sum[0] += 0.412663728;
                        }
                      }
                    }
                  } else {
                    sum[0] += 1.35198545;
                  }
                }
              }
            }
          } else {
            if (sample[5] <183) {
              if (sample[1] <146) {
                sum[0] += -0.260393858;
              } else {
                if (sample[3] <25) {
                  if (sample[4] <88) {
                    sum[0] += 1.62834215;
                  } else {
                    if (sample[1] <161) {
                      sum[0] += 0.820689619;
                    } else {
                      if (sample[1] <168) {
                        sum[0] += -5.48990142e-09;
                      } else {
                        sum[0] += 0.288990825;
                      }
                    }
                  }
                } else {
                  if (sample[2] <180) {
                    if (sample[4] <91) {
                      if (sample[1] <174) {
                        if (sample[0] <118) {
                          sum[0] += 0.738532066;
                        } else {
                          sum[0] += -0.0241379365;
                        }
                      } else {
                        if (sample[3] <31) {
                          sum[0] += 0.978589356;
                        } else {
                          sum[0] += 0.288990825;
                        }
                      }
                    } else {
                      if (sample[0] <114) {
                        sum[0] += 0.0642201751;
                      } else {
                        sum[0] += -0.184210524;
                      }
                    }
                  } else {
                    if (sample[5] <182) {
                      if (sample[1] <172) {
                        sum[0] += 0.0642201751;
                      } else {
                        if (sample[5] <181) {
                          sum[0] += -0.0773480684;
                        } else {
                          sum[0] += -0.242214531;
                        }
                      }
                    } else {
                      if (sample[0] <122) {
                        if (sample[0] <118) {
                          sum[0] += 0.0642201751;
                        } else {
                          sum[0] += -0.184210524;
                        }
                      } else {
                        sum[0] += 0.820689619;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[1] <180) {
                if (sample[3] <20) {
                  sum[0] += -0.275370568;
                } else {
                  if (sample[4] <83) {
                    if (sample[1] <172) {
                      sum[0] += 1.12903225;
                    } else {
                      if (sample[4] <79) {
                        sum[0] += 0.807692289;
                      } else {
                        if (sample[1] <178) {
                          sum[0] += -0.0152838491;
                        } else {
                          sum[0] += 0.433884293;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <175) {
                      if (sample[2] <187) {
                        if (sample[2] <186) {
                          sum[0] += 0.193370149;
                        } else {
                          sum[0] += 0.738532066;
                        }
                      } else {
                        sum[0] += -0.200636938;
                      }
                    } else {
                      if (sample[4] <84) {
                        sum[0] += 0.0289256144;
                      } else {
                        sum[0] += -0.202078521;
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <25) {
                  if (sample[0] <132) {
                    sum[0] += -0.16055046;
                  } else {
                    sum[0] += 0.288990825;
                  }
                } else {
                  if (sample[1] <184) {
                    if (sample[4] <80) {
                      sum[0] += 0.184210509;
                    } else {
                      if (sample[0] <125) {
                        sum[0] += -0.270802915;
                      } else {
                        if (sample[1] <183) {
                          sum[0] += -0.225806445;
                        } else {
                          sum[0] += 0.0580110401;
                        }
                      }
                    }
                  } else {
                    sum[0] += -0.291385293;
                  }
                }
              }
            }
          }
        } else {
          if (sample[2] <107) {
            if (sample[4] <86) {
              if (sample[3] <114) {
                if (sample[2] <96) {
                  if (sample[0] <136) {
                    if (sample[4] <82) {
                      if (sample[2] <93) {
                        if (sample[0] <133) {
                          sum[0] += 1.0773195;
                        } else {
                          sum[0] += 0.530460596;
                        }
                      } else {
                        sum[0] += 1.52538776;
                      }
                    } else {
                      if (sample[0] <133) {
                        if (sample[4] <83) {
                          sum[0] += 1.18932033;
                        } else {
                          sum[0] += 0.56216532;
                        }
                      } else {
                        if (sample[4] <83) {
                          sum[0] += -0.0889145508;
                        } else {
                          sum[0] += 0.246531457;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <81) {
                      if (sample[1] <105) {
                        if (sample[2] <95) {
                          sum[0] += -0.0904306248;
                        } else {
                          sum[0] += -0.229599997;
                        }
                      } else {
                        if (sample[0] <138) {
                          sum[0] += 0.240799978;
                        } else {
                          sum[0] += -0.0215384681;
                        }
                      }
                    } else {
                      if (sample[1] <104) {
                        if (sample[4] <85) {
                          sum[0] += 0.100814015;
                        } else {
                          sum[0] += 0.579617798;
                        }
                      } else {
                        if (sample[2] <95) {
                          sum[0] += 0.787807703;
                        } else {
                          sum[0] += 0.358267695;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <81) {
                    if (sample[1] <107) {
                      sum[0] += 0.895348787;
                    } else {
                      sum[0] += 1.53075159;
                    }
                  } else {
                    if (sample[0] <154) {
                      if (sample[4] <84) {
                        if (sample[4] <83) {
                          sum[0] += 1.03237402;
                        } else {
                          sum[0] += 0.597374141;
                        }
                      } else {
                        if (sample[0] <150) {
                          sum[0] += 1.46985435;
                        } else {
                          sum[0] += 0.686792433;
                        }
                      }
                    } else {
                      if (sample[1] <116) {
                        sum[0] += -0.193103448;
                      } else {
                        sum[0] += 0.686792433;
                      }
                    }
                  }
                }
              } else {
                if (sample[0] <133) {
                  if (sample[2] <95) {
                    if (sample[3] <115) {
                      if (sample[0] <123) {
                        sum[0] += 1.03213608;
                      } else {
                        if (sample[0] <124) {
                          sum[0] += 0.00938337017;
                        } else {
                          sum[0] += 0.67618835;
                        }
                      }
                    } else {
                      if (sample[0] <132) {
                        if (sample[1] <88) {
                          sum[0] += 0.84190613;
                        } else {
                          sum[0] += 1.27706277;
                        }
                      } else {
                        if (sample[2] <92) {
                          sum[0] += 0.670984447;
                        } else {
                          sum[0] += -5.48990142e-09;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <124) {
                      sum[0] += 0.313793093;
                    } else {
                      if (sample[0] <131) {
                        sum[0] += -0.249258161;
                      } else {
                        sum[0] += -0.0445859917;
                      }
                    }
                  }
                } else {
                  if (sample[4] <78) {
                    if (sample[3] <118) {
                      if (sample[0] <147) {
                        sum[0] += 1.06598973;
                      } else {
                        sum[0] += 0.368421048;
                      }
                    } else {
                      if (sample[2] <100) {
                        sum[0] += 0.513761461;
                      } else {
                        sum[0] += -0.184210524;
                      }
                    }
                  } else {
                    if (sample[1] <107) {
                      if (sample[3] <116) {
                        if (sample[0] <138) {
                          sum[0] += -0.0825688094;
                        } else {
                          sum[0] += 0.116368271;
                        }
                      } else {
                        if (sample[3] <120) {
                          sum[0] += 0.653215587;
                        } else {
                          sum[0] += -0.244186044;
                        }
                      }
                    } else {
                      if (sample[0] <151) {
                        if (sample[1] <108) {
                          sum[0] += 0.281382203;
                        } else {
                          sum[0] += 0.854764044;
                        }
                      } else {
                        if (sample[1] <114) {
                          sum[0] += -0.121707059;
                        } else {
                          sum[0] += 0.270297021;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[0] <149) {
                if (sample[1] <94) {
                  if (sample[2] <97) {
                    if (sample[3] <114) {
                      if (sample[4] <91) {
                        if (sample[0] <123) {
                          sum[0] += 0.768545926;
                        } else {
                          sum[0] += 0.445532411;
                        }
                      } else {
                        if (sample[2] <78) {
                          sum[0] += 0.495121926;
                        } else {
                          sum[0] += 0.0264750291;
                        }
                      }
                    } else {
                      if (sample[0] <130) {
                        sum[0] += 0.997872293;
                      } else {
                        if (sample[1] <87) {
                          sum[0] += -0.16055046;
                        } else {
                          sum[0] += 0.683752358;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <105) {
                      sum[0] += -0.25454545;
                    } else {
                      sum[0] += 0.513761461;
                    }
                  }
                } else {
                  if (sample[3] <114) {
                    if (sample[1] <100) {
                      if (sample[2] <89) {
                        if (sample[2] <84) {
                          sum[0] += 0.55044508;
                        } else {
                          sum[0] += 0.149055079;
                        }
                      } else {
                        sum[0] += -0.250716329;
                      }
                    } else {
                      if (sample[4] <93) {
                        if (sample[4] <88) {
                          sum[0] += 0.412399709;
                        } else {
                          sum[0] += 0.830111444;
                        }
                      } else {
                        if (sample[0] <141) {
                          sum[0] += 0.636363626;
                        } else {
                          sum[0] += -0.181975737;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <88) {
                      if (sample[0] <147) {
                        if (sample[1] <95) {
                          sum[0] += 0.267515898;
                        } else {
                          sum[0] += -0.109996215;
                        }
                      } else {
                        sum[0] += 0.662721872;
                      }
                    } else {
                      if (sample[1] <97) {
                        if (sample[0] <133) {
                          sum[0] += -0.0484764613;
                        } else {
                          sum[0] += 0.802292228;
                        }
                      } else {
                        if (sample[2] <93) {
                          sum[0] += -0.0024911114;
                        } else {
                          sum[0] += 0.236670986;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[4] <89) {
                  if (sample[3] <114) {
                    if (sample[0] <155) {
                      if (sample[2] <99) {
                        sum[0] += -0.193103448;
                      } else {
                        if (sample[0] <151) {
                          sum[0] += 0.820689619;
                        } else {
                          sum[0] += 0.325581372;
                        }
                      }
                    } else {
                      if (sample[0] <156) {
                        sum[0] += -0.244186044;
                      } else {
                        if (sample[2] <104) {
                          sum[0] += 0.198689938;
                        } else {
                          sum[0] += -0.132911399;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <151) {
                      if (sample[3] <115) {
                        sum[0] += 0.132075459;
                      } else {
                        sum[0] += -0.217616573;
                      }
                    } else {
                      if (sample[3] <115) {
                        if (sample[0] <155) {
                          sum[0] += -0.260307193;
                        } else {
                          sum[0] += -0.151199996;
                        }
                      } else {
                        if (sample[0] <153) {
                          sum[0] += -0.0141987903;
                        } else {
                          sum[0] += -0.202397734;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[1] <101) {
                    if (sample[0] <150) {
                      sum[0] += -0.184210524;
                    } else {
                      sum[0] += 0.433884293;
                    }
                  } else {
                    if (sample[4] <92) {
                      if (sample[3] <114) {
                        if (sample[0] <158) {
                          sum[0] += -0.149047434;
                        } else {
                          sum[0] += 0.0132325059;
                        }
                      } else {
                        if (sample[1] <118) {
                          sum[0] += -0.254722595;
                        } else {
                          sum[0] += -5.48990142e-09;
                        }
                      }
                    } else {
                      if (sample[3] <116) {
                        if (sample[0] <150) {
                          sum[0] += -7.27731075e-09;
                        } else {
                          sum[0] += -0.268324316;
                        }
                      } else {
                        if (sample[1] <110) {
                          sum[0] += -0.193103448;
                        } else {
                          sum[0] += 0.227810636;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[1] <173) {
              if (sample[2] <117) {
                if (sample[4] <84) {
                  if (sample[3] <114) {
                    if (sample[1] <123) {
                      if (sample[0] <161) {
                        sum[0] += 0.731737971;
                      } else {
                        sum[0] += -0.17355372;
                      }
                    } else {
                      if (sample[0] <168) {
                        sum[0] += 1.05813944;
                      } else {
                        sum[0] += 0.423566848;
                      }
                    }
                  } else {
                    if (sample[3] <116) {
                      if (sample[0] <163) {
                        if (sample[4] <82) {
                          sum[0] += 0.8632707;
                        } else {
                          sum[0] += 0.313793093;
                        }
                      } else {
                        if (sample[4] <80) {
                          sum[0] += 0.513761461;
                        } else {
                          sum[0] += -0.129390016;
                        }
                      }
                    } else {
                      if (sample[3] <136) {
                        if (sample[0] <152) {
                          sum[0] += 0.469168872;
                        } else {
                          sum[0] += -0.0672358647;
                        }
                      } else {
                        sum[0] += -0.25207755;
                      }
                    }
                  }
                } else {
                  if (sample[0] <167) {
                    if (sample[1] <120) {
                      if (sample[4] <85) {
                        if (sample[0] <153) {
                          sum[0] += -0.0241379365;
                        } else {
                          sum[0] += -0.187667564;
                        }
                      } else {
                        if (sample[2] <114) {
                          sum[0] += -0.277831554;
                        } else {
                          sum[0] += -0.122270741;
                        }
                      }
                    } else {
                      if (sample[0] <162) {
                        sum[0] += 0.552631557;
                      } else {
                        if (sample[4] <85) {
                          sum[0] += 0.231404945;
                        } else {
                          sum[0] += -0.132475406;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <131) {
                      sum[0] += -0.281098902;
                    } else {
                      if (sample[4] <93) {
                        sum[0] += 0.136585355;
                      } else {
                        sum[0] += -0.232365146;
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <117) {
                  if (sample[0] <191) {
                    if (sample[4] <79) {
                      if (sample[3] <115) {
                        if (sample[0] <187) {
                          sum[0] += 0.566292107;
                        } else {
                          sum[0] += -0.16055046;
                        }
                      } else {
                        if (sample[1] <127) {
                          sum[0] += 0.0642201751;
                        } else {
                          sum[0] += -0.23517786;
                        }
                      }
                    } else {
                      if (sample[1] <138) {
                        if (sample[4] <81) {
                          sum[0] += -0.0207920857;
                        } else {
                          sum[0] += -0.227477789;
                        }
                      } else {
                        if (sample[2] <130) {
                          sum[0] += 0.0653650165;
                        } else {
                          sum[0] += -0.207100585;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <236) {
                      if (sample[0] <197) {
                        if (sample[1] <143) {
                          sum[0] += -0.275904089;
                        } else {
                          sum[0] += -0.133692458;
                        }
                      } else {
                        if (sample[2] <151) {
                          sum[0] += -0.291058004;
                        } else {
                          sum[0] += -0.191562146;
                        }
                      }
                    } else {
                      if (sample[0] <237) {
                        sum[0] += 0.636363626;
                      } else {
                        sum[0] += -0.250716329;
                      }
                    }
                  }
                } else {
                  if (sample[3] <168) {
                    sum[0] += -0.291493118;
                  } else {
                    if (sample[1] <122) {
                      if (sample[1] <99) {
                        sum[0] += -0.286693454;
                      } else {
                        if (sample[0] <105) {
                          sum[0] += 0.636363626;
                        } else {
                          sum[0] += -0.252791584;
                        }
                      }
                    } else {
                      if (sample[3] <173) {
                        if (sample[4] <82) {
                          sum[0] += -0.196821511;
                        } else {
                          sum[0] += 0.193370149;
                        }
                      } else {
                        if (sample[3] <175) {
                          sum[0] += 0.733201563;
                        } else {
                          sum[0] += -0.110315189;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              sum[0] += 1.42641509;
            }
          }
        }
      } else {
        if (sample[5] <155) {
          if (sample[4] <132) {
            if (sample[3] <111) {
              if (sample[3] <7) {
                if (sample[1] <91) {
                  if (sample[2] <141) {
                    if (sample[1] <74) {
                      if (sample[2] <125) {
                        if (sample[1] <70) {
                          sum[0] += 0.734806597;
                        } else {
                          sum[0] += -0.19414483;
                        }
                      } else {
                        if (sample[3] <4) {
                          sum[0] += 1.30886424;
                        } else {
                          sum[0] += 0.0642201751;
                        }
                      }
                    } else {
                      if (sample[3] <6) {
                        if (sample[1] <89) {
                          sum[0] += -0.231382683;
                        } else {
                          sum[0] += 0.0381565802;
                        }
                      } else {
                        if (sample[1] <83) {
                          sum[0] += -0.1388973;
                        } else {
                          sum[0] += 0.386882812;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <150) {
                      if (sample[0] <88) {
                        if (sample[4] <128) {
                          sum[0] += 0.692579448;
                        } else {
                          sum[0] += 0.2317487;
                        }
                      } else {
                        if (sample[3] <1) {
                          sum[0] += 0.0642201751;
                        } else {
                          sum[0] += -0.199524939;
                        }
                      }
                    } else {
                      if (sample[3] <5) {
                        if (sample[1] <89) {
                          sum[0] += -0.259550571;
                        } else {
                          sum[0] += -0.0290456489;
                        }
                      } else {
                        if (sample[1] <90) {
                          sum[0] += 0.111464955;
                        } else {
                          sum[0] += 0.482758611;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <2) {
                    if (sample[1] <93) {
                      sum[0] += -0.242214531;
                    } else {
                      if (sample[2] <151) {
                        sum[0] += 0.513761461;
                      } else {
                        sum[0] += -0.184210524;
                      }
                    }
                  } else {
                    if (sample[1] <94) {
                      if (sample[4] <108) {
                        if (sample[2] <135) {
                          sum[0] += 0.0289256144;
                        } else {
                          sum[0] += 1.17206287;
                        }
                      } else {
                        if (sample[4] <125) {
                          sum[0] += 0.282471597;
                        } else {
                          sum[0] += 1.00552487;
                        }
                      }
                    } else {
                      if (sample[2] <143) {
                        if (sample[0] <86) {
                          sum[0] += 0.734146297;
                        } else {
                          sum[0] += 0.22580643;
                        }
                      } else {
                        if (sample[2] <153) {
                          sum[0] += 1.40980434;
                        } else {
                          sum[0] += 0.92533654;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <121) {
                  if (sample[3] <110) {
                    if (sample[2] <65) {
                      if (sample[1] <111) {
                        if (sample[0] <124) {
                          sum[0] += 1.37704909;
                        } else {
                          sum[0] += 0.691874325;
                        }
                      } else {
                        if (sample[1] <115) {
                          sum[0] += 0.0707865059;
                        } else {
                          sum[0] += -0.272004485;
                        }
                      }
                    } else {
                      if (sample[3] <10) {
                        if (sample[1] <88) {
                          sum[0] += 0.516537547;
                        } else {
                          sum[0] += 1.27624297;
                        }
                      } else {
                        if (sample[4] <113) {
                          sum[0] += 1.69543397;
                        } else {
                          sum[0] += 1.51692486;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <102) {
                      if (sample[0] <135) {
                        sum[0] += 1.66907096;
                      } else {
                        if (sample[4] <99) {
                          sum[0] += 1.58634913;
                        } else {
                          sum[0] += 1.24479377;
                        }
                      }
                    } else {
                      if (sample[4] <113) {
                        if (sample[2] <81) {
                          sum[0] += 1.28547263;
                        } else {
                          sum[0] += 0.444383591;
                        }
                      } else {
                        if (sample[1] <97) {
                          sum[0] += 0.0292585883;
                        } else {
                          sum[0] += 0.444980234;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <84) {
                    if (sample[3] <31) {
                      if (sample[3] <26) {
                        if (sample[3] <25) {
                          sum[0] += 1.49989271;
                        } else {
                          sum[0] += 0.907523751;
                        }
                      } else {
                        if (sample[4] <114) {
                          sum[0] += 0.941887796;
                        } else {
                          sum[0] += -0.0395960175;
                        }
                      }
                    } else {
                      if (sample[3] <32) {
                        if (sample[2] <129) {
                          sum[0] += 1.54103827;
                        } else {
                          sum[0] += 0.968364537;
                        }
                      } else {
                        if (sample[3] <82) {
                          sum[0] += 1.65596151;
                        } else {
                          sum[0] += 0.803895175;
                        }
                      }
                    }
                  } else {
                    if (sample[5] <143) {
                      if (sample[3] <93) {
                        if (sample[4] <97) {
                          sum[0] += 0.0184750631;
                        } else {
                          sum[0] += -0.264245391;
                        }
                      } else {
                        if (sample[2] <76) {
                          sum[0] += -0.100589536;
                        } else {
                          sum[0] += 0.857676446;
                        }
                      }
                    } else {
                      if (sample[2] <82) {
                        if (sample[1] <141) {
                          sum[0] += 0.0920547843;
                        } else {
                          sum[0] += 1.08309448;
                        }
                      } else {
                        if (sample[3] <102) {
                          sum[0] += 1.13439178;
                        } else {
                          sum[0] += 1.57346213;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[5] <137) {
                if (sample[1] <94) {
                  if (sample[4] <113) {
                    if (sample[2] <90) {
                      if (sample[4] <107) {
                        if (sample[3] <112) {
                          sum[0] += 1.25467706;
                        } else {
                          sum[0] += 0.674875498;
                        }
                      } else {
                        if (sample[0] <124) {
                          sum[0] += 0.919037163;
                        } else {
                          sum[0] += 0.00522543164;
                        }
                      }
                    } else {
                      if (sample[4] <102) {
                        if (sample[4] <97) {
                          sum[0] += -0.264316201;
                        } else {
                          sum[0] += -0.0553182438;
                        }
                      } else {
                        if (sample[3] <173) {
                          sum[0] += -0.190400004;
                        } else {
                          sum[0] += 0.519999981;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <123) {
                      if (sample[2] <129) {
                        if (sample[4] <121) {
                          sum[0] += 0.659124017;
                        } else {
                          sum[0] += -0.062130183;
                        }
                      } else {
                        if (sample[3] <178) {
                          sum[0] += 1.46511626;
                        } else {
                          sum[0] += 0.433884293;
                        }
                      }
                    } else {
                      if (sample[3] <113) {
                        if (sample[4] <126) {
                          sum[0] += -0.2597619;
                        } else {
                          sum[0] += 0.259643912;
                        }
                      } else {
                        if (sample[2] <75) {
                          sum[0] += 0.265542656;
                        } else {
                          sum[0] += -0.195915282;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <99) {
                    if (sample[3] <113) {
                      sum[0] += 1.37139857;
                    } else {
                      if (sample[2] <85) {
                        sum[0] += 0.797927439;
                      } else {
                        sum[0] += 0.0289256144;
                      }
                    }
                  } else {
                    if (sample[0] <135) {
                      if (sample[0] <132) {
                        if (sample[4] <100) {
                          sum[0] += 0.184210509;
                        } else {
                          sum[0] += 0.690311372;
                        }
                      } else {
                        sum[0] += 1.04975295;
                      }
                    } else {
                      if (sample[3] <112) {
                        if (sample[2] <82) {
                          sum[0] += 0.636363626;
                        } else {
                          sum[0] += -0.0445859917;
                        }
                      } else {
                        if (sample[2] <82) {
                          sum[0] += -0.0894568712;
                        } else {
                          sum[0] += 0.433884293;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <110) {
                  if (sample[0] <84) {
                    sum[0] += 1.5022471;
                  } else {
                    if (sample[4] <104) {
                      if (sample[3] <112) {
                        if (sample[4] <97) {
                          sum[0] += 0.980832696;
                        } else {
                          sum[0] += 0.0915528759;
                        }
                      } else {
                        if (sample[2] <91) {
                          sum[0] += -0.0773134381;
                        } else {
                          sum[0] += -0.260188282;
                        }
                      }
                    } else {
                      if (sample[3] <114) {
                        if (sample[2] <69) {
                          sum[0] += 0.144827574;
                        } else {
                          sum[0] += -0.275243282;
                        }
                      } else {
                        if (sample[3] <122) {
                          sum[0] += 0.197183073;
                        } else {
                          sum[0] += -0.181569964;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <102) {
                    if (sample[3] <112) {
                      sum[0] += 1.16837096;
                    } else {
                      if (sample[1] <111) {
                        if (sample[2] <95) {
                          sum[0] += 0.6517241;
                        } else {
                          sum[0] += -0.145283014;
                        }
                      } else {
                        sum[0] += 0.921052575;
                      }
                    }
                  } else {
                    if (sample[0] <154) {
                      sum[0] += -0.180515751;
                    } else {
                      sum[0] += 0.144827574;
                    }
                  }
                }
              }
            }
          } else {
            if (sample[3] <25) {
              if (sample[1] <86) {
                if (sample[2] <133) {
                  if (sample[1] <71) {
                    if (sample[0] <2) {
                      if (sample[2] <128) {
                        if (sample[2] <121) {
                          sum[0] += -0.192156136;
                        } else {
                          sum[0] += -0.232281849;
                        }
                      } else {
                        if (sample[2] <129) {
                          sum[0] += -0.263860583;
                        } else {
                          sum[0] += -0.287605345;
                        }
                      }
                    } else {
                      if (sample[3] <15) {
                        if (sample[2] <124) {
                          sum[0] += 0.350471705;
                        } else {
                          sum[0] += -0.161518008;
                        }
                      } else {
                        if (sample[2] <129) {
                          sum[0] += 0.913499773;
                        } else {
                          sum[0] += 0.0518661775;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <11) {
                      if (sample[2] <126) {
                        if (sample[0] <52) {
                          sum[0] += 0.713055909;
                        } else {
                          sum[0] += 1.35667741;
                        }
                      } else {
                        if (sample[1] <80) {
                          sum[0] += -0.190225452;
                        } else {
                          sum[0] += 0.69489044;
                        }
                      }
                    } else {
                      if (sample[0] <2) {
                        if (sample[1] <77) {
                          sum[0] += -0.178390071;
                        } else {
                          sum[0] += 1.16460168;
                        }
                      } else {
                        if (sample[1] <72) {
                          sum[0] += 0.780281723;
                        } else {
                          sum[0] += 1.21683884;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[1] <82) {
                    if (sample[3] <13) {
                      if (sample[4] <224) {
                        if (sample[3] <12) {
                          sum[0] += -0.270390183;
                        } else {
                          sum[0] += -0.238734722;
                        }
                      } else {
                        sum[0] += 0.433884293;
                      }
                    } else {
                      if (sample[4] <248) {
                        if (sample[1] <72) {
                          sum[0] += -0.248806447;
                        } else {
                          sum[0] += -0.0533928983;
                        }
                      } else {
                        if (sample[2] <139) {
                          sum[0] += -0.0310421363;
                        } else {
                          sum[0] += -0.280111104;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <14) {
                      if (sample[0] <55) {
                        if (sample[2] <149) {
                          sum[0] += -0.160914123;
                        } else {
                          sum[0] += 0.128304124;
                        }
                      } else {
                        if (sample[4] <136) {
                          sum[0] += 0.322663218;
                        } else {
                          sum[0] += -0.241065875;
                        }
                      }
                    } else {
                      if (sample[1] <84) {
                        if (sample[0] <6) {
                          sum[0] += 1.33170724;
                        } else {
                          sum[0] += 0.338519752;
                        }
                      } else {
                        if (sample[0] <34) {
                          sum[0] += 1.37604058;
                        } else {
                          sum[0] += 0.564516127;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <13) {
                  if (sample[1] <90) {
                    if (sample[4] <138) {
                      if (sample[0] <70) {
                        sum[0] += 0.982014358;
                      } else {
                        if (sample[1] <88) {
                          sum[0] += -0.240072206;
                        } else {
                          sum[0] += 0.193370149;
                        }
                      }
                    } else {
                      if (sample[4] <182) {
                        if (sample[3] <10) {
                          sum[0] += -0.0983606577;
                        } else {
                          sum[0] += 0.148807794;
                        }
                      } else {
                        sum[0] += 1.19896185;
                      }
                    }
                  } else {
                    if (sample[1] <94) {
                      if (sample[3] <11) {
                        if (sample[2] <149) {
                          sum[0] += 0.976669669;
                        } else {
                          sum[0] += 0.378378361;
                        }
                      } else {
                        if (sample[2] <140) {
                          sum[0] += 0.345849782;
                        } else {
                          sum[0] += 1.32192016;
                        }
                      }
                    } else {
                      if (sample[1] <103) {
                        if (sample[3] <9) {
                          sum[0] += 0.732851923;
                        } else {
                          sum[0] += 1.41544819;
                        }
                      } else {
                        sum[0] += 0.288990825;
                      }
                    }
                  }
                } else {
                  if (sample[2] <135) {
                    if (sample[4] <172) {
                      if (sample[2] <129) {
                        sum[0] += 1.65970051;
                      } else {
                        if (sample[1] <119) {
                          sum[0] += 1.46908379;
                        } else {
                          sum[0] += 0.231404945;
                        }
                      }
                    } else {
                      if (sample[1] <104) {
                        sum[0] += 1.55103302;
                      } else {
                        if (sample[4] <177) {
                          sum[0] += 0.979715943;
                        } else {
                          sum[0] += 0.0344435945;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <187) {
                      if (sample[1] <88) {
                        if (sample[2] <145) {
                          sum[0] += 0.177215174;
                        } else {
                          sum[0] += -0.136283189;
                        }
                      } else {
                        if (sample[1] <102) {
                          sum[0] += 1.3236258;
                        } else {
                          sum[0] += 1.01527643;
                        }
                      }
                    } else {
                      if (sample[1] <107) {
                        if (sample[4] <239) {
                          sum[0] += 1.39797997;
                        } else {
                          sum[0] += 1.67924023;
                        }
                      } else {
                        if (sample[2] <143) {
                          sum[0] += 0.909747243;
                        } else {
                          sum[0] += -7.27731075e-09;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[2] <57) {
                if (sample[4] <145) {
                  if (sample[1] <104) {
                    if (sample[3] <109) {
                      sum[0] += 1.2815609;
                    } else {
                      if (sample[0] <122) {
                        sum[0] += 0.662721872;
                      } else {
                        if (sample[0] <123) {
                          sum[0] += -0.16055046;
                        } else {
                          sum[0] += 0.288990825;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <100) {
                      sum[0] += 0.0642201751;
                    } else {
                      if (sample[1] <111) {
                        sum[0] += 0.0289256144;
                      } else {
                        sum[0] += -0.2912063;
                      }
                    }
                  }
                } else {
                  if (sample[4] <161) {
                    if (sample[1] <104) {
                      if (sample[0] <129) {
                        if (sample[1] <91) {
                          sum[0] += 0.477859735;
                        } else {
                          sum[0] += 1.06598973;
                        }
                      } else {
                        if (sample[1] <89) {
                          sum[0] += -0.248612642;
                        } else {
                          sum[0] += 0.258444607;
                        }
                      }
                    } else {
                      if (sample[1] <115) {
                        if (sample[2] <55) {
                          sum[0] += -0.194275796;
                        } else {
                          sum[0] += 0.342298269;
                        }
                      } else {
                        sum[0] += -0.291572511;
                      }
                    }
                  } else {
                    if (sample[3] <116) {
                      if (sample[3] <112) {
                        sum[0] += -0.291093051;
                      } else {
                        if (sample[0] <128) {
                          sum[0] += 0.0968858004;
                        } else {
                          sum[0] += -0.256175667;
                        }
                      }
                    } else {
                      sum[0] += 0.111464955;
                    }
                  }
                }
              } else {
                if (sample[3] <31) {
                  if (sample[1] <134) {
                    if (sample[0] <44) {
                      if (sample[2] <136) {
                        if (sample[1] <121) {
                          sum[0] += -0.226253405;
                        } else {
                          sum[0] += 0.101611249;
                        }
                      } else {
                        if (sample[2] <144) {
                          sum[0] += 1.17232251;
                        } else {
                          sum[0] += -0.11290323;
                        }
                      }
                    } else {
                      if (sample[1] <129) {
                        if (sample[3] <26) {
                          sum[0] += 0.461394936;
                        } else {
                          sum[0] += 0.0748781338;
                        }
                      } else {
                        if (sample[3] <28) {
                          sum[0] += 0.121590145;
                        } else {
                          sum[0] += -0.243149593;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <44) {
                      if (sample[2] <147) {
                        if (sample[3] <28) {
                          sum[0] += 1.3339622;
                        } else {
                          sum[0] += 0.0580110401;
                        }
                      } else {
                        sum[0] += -0.244186044;
                      }
                    } else {
                      if (sample[1] <149) {
                        if (sample[0] <60) {
                          sum[0] += -0.21447964;
                        } else {
                          sum[0] += -0.276612163;
                        }
                      } else {
                        if (sample[0] <72) {
                          sum[0] += 0.870165706;
                        } else {
                          sum[0] += 0.0642201751;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <91) {
                    if (sample[4] <194) {
                      if (sample[3] <32) {
                        if (sample[2] <130) {
                          sum[0] += 1.14942908;
                        } else {
                          sum[0] += 0.519456983;
                        }
                      } else {
                        if (sample[5] <140) {
                          sum[0] += 1.50893223;
                        } else {
                          sum[0] += 0.82567209;
                        }
                      }
                    } else {
                      if (sample[2] <103) {
                        sum[0] += 0.513761461;
                      } else {
                        if (sample[2] <123) {
                          sum[0] += -0.25207755;
                        } else {
                          sum[0] += 0.0642201751;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <117) {
                      if (sample[3] <111) {
                        if (sample[4] <141) {
                          sum[0] += 0.857698083;
                        } else {
                          sum[0] += 0.350108355;
                        }
                      } else {
                        if (sample[2] <63) {
                          sum[0] += -0.233117476;
                        } else {
                          sum[0] += -0.0768148601;
                        }
                      }
                    } else {
                      if (sample[3] <102) {
                        if (sample[3] <95) {
                          sum[0] += -0.290177196;
                        } else {
                          sum[0] += -0.199509934;
                        }
                      } else {
                        sum[0] += 0.313793093;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          if (sample[0] <253) {
            if (sample[5] <180) {
              if (sample[4] <110) {
                if (sample[3] <112) {
                  if (sample[2] <160) {
                    if (sample[1] <114) {
                      if (sample[1] <112) {
                        if (sample[1] <111) {
                          sum[0] += -0.287630618;
                        } else {
                          sum[0] += -0.145718768;
                        }
                      } else {
                        if (sample[5] <157) {
                          sum[0] += 1.04653454;
                        } else {
                          sum[0] += -0.128730044;
                        }
                      }
                    } else {
                      if (sample[2] <137) {
                        if (sample[3] <111) {
                          sum[0] += 1.542732;
                        } else {
                          sum[0] += 1.02811015;
                        }
                      } else {
                        if (sample[1] <160) {
                          sum[0] += 1.10432887;
                        } else {
                          sum[0] += 0.430769205;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <171) {
                      if (sample[3] <19) {
                        if (sample[1] <126) {
                          sum[0] += -0.2851969;
                        } else {
                          sum[0] += -0.0528301932;
                        }
                      } else {
                        if (sample[3] <29) {
                          sum[0] += 0.93490833;
                        } else {
                          sum[0] += 0.128587812;
                        }
                      }
                    } else {
                      if (sample[4] <101) {
                        if (sample[3] <22) {
                          sum[0] += -0.273644388;
                        } else {
                          sum[0] += 0.222352922;
                        }
                      } else {
                        if (sample[3] <28) {
                          sum[0] += -0.119032763;
                        } else {
                          sum[0] += -0.267243564;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <113) {
                    if (sample[1] <114) {
                      if (sample[2] <95) {
                        if (sample[4] <102) {
                          sum[0] += 0.0580110401;
                        } else {
                          sum[0] += -0.260268629;
                        }
                      } else {
                        if (sample[1] <113) {
                          sum[0] += -0.111158803;
                        } else {
                          sum[0] += 0.115384601;
                        }
                      }
                    } else {
                      if (sample[4] <104) {
                        if (sample[0] <175) {
                          sum[0] += 0.254079878;
                        } else {
                          sum[0] += 0.730515122;
                        }
                      } else {
                        if (sample[1] <120) {
                          sum[0] += -0.0882723853;
                        } else {
                          sum[0] += 0.128922224;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <94) {
                      if (sample[1] <104) {
                        sum[0] += 0.579617798;
                      } else {
                        if (sample[0] <158) {
                          sum[0] += -0.27248323;
                        } else {
                          sum[0] += -0.0889145508;
                        }
                      }
                    } else {
                      if (sample[3] <114) {
                        if (sample[0] <177) {
                          sum[0] += -0.256807208;
                        } else {
                          sum[0] += -0.151079133;
                        }
                      } else {
                        if (sample[2] <96) {
                          sum[0] += -0.202538073;
                        } else {
                          sum[0] += -0.28679651;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[4] <128) {
                  if (sample[2] <165) {
                    if (sample[3] <111) {
                      if (sample[3] <31) {
                        if (sample[3] <26) {
                          sum[0] += 0.405456424;
                        } else {
                          sum[0] += -0.173400179;
                        }
                      } else {
                        if (sample[1] <112) {
                          sum[0] += 0.108629815;
                        } else {
                          sum[0] += 1.2184844;
                        }
                      }
                    } else {
                      if (sample[1] <118) {
                        if (sample[4] <119) {
                          sum[0] += -0.278942019;
                        } else {
                          sum[0] += -0.204812616;
                        }
                      } else {
                        if (sample[0] <177) {
                          sum[0] += 0.705821157;
                        } else {
                          sum[0] += -0.0539707057;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <32) {
                      if (sample[3] <27) {
                        if (sample[3] <14) {
                          sum[0] += -0.290520489;
                        } else {
                          sum[0] += -0.0518960841;
                        }
                      } else {
                        if (sample[2] <170) {
                          sum[0] += -0.2526986;
                        } else {
                          sum[0] += -0.281994373;
                        }
                      }
                    } else {
                      if (sample[1] <103) {
                        sum[0] += -0.272787303;
                      } else {
                        if (sample[4] <113) {
                          sum[0] += -0.242214531;
                        } else {
                          sum[0] += 0.497400314;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[5] <158) {
                    if (sample[1] <88) {
                      if (sample[1] <85) {
                        if (sample[0] <26) {
                          sum[0] += -0.0495575294;
                        } else {
                          sum[0] += -0.28443113;
                        }
                      } else {
                        if (sample[0] <51) {
                          sum[0] += -0.135976881;
                        } else {
                          sum[0] += -0.290137976;
                        }
                      }
                    } else {
                      if (sample[0] <56) {
                        if (sample[1] <107) {
                          sum[0] += 1.52577305;
                        } else {
                          sum[0] += -0.0401146188;
                        }
                      } else {
                        if (sample[3] <23) {
                          sum[0] += 0.398510456;
                        } else {
                          sum[0] += -0.269333452;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <178) {
                      if (sample[5] <163) {
                        if (sample[1] <158) {
                          sum[0] += -0.266166091;
                        } else {
                          sum[0] += 0.850734055;
                        }
                      } else {
                        if (sample[1] <112) {
                          sum[0] += -0.290849388;
                        } else {
                          sum[0] += -0.25837037;
                        }
                      }
                    } else {
                      if (sample[0] <89) {
                        sum[0] += -0.17355372;
                      } else {
                        sum[0] += 1.10526311;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[0] <251) {
                if (sample[4] <110) {
                  if (sample[0] <238) {
                    if (sample[2] <149) {
                      if (sample[3] <111) {
                        if (sample[0] <127) {
                          sum[0] += -0.113590263;
                        } else {
                          sum[0] += 1.48624873;
                        }
                      } else {
                        if (sample[3] <112) {
                          sum[0] += 0.286746949;
                        } else {
                          sum[0] += -0.289276123;
                        }
                      }
                    } else {
                      sum[0] += -0.291312099;
                    }
                  } else {
                    if (sample[1] <170) {
                      sum[0] += -0.287069798;
                    } else {
                      if (sample[1] <172) {
                        sum[0] += 0.552631557;
                      } else {
                        sum[0] += 1.72835135;
                      }
                    }
                  }
                } else {
                  if (sample[1] <146) {
                    if (sample[4] <115) {
                      if (sample[3] <111) {
                        if (sample[2] <107) {
                          sum[0] += 0.854091167;
                        } else {
                          sum[0] += -0.24487333;
                        }
                      } else {
                        if (sample[3] <112) {
                          sum[0] += -0.225015014;
                        } else {
                          sum[0] += -0.280493021;
                        }
                      }
                    } else {
                      if (sample[4] <127) {
                        if (sample[2] <100) {
                          sum[0] += -0.182461634;
                        } else {
                          sum[0] += -0.288164645;
                        }
                      } else {
                        if (sample[3] <115) {
                          sum[0] += -0.290827036;
                        } else {
                          sum[0] += -0.182145715;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <108) {
                      if (sample[1] <153) {
                        if (sample[4] <135) {
                          sum[0] += 0.988408804;
                        } else {
                          sum[0] += 0.0427540131;
                        }
                      } else {
                        if (sample[2] <84) {
                          sum[0] += -0.0726643652;
                        } else {
                          sum[0] += 1.3354063;
                        }
                      }
                    } else {
                      if (sample[2] <109) {
                        if (sample[0] <232) {
                          sum[0] += 0.885892093;
                        } else {
                          sum[0] += -0.274173796;
                        }
                      } else {
                        if (sample[2] <173) {
                          sum[0] += -0.28029871;
                        } else {
                          sum[0] += -0.291110873;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <169) {
                  sum[0] += -0.288769513;
                } else {
                  sum[0] += 1.69194305;
                }
              }
            }
          } else {
            if (sample[1] <154) {
              sum[0] += -0.288225383;
            } else {
              sum[0] += 1.73881853;
            }
          }
        }
      }
    }
  }


  if (sample[2] <8) {
    if (sample[3] <94) {
      if (sample[3] <76) {
        if (sample[3] <68) {
          sum[1] += -0.291048825;
        } else {
          if (sample[1] <52) {
            if (sample[2] <1) {
              if (sample[1] <27) {
                if (sample[0] <9) {
                  sum[1] += -0.264023215;
                } else {
                  sum[1] += 0.267515898;
                }
              } else {
                sum[1] += 1.25241768;
              }
            } else {
              if (sample[0] <20) {
                if (sample[4] <232) {
                  if (sample[0] <19) {
                    sum[1] += -0.285997599;
                  } else {
                    if (sample[1] <43) {
                      sum[1] += 0.0642201751;
                    } else {
                      sum[1] += -0.225806445;
                    }
                  }
                } else {
                  if (sample[1] <41) {
                    if (sample[1] <33) {
                      if (sample[3] <74) {
                        sum[1] += -0.23517786;
                      } else {
                        sum[1] += -0.0445859917;
                      }
                    } else {
                      if (sample[0] <13) {
                        sum[1] += 0.0642201751;
                      } else {
                        sum[1] += 0.288990825;
                      }
                    }
                  } else {
                    sum[1] += -0.242214531;
                  }
                }
              } else {
                if (sample[2] <4) {
                  sum[1] += 0.820689619;
                } else {
                  if (sample[0] <25) {
                    if (sample[4] <230) {
                      if (sample[3] <71) {
                        sum[1] += -5.48990142e-09;
                      } else {
                        sum[1] += -0.260393858;
                      }
                    } else {
                      sum[1] += 0.231404945;
                    }
                  } else {
                    if (sample[4] <225) {
                      if (sample[0] <28) {
                        if (sample[1] <49) {
                          sum[1] += 0.0289256144;
                        } else {
                          sum[1] += 0.328729272;
                        }
                      } else {
                        if (sample[3] <75) {
                          sum[1] += -0.16055046;
                        } else {
                          sum[1] += 0.184210509;
                        }
                      }
                    } else {
                      sum[1] += -0.17355372;
                    }
                  }
                }
              }
            }
          } else {
            if (sample[1] <55) {
              if (sample[2] <1) {
                if (sample[0] <22) {
                  if (sample[0] <19) {
                    if (sample[0] <17) {
                      sum[1] += -0.17355372;
                    } else {
                      sum[1] += 0.184210509;
                    }
                  } else {
                    sum[1] += -0.229257643;
                  }
                } else {
                  if (sample[0] <27) {
                    sum[1] += 0.433884293;
                  } else {
                    sum[1] += 0.0828402266;
                  }
                }
              } else {
                if (sample[0] <19) {
                  if (sample[2] <3) {
                    sum[1] += -0.17355372;
                  } else {
                    sum[1] += 0.0642201751;
                  }
                } else {
                  sum[1] += -0.254804879;
                }
              }
            } else {
              sum[1] += -0.291276813;
            }
          }
        }
      } else {
        if (sample[1] <70) {
          if (sample[1] <41) {
            if (sample[4] <242) {
              if (sample[4] <233) {
                sum[1] += -0.283505142;
              } else {
                if (sample[2] <3) {
                  sum[1] += -0.261954248;
                } else {
                  if (sample[0] <31) {
                    sum[1] += 0.288990825;
                  } else {
                    sum[1] += 0.0642201751;
                  }
                }
              }
            } else {
              if (sample[1] <30) {
                if (sample[1] <24) {
                  if (sample[3] <78) {
                    if (sample[0] <10) {
                      sum[1] += 0.0642201751;
                    } else {
                      sum[1] += -0.0445859917;
                    }
                  } else {
                    if (sample[1] <23) {
                      sum[1] += -0.251430392;
                    } else {
                      sum[1] += -5.48990142e-09;
                    }
                  }
                } else {
                  if (sample[3] <82) {
                    if (sample[0] <17) {
                      sum[1] += 0.144827574;
                    } else {
                      sum[1] += 1.00552487;
                    }
                  } else {
                    if (sample[0] <22) {
                      if (sample[0] <21) {
                        sum[1] += -0.16055046;
                      } else {
                        sum[1] += 0.288990825;
                      }
                    } else {
                      if (sample[5] <27) {
                        sum[1] += -0.0445859917;
                      } else {
                        sum[1] += -0.212707177;
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <1) {
                  sum[1] += 1.42559886;
                } else {
                  if (sample[0] <26) {
                    sum[1] += 1.10526311;
                  } else {
                    if (sample[5] <36) {
                      sum[1] += -0.17355372;
                    } else {
                      if (sample[5] <39) {
                        if (sample[1] <38) {
                          sum[1] += 0.736842096;
                        } else {
                          sum[1] += 0.184210509;
                        }
                      } else {
                        if (sample[1] <39) {
                          sum[1] += -0.193103448;
                        } else {
                          sum[1] += 0.368421048;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[4] <217) {
              if (sample[0] <35) {
                if (sample[0] <30) {
                  sum[1] += -0.0241379365;
                } else {
                  sum[1] += 0.313793093;
                }
              } else {
                sum[1] += -0.225806445;
              }
            } else {
              if (sample[3] <79) {
                if (sample[1] <51) {
                  if (sample[3] <77) {
                    sum[1] += 0.184210509;
                  } else {
                    sum[1] += 1.2221396;
                  }
                } else {
                  if (sample[4] <242) {
                    if (sample[0] <33) {
                      if (sample[0] <32) {
                        sum[1] += 0.513761461;
                      } else {
                        sum[1] += 0.0289256144;
                      }
                    } else {
                      sum[1] += 0.926877439;
                    }
                  } else {
                    if (sample[0] <28) {
                      sum[1] += 0.738532066;
                    } else {
                      if (sample[0] <31) {
                        sum[1] += -0.221951216;
                      } else {
                        if (sample[0] <32) {
                          sum[1] += 0.288990825;
                        } else {
                          sum[1] += -0.16055046;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <68) {
                  if (sample[2] <1) {
                    if (sample[0] <30) {
                      sum[1] += 0.513761461;
                    } else {
                      sum[1] += 1.73037302;
                    }
                  } else {
                    if (sample[1] <46) {
                      if (sample[4] <226) {
                        if (sample[0] <41) {
                          sum[1] += 0.0642201751;
                        } else {
                          sum[1] += -0.207100585;
                        }
                      } else {
                        if (sample[4] <244) {
                          sum[1] += 1.25040781;
                        } else {
                          sum[1] += 0.231404945;
                        }
                      }
                    } else {
                      if (sample[1] <57) {
                        sum[1] += 1.53324163;
                      } else {
                        if (sample[1] <61) {
                          sum[1] += 0.730769157;
                        } else {
                          sum[1] += 1.30886424;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <51) {
                    sum[1] += -5.48990142e-09;
                  } else {
                    sum[1] += 0.433884293;
                  }
                }
              }
            }
          }
        } else {
          if (sample[1] <73) {
            if (sample[0] <54) {
              if (sample[0] <48) {
                if (sample[0] <42) {
                  sum[1] += -0.225806445;
                } else {
                  if (sample[0] <45) {
                    if (sample[2] <3) {
                      sum[1] += -5.48990142e-09;
                    } else {
                      sum[1] += 0.368421048;
                    }
                  } else {
                    if (sample[3] <79) {
                      sum[1] += -0.212707177;
                    } else {
                      if (sample[0] <46) {
                        sum[1] += -0.17355372;
                      } else {
                        if (sample[1] <71) {
                          sum[1] += 0.288990825;
                        } else {
                          sum[1] += 0.0642201751;
                        }
                      }
                    }
                  }
                }
              } else {
                sum[1] += -0.237735853;
              }
            } else {
              sum[1] += 0.973170698;
            }
          } else {
            if (sample[1] <76) {
              if (sample[0] <43) {
                if (sample[0] <42) {
                  sum[1] += -0.237735853;
                } else {
                  if (sample[2] <6) {
                    sum[1] += 0.231404945;
                  } else {
                    sum[1] += -0.0241379365;
                  }
                }
              } else {
                if (sample[0] <59) {
                  if (sample[0] <46) {
                    if (sample[1] <74) {
                      sum[1] += 0.231404945;
                    } else {
                      sum[1] += -0.264650285;
                    }
                  } else {
                    sum[1] += -0.274966717;
                  }
                } else {
                  if (sample[3] <90) {
                    sum[1] += 0.0642201751;
                  } else {
                    sum[1] += -0.16055046;
                  }
                }
              }
            } else {
              if (sample[3] <93) {
                sum[1] += -0.290996194;
              } else {
                if (sample[0] <117) {
                  sum[1] += 0.6517241;
                } else {
                  sum[1] += -0.285466373;
                }
              }
            }
          }
        }
      }
    } else {
      if (sample[1] <42) {
        if (sample[1] <37) {
          if (sample[1] <32) {
            if (sample[2] <2) {
              if (sample[1] <28) {
                if (sample[3] <112) {
                  if (sample[4] <239) {
                    sum[1] += 0.0642201751;
                  } else {
                    if (sample[0] <41) {
                      if (sample[1] <26) {
                        sum[1] += -0.275180608;
                      } else {
                        if (sample[0] <35) {
                          sum[1] += 0.0642201751;
                        } else {
                          sum[1] += -0.193103448;
                        }
                      }
                    } else {
                      if (sample[0] <43) {
                        sum[1] += 0.368421048;
                      } else {
                        sum[1] += -0.264023215;
                      }
                    }
                  }
                } else {
                  sum[1] += 0.0642201751;
                }
              } else {
                if (sample[2] <1) {
                  if (sample[0] <42) {
                    if (sample[0] <41) {
                      sum[1] += -5.48990142e-09;
                    } else {
                      sum[1] += 0.433884293;
                    }
                  } else {
                    if (sample[0] <49) {
                      sum[1] += -0.193103448;
                    } else {
                      sum[1] += 0.267515898;
                    }
                  }
                } else {
                  sum[1] += -0.225806445;
                }
              }
            } else {
              sum[1] += -0.286927313;
            }
          } else {
            if (sample[2] <1) {
              if (sample[1] <34) {
                sum[1] += 0.479253083;
              } else {
                sum[1] += 1.11418676;
              }
            } else {
              if (sample[0] <75) {
                if (sample[0] <39) {
                  sum[1] += 0.0289256144;
                } else {
                  if (sample[0] <72) {
                    sum[1] += -0.269688368;
                  } else {
                    if (sample[2] <4) {
                      sum[1] += 0.0289256144;
                    } else {
                      sum[1] += -0.16055046;
                    }
                  }
                }
              } else {
                if (sample[2] <4) {
                  sum[1] += 1.10526311;
                } else {
                  if (sample[0] <79) {
                    sum[1] += 0.0642201751;
                  } else {
                    sum[1] += -0.207100585;
                  }
                }
              }
            }
          }
        } else {
          if (sample[4] <248) {
            if (sample[0] <73) {
              if (sample[2] <3) {
                if (sample[0] <55) {
                  sum[1] += 0.184210509;
                } else {
                  sum[1] += -0.193103448;
                }
              } else {
                if (sample[1] <38) {
                  sum[1] += -0.0241379365;
                } else {
                  sum[1] += -0.276013136;
                }
              }
            } else {
              if (sample[4] <239) {
                sum[1] += 0.288990825;
              } else {
                sum[1] += 1.37554574;
              }
            }
          } else {
            if (sample[2] <1) {
              if (sample[3] <99) {
                if (sample[0] <52) {
                  sum[1] += 0.963302732;
                } else {
                  sum[1] += 0.0642201751;
                }
              } else {
                sum[1] += 1.66399193;
              }
            } else {
              sum[1] += 0.552631557;
            }
          }
        }
      } else {
        if (sample[4] <245) {
          if (sample[1] <50) {
            if (sample[4] <234) {
              if (sample[3] <98) {
                if (sample[4] <226) {
                  sum[1] += -0.207100585;
                } else {
                  if (sample[2] <7) {
                    if (sample[4] <228) {
                      sum[1] += -0.17355372;
                    } else {
                      if (sample[3] <97) {
                        sum[1] += 0.46408838;
                      } else {
                        sum[1] += -0.16055046;
                      }
                    }
                  } else {
                    sum[1] += 0.6517241;
                  }
                }
              } else {
                if (sample[4] <233) {
                  if (sample[0] <69) {
                    if (sample[0] <63) {
                      if (sample[0] <61) {
                        sum[1] += -0.232365146;
                      } else {
                        sum[1] += 0.144827574;
                      }
                    } else {
                      sum[1] += -0.258660495;
                    }
                  } else {
                    if (sample[0] <75) {
                      sum[1] += 0.288990825;
                    } else {
                      if (sample[3] <103) {
                        sum[1] += 0.0289256144;
                      } else {
                        sum[1] += -0.200636938;
                      }
                    }
                  }
                } else {
                  sum[1] += 0.184210509;
                }
              }
            } else {
              if (sample[0] <86) {
                if (sample[3] <98) {
                  if (sample[0] <61) {
                    if (sample[0] <57) {
                      sum[1] += 0.838842928;
                    } else {
                      sum[1] += -0.17355372;
                    }
                  } else {
                    sum[1] += 1.44896019;
                  }
                } else {
                  if (sample[1] <49) {
                    if (sample[3] <99) {
                      if (sample[0] <61) {
                        sum[1] += -0.16055046;
                      } else {
                        sum[1] += 0.6517241;
                      }
                    } else {
                      if (sample[4] <243) {
                        if (sample[1] <44) {
                          sum[1] += -0.0773480684;
                        } else {
                          sum[1] += -0.25207755;
                        }
                      } else {
                        if (sample[0] <65) {
                          sum[1] += -0.184210524;
                        } else {
                          sum[1] += 0.231404945;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <238) {
                      sum[1] += 0.144827574;
                    } else {
                      sum[1] += 0.736842096;
                    }
                  }
                }
              } else {
                sum[1] += 1.52010715;
              }
            }
          } else {
            if (sample[3] <101) {
              if (sample[0] <116) {
                if (sample[2] <7) {
                  if (sample[1] <58) {
                    if (sample[3] <100) {
                      if (sample[0] <71) {
                        if (sample[0] <60) {
                          sum[1] += 0.734806597;
                        } else {
                          sum[1] += 1.68311298;
                        }
                      } else {
                        if (sample[4] <239) {
                          sum[1] += 1.29783261;
                        } else {
                          sum[1] += 1.63162267;
                        }
                      }
                    } else {
                      if (sample[0] <77) {
                        if (sample[2] <6) {
                          sum[1] += 0.423566848;
                        } else {
                          sum[1] += -0.237735853;
                        }
                      } else {
                        sum[1] += 1.14161062;
                      }
                    }
                  } else {
                    sum[1] += 1.73330963;
                  }
                } else {
                  if (sample[0] <61) {
                    sum[1] += 0.375609726;
                  } else {
                    if (sample[0] <64) {
                      sum[1] += 1.6549046;
                    } else {
                      if (sample[1] <55) {
                        if (sample[0] <71) {
                          sum[1] += 0.656923056;
                        } else {
                          sum[1] += -0.132241815;
                        }
                      } else {
                        if (sample[0] <65) {
                          sum[1] += -0.16055046;
                        } else {
                          sum[1] += 1.43134665;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <102) {
                  if (sample[3] <99) {
                    if (sample[2] <7) {
                      if (sample[1] <99) {
                        sum[1] += 0.670984447;
                      } else {
                        sum[1] += 0.0642201751;
                      }
                    } else {
                      sum[1] += 1.14088392;
                    }
                  } else {
                    if (sample[3] <100) {
                      sum[1] += -0.0241379365;
                    } else {
                      sum[1] += 0.738532066;
                    }
                  }
                } else {
                  if (sample[4] <243) {
                    if (sample[0] <137) {
                      sum[1] += 0.144827574;
                    } else {
                      sum[1] += -0.193103448;
                    }
                  } else {
                    if (sample[0] <133) {
                      sum[1] += 0.267515898;
                    } else {
                      sum[1] += 0.670984447;
                    }
                  }
                }
              }
            } else {
              if (sample[0] <90) {
                if (sample[2] <5) {
                  if (sample[0] <89) {
                    sum[1] += 1.35014832;
                  } else {
                    sum[1] += 0.0289256144;
                  }
                } else {
                  if (sample[1] <58) {
                    if (sample[0] <86) {
                      if (sample[4] <234) {
                        if (sample[1] <55) {
                          sum[1] += -0.258660495;
                        } else {
                          sum[1] += -0.0241379365;
                        }
                      } else {
                        if (sample[1] <52) {
                          sum[1] += -0.103857569;
                        } else {
                          sum[1] += 0.42956239;
                        }
                      }
                    } else {
                      if (sample[1] <56) {
                        sum[1] += -0.249729723;
                      } else {
                        if (sample[0] <87) {
                          sum[1] += -0.193103448;
                        } else {
                          sum[1] += 0.202166051;
                        }
                      }
                    }
                  } else {
                    sum[1] += 1.33170724;
                  }
                }
              } else {
                if (sample[1] <79) {
                  sum[1] += 1.64441085;
                } else {
                  if (sample[4] <244) {
                    sum[1] += 0.839067638;
                  } else {
                    sum[1] += 1.54977703;
                  }
                }
              }
            }
          }
        } else {
          if (sample[3] <96) {
            if (sample[1] <73) {
              if (sample[4] <248) {
                sum[1] += 0.579617798;
              } else {
                sum[1] += 1.7132622;
              }
            } else {
              if (sample[1] <101) {
                if (sample[0] <95) {
                  sum[1] += 0.412663728;
                } else {
                  sum[1] += 1.00638974;
                }
              } else {
                if (sample[3] <95) {
                  sum[1] += -0.232365146;
                } else {
                  if (sample[0] <130) {
                    sum[1] += -0.0241379365;
                  } else {
                    sum[1] += 0.552631557;
                  }
                }
              }
            }
          } else {
            if (sample[0] <58) {
              sum[1] += 0.517751455;
            } else {
              sum[1] += 1.74764526;
            }
          }
        }
      }
    }
  } else {
    if (sample[2] <17) {
      if (sample[3] <93) {
        if (sample[3] <92) {
          if (sample[4] <209) {
            if (sample[3] <91) {
              if (sample[0] <26) {
                sum[1] += -0.285379022;
              } else {
                if (sample[2] <14) {
                  if (sample[1] <48) {
                    if (sample[4] <189) {
                      if (sample[3] <77) {
                        if (sample[1] <46) {
                          sum[1] += -0.217616573;
                        } else {
                          sum[1] += 0.0642201751;
                        }
                      } else {
                        sum[1] += -0.287968934;
                      }
                    } else {
                      if (sample[3] <80) {
                        if (sample[4] <194) {
                          sum[1] += 0.513761461;
                        } else {
                          sum[1] += -0.138339922;
                        }
                      } else {
                        if (sample[4] <200) {
                          sum[1] += -0.217077315;
                        } else {
                          sum[1] += 0.0277227629;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <75) {
                      if (sample[1] <55) {
                        if (sample[0] <30) {
                          sum[1] += -0.103920437;
                        } else {
                          sum[1] += 0.358725727;
                        }
                      } else {
                        sum[1] += -0.282784343;
                      }
                    } else {
                      if (sample[1] <55) {
                        if (sample[4] <199) {
                          sum[1] += 0.568613827;
                        } else {
                          sum[1] += 1.02320933;
                        }
                      } else {
                        if (sample[0] <58) {
                          sum[1] += -0.130529061;
                        } else {
                          sum[1] += 0.86691308;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[1] <70) {
                    if (sample[0] <56) {
                      if (sample[4] <182) {
                        if (sample[3] <71) {
                          sum[1] += -0.0249406248;
                        } else {
                          sum[1] += -0.267397583;
                        }
                      } else {
                        if (sample[3] <77) {
                          sum[1] += -0.156820446;
                        } else {
                          sum[1] += 0.0318334028;
                        }
                      }
                    } else {
                      if (sample[4] <189) {
                        sum[1] += 0.849840224;
                      } else {
                        if (sample[3] <88) {
                          sum[1] += -0.221951216;
                        } else {
                          sum[1] += 0.149643689;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <82) {
                      sum[1] += -0.290202647;
                    } else {
                      sum[1] += 0.0642201751;
                    }
                  }
                }
              }
            } else {
              if (sample[1] <57) {
                if (sample[4] <205) {
                  if (sample[0] <49) {
                    sum[1] += -0.271509171;
                  } else {
                    if (sample[1] <54) {
                      if (sample[4] <193) {
                        if (sample[4] <185) {
                          sum[1] += -0.0906735808;
                        } else {
                          sum[1] += 0.313793093;
                        }
                      } else {
                        sum[1] += -0.17355372;
                      }
                    } else {
                      sum[1] += -0.240072206;
                    }
                  }
                } else {
                  sum[1] += 1.26855886;
                }
              } else {
                if (sample[0] <63) {
                  sum[1] += 1.40811503;
                } else {
                  if (sample[4] <196) {
                    sum[1] += 0.952662706;
                  } else {
                    sum[1] += -0.0241379365;
                  }
                }
              }
            }
          } else {
            if (sample[4] <218) {
              if (sample[2] <10) {
                if (sample[0] <31) {
                  if (sample[0] <27) {
                    sum[1] += -0.288659781;
                  } else {
                    if (sample[4] <215) {
                      if (sample[1] <50) {
                        sum[1] += -0.200636938;
                      } else {
                        if (sample[1] <52) {
                          sum[1] += 0.267515898;
                        } else {
                          sum[1] += -0.0906735808;
                        }
                      }
                    } else {
                      sum[1] += -0.247434437;
                    }
                  }
                } else {
                  if (sample[1] <48) {
                    if (sample[3] <90) {
                      if (sample[1] <46) {
                        sum[1] += 0.0289256144;
                      } else {
                        sum[1] += 0.482758611;
                      }
                    } else {
                      sum[1] += -0.184210524;
                    }
                  } else {
                    if (sample[0] <34) {
                      if (sample[0] <32) {
                        sum[1] += 0.768545926;
                      } else {
                        sum[1] += -0.062130183;
                      }
                    } else {
                      if (sample[5] <54) {
                        sum[1] += 1.38489199;
                      } else {
                        if (sample[4] <215) {
                          sum[1] += -5.48990142e-09;
                        } else {
                          sum[1] += 0.924870431;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <12) {
                  if (sample[0] <61) {
                    if (sample[3] <79) {
                      sum[1] += -0.285089731;
                    } else {
                      if (sample[1] <58) {
                        if (sample[1] <57) {
                          sum[1] += 0.184210509;
                        } else {
                          sum[1] += -5.48990142e-09;
                        }
                      } else {
                        if (sample[0] <51) {
                          sum[1] += 0.0289256144;
                        } else {
                          sum[1] += -0.232365146;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <61) {
                      sum[1] += -5.48990142e-09;
                    } else {
                      sum[1] += 0.870165706;
                    }
                  }
                } else {
                  if (sample[1] <73) {
                    if (sample[0] <52) {
                      if (sample[3] <80) {
                        sum[1] += -0.284705311;
                      } else {
                        sum[1] += -0.0906735808;
                      }
                    } else {
                      sum[1] += 0.433884293;
                    }
                  } else {
                    sum[1] += -0.290856719;
                  }
                }
              }
            } else {
              if (sample[3] <53) {
                sum[1] += -0.291630864;
              } else {
                if (sample[5] <76) {
                  if (sample[3] <81) {
                    sum[1] += -0.282090098;
                  } else {
                    if (sample[1] <62) {
                      if (sample[4] <221) {
                        sum[1] += 0.288990825;
                      } else {
                        sum[1] += 0.0289256144;
                      }
                    } else {
                      if (sample[0] <68) {
                        sum[1] += 1.08466446;
                      } else {
                        sum[1] += 0.0642201751;
                      }
                    }
                  }
                } else {
                  sum[1] += -0.290011168;
                }
              }
            }
          }
        } else {
          if (sample[0] <73) {
            if (sample[0] <60) {
              if (sample[4] <207) {
                if (sample[4] <194) {
                  sum[1] += -0.279524207;
                } else {
                  if (sample[2] <13) {
                    if (sample[0] <46) {
                      sum[1] += 0.0642201751;
                    } else {
                      sum[1] += -0.244186044;
                    }
                  } else {
                    sum[1] += 0.184210509;
                  }
                }
              } else {
                if (sample[0] <56) {
                  sum[1] += 1.08921158;
                } else {
                  if (sample[4] <216) {
                    sum[1] += 0.368421048;
                  } else {
                    sum[1] += 0.0289256144;
                  }
                }
              }
            } else {
              if (sample[0] <67) {
                if (sample[4] <222) {
                  sum[1] += 1.69852567;
                } else {
                  sum[1] += 0.0642201751;
                }
              } else {
                sum[1] += 0.423566848;
              }
            }
          } else {
            if (sample[1] <109) {
              if (sample[0] <115) {
                if (sample[0] <95) {
                  sum[1] += 0.0642201751;
                } else {
                  if (sample[4] <220) {
                    sum[1] += 0.0289256144;
                  } else {
                    sum[1] += -0.211018711;
                  }
                }
              } else {
                sum[1] += 0.144827574;
              }
            } else {
              sum[1] += -0.290024132;
            }
          }
        }
      } else {
        if (sample[1] <54) {
          if (sample[3] <97) {
            if (sample[4] <208) {
              if (sample[4] <196) {
                if (sample[1] <53) {
                  if (sample[4] <195) {
                    sum[1] += -0.285591215;
                  } else {
                    if (sample[0] <52) {
                      sum[1] += 0.0642201751;
                    } else {
                      sum[1] += -0.207100585;
                    }
                  }
                } else {
                  if (sample[2] <16) {
                    if (sample[0] <61) {
                      sum[1] += 0.288990825;
                    } else {
                      sum[1] += 0.0642201751;
                    }
                  } else {
                    sum[1] += -0.246006384;
                  }
                }
              } else {
                if (sample[1] <52) {
                  if (sample[2] <9) {
                    sum[1] += 0.267515898;
                  } else {
                    if (sample[1] <50) {
                      if (sample[4] <198) {
                        if (sample[1] <46) {
                          sum[1] += -0.184210524;
                        } else {
                          sum[1] += 0.0289256144;
                        }
                      } else {
                        sum[1] += -0.274173796;
                      }
                    } else {
                      if (sample[2] <13) {
                        if (sample[0] <59) {
                          sum[1] += 0.290155411;
                        } else {
                          sum[1] += -0.062130183;
                        }
                      } else {
                        if (sample[0] <61) {
                          sum[1] += -0.187667564;
                        } else {
                          sum[1] += 0.0289256144;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <13) {
                    if (sample[3] <95) {
                      sum[1] += -0.240072206;
                    } else {
                      if (sample[0] <61) {
                        sum[1] += 0.144827574;
                      } else {
                        sum[1] += 0.0289256144;
                      }
                    }
                  } else {
                    if (sample[0] <61) {
                      if (sample[3] <95) {
                        sum[1] += 0.227810636;
                      } else {
                        sum[1] += 0.536741197;
                      }
                    } else {
                      if (sample[0] <62) {
                        if (sample[2] <14) {
                          sum[1] += 0.111464955;
                        } else {
                          sum[1] += -0.0241379365;
                        }
                      } else {
                        sum[1] += -0.207100585;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[0] <60) {
                if (sample[4] <217) {
                  if (sample[1] <50) {
                    if (sample[2] <9) {
                      sum[1] += -0.0445859917;
                    } else {
                      sum[1] += -0.255667508;
                    }
                  } else {
                    if (sample[4] <215) {
                      if (sample[0] <58) {
                        sum[1] += 0.0642201751;
                      } else {
                        sum[1] += 0.328729272;
                      }
                    } else {
                      sum[1] += -0.193103448;
                    }
                  }
                } else {
                  if (sample[1] <50) {
                    sum[1] += 0.144827574;
                  } else {
                    sum[1] += 1.10526311;
                  }
                }
              } else {
                if (sample[0] <62) {
                  if (sample[0] <61) {
                    if (sample[1] <52) {
                      if (sample[2] <11) {
                        if (sample[2] <10) {
                          sum[1] += 0.644404292;
                        } else {
                          sum[1] += 1.2151767;
                        }
                      } else {
                        sum[1] += 0.375609726;
                      }
                    } else {
                      sum[1] += 1.38238132;
                    }
                  } else {
                    sum[1] += 1.65862548;
                  }
                } else {
                  if (sample[2] <9) {
                    sum[1] += 0.820689619;
                  } else {
                    if (sample[1] <53) {
                      if (sample[4] <215) {
                        sum[1] += 0.0580110401;
                      } else {
                        sum[1] += -0.212707177;
                      }
                    } else {
                      sum[1] += 0.267515898;
                    }
                  }
                }
              }
            }
          } else {
            if (sample[0] <90) {
              if (sample[4] <221) {
                if (sample[0] <86) {
                  if (sample[0] <61) {
                    if (sample[1] <49) {
                      sum[1] += -0.289513111;
                    } else {
                      if (sample[2] <16) {
                        sum[1] += -0.240072206;
                      } else {
                        sum[1] += 0.0642201751;
                      }
                    }
                  } else {
                    if (sample[0] <63) {
                      if (sample[4] <206) {
                        if (sample[1] <47) {
                          sum[1] += -0.0705289692;
                        } else {
                          sum[1] += -0.275590539;
                        }
                      } else {
                        if (sample[1] <50) {
                          sum[1] += -0.0847201273;
                        } else {
                          sum[1] += 0.22580643;
                        }
                      }
                    } else {
                      if (sample[1] <53) {
                        sum[1] += -0.259233981;
                      } else {
                        if (sample[4] <214) {
                          sum[1] += -0.271509171;
                        } else {
                          sum[1] += -0.0495575294;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[1] <51) {
                    sum[1] += 0.482758611;
                  } else {
                    sum[1] += -0.200636938;
                  }
                }
              } else {
                if (sample[3] <99) {
                  if (sample[4] <223) {
                    sum[1] += 1.05813944;
                  } else {
                    sum[1] += 0.231404945;
                  }
                } else {
                  if (sample[0] <84) {
                    if (sample[0] <72) {
                      if (sample[0] <71) {
                        if (sample[3] <100) {
                          sum[1] += -7.27731075e-09;
                        } else {
                          sum[1] += -0.265822768;
                        }
                      } else {
                        if (sample[1] <51) {
                          sum[1] += 0.513761461;
                        } else {
                          sum[1] += -5.48990142e-09;
                        }
                      }
                    } else {
                      if (sample[4] <228) {
                        sum[1] += -0.272771537;
                      } else {
                        if (sample[0] <77) {
                          sum[1] += -0.0290456489;
                        } else {
                          sum[1] += -0.249258161;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <51) {
                      if (sample[2] <11) {
                        sum[1] += 0.552631557;
                      } else {
                        sum[1] += -0.16055046;
                      }
                    } else {
                      if (sample[4] <226) {
                        sum[1] += -0.0445859917;
                      } else {
                        sum[1] += -0.23517786;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[4] <218) {
                sum[1] += 0.433884293;
              } else {
                sum[1] += 1.55730331;
              }
            }
          }
        } else {
          if (sample[1] <108) {
            if (sample[1] <57) {
              if (sample[3] <98) {
                if (sample[2] <15) {
                  if (sample[0] <62) {
                    if (sample[0] <59) {
                      sum[1] += -0.0241379365;
                    } else {
                      sum[1] += 1.65056229;
                    }
                  } else {
                    if (sample[0] <67) {
                      if (sample[2] <12) {
                        if (sample[4] <215) {
                          sum[1] += 1.36956513;
                        } else {
                          sum[1] += 0.9174757;
                        }
                      } else {
                        if (sample[3] <96) {
                          sum[1] += 0.745901585;
                        } else {
                          sum[1] += 0.0193905737;
                        }
                      }
                    } else {
                      if (sample[0] <70) {
                        sum[1] += 1.5927341;
                      } else {
                        if (sample[2] <9) {
                          sum[1] += 1.09268284;
                        } else {
                          sum[1] += 0.0726140961;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <94) {
                    if (sample[4] <188) {
                      sum[1] += 0.163212419;
                    } else {
                      if (sample[4] <191) {
                        sum[1] += 0.579617798;
                      } else {
                        sum[1] += 1.38873982;
                      }
                    }
                  } else {
                    if (sample[4] <199) {
                      if (sample[3] <95) {
                        if (sample[4] <192) {
                          sum[1] += 0.0289256144;
                        } else {
                          sum[1] += 0.552631557;
                        }
                      } else {
                        if (sample[1] <55) {
                          sum[1] += -0.246006384;
                        } else {
                          sum[1] += -0.0249406248;
                        }
                      }
                    } else {
                      sum[1] += 0.989655137;
                    }
                  }
                }
              } else {
                if (sample[2] <9) {
                  if (sample[3] <100) {
                    if (sample[1] <56) {
                      if (sample[0] <74) {
                        sum[1] += 1.09268284;
                      } else {
                        if (sample[0] <76) {
                          sum[1] += 0.0642201751;
                        } else {
                          sum[1] += 0.433884293;
                        }
                      }
                    } else {
                      sum[1] += 1.54360747;
                    }
                  } else {
                    if (sample[1] <56) {
                      if (sample[0] <78) {
                        sum[1] += 0.368421048;
                      } else {
                        if (sample[0] <88) {
                          sum[1] += -0.242214531;
                        } else {
                          sum[1] += 0.288990825;
                        }
                      }
                    } else {
                      sum[1] += 0.517751455;
                    }
                  }
                } else {
                  if (sample[0] <73) {
                    if (sample[0] <72) {
                      if (sample[0] <70) {
                        if (sample[2] <14) {
                          sum[1] += 1.0545851;
                        } else {
                          sum[1] += -0.212707177;
                        }
                      } else {
                        if (sample[1] <56) {
                          sum[1] += -0.115384616;
                        } else {
                          sum[1] += 0.288990825;
                        }
                      }
                    } else {
                      sum[1] += 0.890701413;
                    }
                  } else {
                    if (sample[0] <94) {
                      if (sample[4] <209) {
                        if (sample[2] <15) {
                          sum[1] += 0.372781038;
                        } else {
                          sum[1] += -0.0141987903;
                        }
                      } else {
                        if (sample[1] <56) {
                          sum[1] += -0.20240964;
                        } else {
                          sum[1] += -0.0200957004;
                        }
                      }
                    } else {
                      sum[1] += 1.04132223;
                    }
                  }
                }
              }
            } else {
              if (sample[1] <75) {
                if (sample[0] <66) {
                  if (sample[4] <212) {
                    if (sample[4] <200) {
                      if (sample[4] <199) {
                        sum[1] += 1.2910074;
                      } else {
                        sum[1] += -0.16055046;
                      }
                    } else {
                      sum[1] += 1.63567221;
                    }
                  } else {
                    if (sample[1] <58) {
                      sum[1] += 0.580912828;
                    } else {
                      if (sample[2] <10) {
                        sum[1] += 0.0642201751;
                      } else {
                        sum[1] += -0.0241379365;
                      }
                    }
                  }
                } else {
                  if (sample[1] <58) {
                    if (sample[0] <79) {
                      sum[1] += 1.65637219;
                    } else {
                      if (sample[4] <228) {
                        if (sample[0] <83) {
                          sum[1] += 0.224528283;
                        } else {
                          sum[1] += -0.232365146;
                        }
                      } else {
                        sum[1] += 0.890909016;
                      }
                    }
                  } else {
                    sum[1] += 1.71889377;
                  }
                }
              } else {
                if (sample[3] <104) {
                  if (sample[0] <99) {
                    if (sample[0] <91) {
                      if (sample[0] <88) {
                        sum[1] += 0.0289256144;
                      } else {
                        sum[1] += -0.17355372;
                      }
                    } else {
                      if (sample[2] <11) {
                        sum[1] += 0.0289256144;
                      } else {
                        sum[1] += 0.513761461;
                      }
                    }
                  } else {
                    if (sample[0] <113) {
                      if (sample[4] <233) {
                        if (sample[3] <94) {
                          sum[1] += 0.288990825;
                        } else {
                          sum[1] += 1.61740208;
                        }
                      } else {
                        if (sample[1] <78) {
                          sum[1] += 0.921052575;
                        } else {
                          sum[1] += 0.338709652;
                        }
                      }
                    } else {
                      if (sample[1] <77) {
                        if (sample[4] <229) {
                          sum[1] += 0.0803443193;
                        } else {
                          sum[1] += 1.09268284;
                        }
                      } else {
                        if (sample[1] <102) {
                          sum[1] += 1.22616398;
                        } else {
                          sum[1] += 0.750712991;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <131) {
                    sum[1] += 0.513761461;
                  } else {
                    sum[1] += 1.70608664;
                  }
                }
              }
            }
          } else {
            if (sample[0] <165) {
              if (sample[0] <151) {
                if (sample[3] <94) {
                  sum[1] += -0.27303502;
                } else {
                  if (sample[1] <110) {
                    if (sample[0] <125) {
                      sum[1] += -0.184210524;
                    } else {
                      if (sample[0] <131) {
                        sum[1] += 0.738532066;
                      } else {
                        sum[1] += 0.184210509;
                      }
                    }
                  } else {
                    if (sample[4] <226) {
                      sum[1] += 0.144827574;
                    } else {
                      if (sample[0] <149) {
                        if (sample[1] <111) {
                          sum[1] += 0.0642201751;
                        } else {
                          sum[1] += -0.22047244;
                        }
                      } else {
                        sum[1] += 0.0580110401;
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <109) {
                  sum[1] += -0.0241379365;
                } else {
                  sum[1] += 0.596862197;
                }
              }
            } else {
              sum[1] += 1.67535532;
            }
          }
        }
      }
    } else {
      if (sample[2] <48) {
        if (sample[3] <94) {
          if (sample[3] <87) {
            if (sample[3] <57) {
              if (sample[1] <56) {
                sum[1] += -0.291592091;
              } else {
                if (sample[2] <41) {
                  if (sample[4] <192) {
                    if (sample[0] <21) {
                      if (sample[4] <165) {
                        if (sample[2] <33) {
                          sum[1] += 0.46408838;
                        } else {
                          sum[1] += -0.199524939;
                        }
                      } else {
                        if (sample[2] <32) {
                          sum[1] += -0.278201997;
                        } else {
                          sum[1] += -0.213999689;
                        }
                      }
                    } else {
                      if (sample[2] <34) {
                        if (sample[0] <27) {
                          sum[1] += -0.255687267;
                        } else {
                          sum[1] += 0.0371681303;
                        }
                      } else {
                        if (sample[1] <63) {
                          sum[1] += -0.283301383;
                        } else {
                          sum[1] += -0.241893485;
                        }
                      }
                    }
                  } else {
                    sum[1] += -0.291431487;
                  }
                } else {
                  sum[1] += -0.288656354;
                }
              }
            } else {
              if (sample[1] <74) {
                if (sample[0] <57) {
                  if (sample[4] <137) {
                    if (sample[1] <59) {
                      if (sample[1] <54) {
                        sum[1] += -0.289857984;
                      } else {
                        if (sample[0] <28) {
                          sum[1] += -0.0573770553;
                        } else {
                          sum[1] += -0.282789767;
                        }
                      }
                    } else {
                      if (sample[2] <38) {
                        if (sample[1] <64) {
                          sum[1] += -0.19058761;
                        } else {
                          sum[1] += -0.258110613;
                        }
                      } else {
                        if (sample[4] <123) {
                          sum[1] += -0.276097625;
                        } else {
                          sum[1] += -5.48990142e-09;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <50) {
                      sum[1] += -0.287074029;
                    } else {
                      if (sample[1] <67) {
                        if (sample[0] <22) {
                          sum[1] += -0.271844655;
                        } else {
                          sum[1] += -0.181943312;
                        }
                      } else {
                        if (sample[3] <82) {
                          sum[1] += -0.287973374;
                        } else {
                          sum[1] += -0.0906735808;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <36) {
                    if (sample[1] <65) {
                      if (sample[0] <59) {
                        if (sample[2] <34) {
                          sum[1] += 0.648362994;
                        } else {
                          sum[1] += 0.0252707507;
                        }
                      } else {
                        if (sample[0] <60) {
                          sum[1] += -0.229257643;
                        } else {
                          sum[1] += 0.0289256144;
                        }
                      }
                    } else {
                      if (sample[4] <174) {
                        if (sample[0] <61) {
                          sum[1] += -0.231415763;
                        } else {
                          sum[1] += -0.0293737967;
                        }
                      } else {
                        if (sample[1] <67) {
                          sum[1] += -0.16055046;
                        } else {
                          sum[1] += 1.05181348;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <127) {
                      if (sample[1] <67) {
                        if (sample[4] <100) {
                          sum[1] += -0.276227891;
                        } else {
                          sum[1] += -0.166890532;
                        }
                      } else {
                        if (sample[2] <37) {
                          sum[1] += -0.0563002713;
                        } else {
                          sum[1] += -0.218894139;
                        }
                      }
                    } else {
                      sum[1] += 0.313793093;
                    }
                  }
                }
              } else {
                if (sample[4] <122) {
                  if (sample[0] <72) {
                    sum[1] += -0.277100503;
                  } else {
                    if (sample[4] <121) {
                      if (sample[2] <43) {
                        sum[1] += -0.0773480684;
                      } else {
                        if (sample[4] <111) {
                          sum[1] += -0.153172866;
                        } else {
                          sum[1] += -0.274427027;
                        }
                      }
                    } else {
                      sum[1] += 0.0289256144;
                    }
                  }
                } else {
                  sum[1] += -0.290681332;
                }
              }
            }
          } else {
            if (sample[1] <64) {
              if (sample[4] <147) {
                if (sample[4] <134) {
                  if (sample[4] <121) {
                    if (sample[1] <61) {
                      if (sample[2] <46) {
                        sum[1] += -0.288602412;
                      } else {
                        if (sample[3] <88) {
                          sum[1] += -0.0415019803;
                        } else {
                          sum[1] += -0.25262183;
                        }
                      }
                    } else {
                      if (sample[2] <35) {
                        if (sample[3] <89) {
                          sum[1] += 0.193370149;
                        } else {
                          sum[1] += -0.167731628;
                        }
                      } else {
                        if (sample[0] <60) {
                          sum[1] += -0.163286;
                        } else {
                          sum[1] += -0.260980576;
                        }
                      }
                    }
                  } else {
                    if (sample[5] <60) {
                      if (sample[0] <57) {
                        sum[1] += -0.284236729;
                      } else {
                        if (sample[4] <122) {
                          sum[1] += -0.0445859917;
                        } else {
                          sum[1] += -0.216634423;
                        }
                      }
                    } else {
                      if (sample[0] <59) {
                        if (sample[1] <61) {
                          sum[1] += 0.288990825;
                        } else {
                          sum[1] += 1.14905655;
                        }
                      } else {
                        if (sample[4] <126) {
                          sum[1] += 0.270297021;
                        } else {
                          sum[1] += -0.0500650257;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <58) {
                    sum[1] += -0.275879264;
                  } else {
                    if (sample[0] <59) {
                      if (sample[1] <56) {
                        sum[1] += -5.48990142e-09;
                      } else {
                        if (sample[1] <62) {
                          sum[1] += 1.12366223;
                        } else {
                          sum[1] += 0.0289256144;
                        }
                      }
                    } else {
                      if (sample[3] <92) {
                        if (sample[1] <61) {
                          sum[1] += 0.0670926422;
                        } else {
                          sum[1] += 0.681208014;
                        }
                      } else {
                        if (sample[4] <140) {
                          sum[1] += -0.250716329;
                        } else {
                          sum[1] += 0.145530134;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[0] <58) {
                  if (sample[1] <59) {
                    if (sample[5] <53) {
                      sum[1] += -0.282812148;
                    } else {
                      if (sample[0] <52) {
                        sum[1] += 0.184210509;
                      } else {
                        if (sample[1] <54) {
                          sum[1] += -0.11023622;
                        } else {
                          sum[1] += -0.222194001;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <25) {
                      if (sample[4] <170) {
                        if (sample[2] <24) {
                          sum[1] += -0.242214531;
                        } else {
                          sum[1] += 0.0289256144;
                        }
                      } else {
                        if (sample[0] <57) {
                          sum[1] += -0.0241379365;
                        } else {
                          sum[1] += 0.6517241;
                        }
                      }
                    } else {
                      sum[1] += 0.430769205;
                    }
                  }
                } else {
                  if (sample[1] <56) {
                    if (sample[0] <59) {
                      if (sample[2] <22) {
                        if (sample[2] <19) {
                          sum[1] += -0.102439024;
                        } else {
                          sum[1] += -0.232365146;
                        }
                      } else {
                        sum[1] += 0.231404945;
                      }
                    } else {
                      if (sample[2] <20) {
                        sum[1] += 1.10923076;
                      } else {
                        sum[1] += 0.256097555;
                      }
                    }
                  } else {
                    if (sample[1] <63) {
                      if (sample[2] <26) {
                        if (sample[4] <151) {
                          sum[1] += 1.63257623;
                        } else {
                          sum[1] += 1.44562805;
                        }
                      } else {
                        if (sample[0] <64) {
                          sum[1] += 0.0362694226;
                        } else {
                          sum[1] += 1.27272725;
                        }
                      }
                    } else {
                      if (sample[0] <62) {
                        if (sample[3] <89) {
                          sum[1] += -0.138339922;
                        } else {
                          sum[1] += 0.231404945;
                        }
                      } else {
                        if (sample[0] <67) {
                          sum[1] += 1.2528615;
                        } else {
                          sum[1] += 0.539525688;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[1] <97) {
                if (sample[2] <38) {
                  if (sample[1] <74) {
                    if (sample[4] <183) {
                      if (sample[4] <129) {
                        if (sample[0] <67) {
                          sum[1] += 0.0175526496;
                        } else {
                          sum[1] += -0.190173402;
                        }
                      } else {
                        if (sample[4] <134) {
                          sum[1] += 0.327338099;
                        } else {
                          sum[1] += 0.0960347876;
                        }
                      }
                    } else {
                      if (sample[5] <66) {
                        sum[1] += 0.0289256144;
                      } else {
                        if (sample[0] <69) {
                          sum[1] += 1.14088392;
                        } else {
                          sum[1] += 0.40697673;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <100) {
                      if (sample[0] <92) {
                        if (sample[1] <80) {
                          sum[1] += -0.124900877;
                        } else {
                          sum[1] += -0.269176841;
                        }
                      } else {
                        if (sample[4] <187) {
                          sum[1] += -0.172022685;
                        } else {
                          sum[1] += 0.738532066;
                        }
                      }
                    } else {
                      if (sample[2] <27) {
                        sum[1] += 0.0642201751;
                      } else {
                        sum[1] += 1.04132223;
                      }
                    }
                  }
                } else {
                  if (sample[5] <92) {
                    if (sample[2] <40) {
                      if (sample[3] <88) {
                        if (sample[2] <39) {
                          sum[1] += -0.0894568712;
                        } else {
                          sum[1] += 0.249011844;
                        }
                      } else {
                        if (sample[1] <73) {
                          sum[1] += -0.137704924;
                        } else {
                          sum[1] += -0.274173796;
                        }
                      }
                    } else {
                      if (sample[0] <89) {
                        if (sample[4] <89) {
                          sum[1] += -0.274455994;
                        } else {
                          sum[1] += -0.237467155;
                        }
                      } else {
                        if (sample[4] <127) {
                          sum[1] += -0.221951216;
                        } else {
                          sum[1] += 0.144827574;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <90) {
                      if (sample[2] <44) {
                        sum[1] += 0.0642201751;
                      } else {
                        sum[1] += 0.313793093;
                      }
                    } else {
                      if (sample[1] <92) {
                        if (sample[1] <90) {
                          sum[1] += -0.138339922;
                        } else {
                          sum[1] += 0.46408838;
                        }
                      } else {
                        if (sample[4] <136) {
                          sum[1] += 0.0396226309;
                        } else {
                          sum[1] += -0.259550571;
                        }
                      }
                    }
                  }
                }
              } else {
                sum[1] += -0.291193038;
              }
            }
          }
        } else {
          if (sample[4] <148) {
            if (sample[1] <65) {
              if (sample[1] <58) {
                if (sample[4] <147) {
                  if (sample[0] <84) {
                    if (sample[1] <57) {
                      if (sample[0] <60) {
                        sum[1] += -0.290550828;
                      } else {
                        sum[1] += -0.277488828;
                      }
                    } else {
                      if (sample[4] <144) {
                        if (sample[0] <76) {
                          sum[1] += -0.270828396;
                        } else {
                          sum[1] += -0.101018682;
                        }
                      } else {
                        sum[1] += 0.184210509;
                      }
                    }
                  } else {
                    if (sample[4] <117) {
                      sum[1] += 0.288990825;
                    } else {
                      if (sample[2] <42) {
                        if (sample[2] <40) {
                          sum[1] += -0.180515751;
                        } else {
                          sum[1] += 0.129230753;
                        }
                      } else {
                        if (sample[1] <49) {
                          sum[1] += -0.0969230831;
                        } else {
                          sum[1] += -0.273913026;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <95) {
                    sum[1] += 1.0866425;
                  } else {
                    if (sample[2] <37) {
                      sum[1] += -0.281134844;
                    } else {
                      sum[1] += 0.288990825;
                    }
                  }
                }
              } else {
                if (sample[4] <133) {
                  if (sample[0] <74) {
                    if (sample[2] <33) {
                      if (sample[4] <129) {
                        sum[1] += -5.48990142e-09;
                      } else {
                        sum[1] += 0.256097555;
                      }
                    } else {
                      if (sample[4] <116) {
                        if (sample[3] <105) {
                          sum[1] += -0.256097555;
                        } else {
                          sum[1] += -0.121983916;
                        }
                      } else {
                        if (sample[3] <95) {
                          sum[1] += 0.0808313936;
                        } else {
                          sum[1] += -0.195114315;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <60) {
                      if (sample[0] <76) {
                        sum[1] += -0.264650285;
                      } else {
                        if (sample[0] <77) {
                          sum[1] += 0.67002517;
                        } else {
                          sum[1] += 0.112490855;
                        }
                      }
                    } else {
                      if (sample[3] <102) {
                        if (sample[1] <63) {
                          sum[1] += 0.506153822;
                        } else {
                          sum[1] += -0.105315953;
                        }
                      } else {
                        if (sample[0] <78) {
                          sum[1] += -0.101074547;
                        } else {
                          sum[1] += -0.225806445;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <37) {
                    if (sample[1] <62) {
                      if (sample[2] <36) {
                        if (sample[1] <61) {
                          sum[1] += -0.134042561;
                        } else {
                          sum[1] += 0.106960937;
                        }
                      } else {
                        if (sample[0] <77) {
                          sum[1] += 0.662721872;
                        } else {
                          sum[1] += 0.0553359576;
                        }
                      }
                    } else {
                      if (sample[0] <75) {
                        if (sample[4] <134) {
                          sum[1] += 0.0642201751;
                        } else {
                          sum[1] += 0.776796937;
                        }
                      } else {
                        if (sample[3] <101) {
                          sum[1] += 0.167256624;
                        } else {
                          sum[1] += 0.609900951;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <88) {
                      if (sample[0] <83) {
                        if (sample[1] <62) {
                          sum[1] += 0.0252707507;
                        } else {
                          sum[1] += -0.184210524;
                        }
                      } else {
                        if (sample[4] <135) {
                          sum[1] += 0.0642201751;
                        } else {
                          sum[1] += -0.272787303;
                        }
                      }
                    } else {
                      if (sample[2] <43) {
                        if (sample[1] <59) {
                          sum[1] += -0.217616573;
                        } else {
                          sum[1] += 0.115587831;
                        }
                      } else {
                        sum[1] += -0.258660495;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[4] <131) {
                if (sample[4] <125) {
                  if (sample[4] <112) {
                    if (sample[1] <70) {
                      if (sample[0] <74) {
                        if (sample[2] <41) {
                          sum[1] += -0.0445859917;
                        } else {
                          sum[1] += -0.248598129;
                        }
                      } else {
                        if (sample[4] <94) {
                          sum[1] += 0.112903215;
                        } else {
                          sum[1] += -0.184210524;
                        }
                      }
                    } else {
                      if (sample[2] <45) {
                        if (sample[3] <95) {
                          sum[1] += 0.0170731638;
                        } else {
                          sum[1] += -0.23517786;
                        }
                      } else {
                        sum[1] += -0.28620556;
                      }
                    }
                  } else {
                    if (sample[0] <77) {
                      if (sample[0] <74) {
                        if (sample[0] <72) {
                          sum[1] += -0.0631769001;
                        } else {
                          sum[1] += -0.262677491;
                        }
                      } else {
                        if (sample[4] <122) {
                          sum[1] += 0.195431456;
                        } else {
                          sum[1] += -0.130705401;
                        }
                      }
                    } else {
                      if (sample[1] <74) {
                        if (sample[1] <71) {
                          sum[1] += -0.154521719;
                        } else {
                          sum[1] += -0.234118626;
                        }
                      } else {
                        if (sample[2] <43) {
                          sum[1] += 0.152173907;
                        } else {
                          sum[1] += -0.129593268;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <37) {
                    if (sample[3] <95) {
                      if (sample[0] <72) {
                        sum[1] += 0.288990825;
                      } else {
                        sum[1] += 0.989655137;
                      }
                    } else {
                      sum[1] += -0.17355372;
                    }
                  } else {
                    if (sample[0] <89) {
                      if (sample[1] <70) {
                        if (sample[2] <39) {
                          sum[1] += 0.202166051;
                        } else {
                          sum[1] += -0.14693737;
                        }
                      } else {
                        if (sample[1] <72) {
                          sum[1] += 0.322419494;
                        } else {
                          sum[1] += 0.0517808124;
                        }
                      }
                    } else {
                      if (sample[1] <76) {
                        if (sample[3] <106) {
                          sum[1] += 0.0331753455;
                        } else {
                          sum[1] += -0.204494387;
                        }
                      } else {
                        if (sample[3] <95) {
                          sum[1] += 0.0642201751;
                        } else {
                          sum[1] += -0.216855422;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <104) {
                  if (sample[0] <75) {
                    if (sample[0] <73) {
                      if (sample[2] <33) {
                        sum[1] += 0.853658497;
                      } else {
                        sum[1] += 0.0289256144;
                      }
                    } else {
                      sum[1] += 1.50655377;
                    }
                  } else {
                    if (sample[4] <141) {
                      if (sample[4] <136) {
                        if (sample[1] <75) {
                          sum[1] += 0.321300209;
                        } else {
                          sum[1] += -0.0290013161;
                        }
                      } else {
                        if (sample[3] <98) {
                          sum[1] += 0.155618414;
                        } else {
                          sum[1] += 0.601840615;
                        }
                      }
                    } else {
                      if (sample[3] <99) {
                        if (sample[1] <76) {
                          sum[1] += 0.57913667;
                        } else {
                          sum[1] += 0.190909073;
                        }
                      } else {
                        if (sample[1] <70) {
                          sum[1] += 0.234682053;
                        } else {
                          sum[1] += 1.18654168;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <107) {
                    if (sample[4] <144) {
                      if (sample[0] <98) {
                        if (sample[0] <96) {
                          sum[1] += -0.0442571193;
                        } else {
                          sum[1] += 0.301916897;
                        }
                      } else {
                        if (sample[1] <75) {
                          sum[1] += -0.26835236;
                        } else {
                          sum[1] += 0.0813953355;
                        }
                      }
                    } else {
                      if (sample[0] <109) {
                        if (sample[2] <43) {
                          sum[1] += 0.0726140961;
                        } else {
                          sum[1] += 0.435986131;
                        }
                      } else {
                        sum[1] += -0.200636938;
                      }
                    }
                  } else {
                    if (sample[1] <73) {
                      if (sample[0] <97) {
                        if (sample[0] <96) {
                          sum[1] += -0.184210524;
                        } else {
                          sum[1] += 0.0642201751;
                        }
                      } else {
                        if (sample[2] <44) {
                          sum[1] += -0.0906735808;
                        } else {
                          sum[1] += -0.277157366;
                        }
                      }
                    } else {
                      sum[1] += -5.48990142e-09;
                    }
                  }
                }
              }
            }
          } else {
            if (sample[1] <58) {
              if (sample[1] <55) {
                if (sample[0] <103) {
                  if (sample[4] <176) {
                    if (sample[1] <54) {
                      if (sample[0] <89) {
                        sum[1] += -0.282335699;
                      } else {
                        if (sample[1] <50) {
                          sum[1] += -0.212707177;
                        } else {
                          sum[1] += 0.0642201751;
                        }
                      }
                    } else {
                      if (sample[0] <60) {
                        sum[1] += 0.288990825;
                      } else {
                        if (sample[4] <168) {
                          sum[1] += -0.27844587;
                        } else {
                          sum[1] += -0.135922328;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <95) {
                      if (sample[0] <60) {
                        if (sample[2] <18) {
                          sum[1] += -0.212707177;
                        } else {
                          sum[1] += 0.288990825;
                        }
                      } else {
                        sum[1] += 0.6517241;
                      }
                    } else {
                      if (sample[0] <92) {
                        if (sample[1] <47) {
                          sum[1] += -0.263751984;
                        } else {
                          sum[1] += -0.174405441;
                        }
                      } else {
                        if (sample[1] <50) {
                          sum[1] += -0.200636938;
                        } else {
                          sum[1] += 0.328729272;
                        }
                      }
                    }
                  }
                } else {
                  sum[1] += 1.4315424;
                }
              } else {
                if (sample[0] <61) {
                  if (sample[2] <19) {
                    sum[1] += 1.60201335;
                  } else {
                    if (sample[2] <23) {
                      if (sample[2] <22) {
                        sum[1] += 0.833794951;
                      } else {
                        sum[1] += 0.375609726;
                      }
                    } else {
                      sum[1] += 1.1916889;
                    }
                  }
                } else {
                  if (sample[1] <57) {
                    if (sample[0] <118) {
                      if (sample[2] <19) {
                        if (sample[3] <99) {
                          sum[1] += 0.381088793;
                        } else {
                          sum[1] += -0.077017121;
                        }
                      } else {
                        if (sample[0] <62) {
                          sum[1] += 0.0415430181;
                        } else {
                          sum[1] += -0.211549193;
                        }
                      }
                    } else {
                      sum[1] += 1.00552487;
                    }
                  } else {
                    if (sample[4] <176) {
                      if (sample[2] <28) {
                        if (sample[3] <100) {
                          sum[1] += 0.248031482;
                        } else {
                          sum[1] += 0.771565437;
                        }
                      } else {
                        sum[1] += -0.267886847;
                      }
                    } else {
                      if (sample[0] <77) {
                        if (sample[0] <67) {
                          sum[1] += 0.605536282;
                        } else {
                          sum[1] += 1.27189934;
                        }
                      } else {
                        if (sample[0] <103) {
                          sum[1] += 0.0612691343;
                        } else {
                          sum[1] += 1.04132223;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[1] <102) {
                if (sample[4] <162) {
                  if (sample[3] <105) {
                    if (sample[1] <65) {
                      if (sample[0] <77) {
                        if (sample[1] <62) {
                          sum[1] += 0.631606996;
                        } else {
                          sum[1] += 1.02252555;
                        }
                      } else {
                        if (sample[2] <34) {
                          sum[1] += 0.272373527;
                        } else {
                          sum[1] += -0.145283014;
                        }
                      }
                    } else {
                      if (sample[1] <89) {
                        if (sample[0] <96) {
                          sum[1] += 1.25544643;
                        } else {
                          sum[1] += 1.54173958;
                        }
                      } else {
                        if (sample[3] <101) {
                          sum[1] += -0.00619469769;
                        } else {
                          sum[1] += 1.03739607;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <73) {
                      if (sample[3] <111) {
                        if (sample[3] <107) {
                          sum[1] += 0.0175526496;
                        } else {
                          sum[1] += -0.184951171;
                        }
                      } else {
                        sum[1] += 0.735668778;
                      }
                    } else {
                      if (sample[0] <118) {
                        if (sample[0] <110) {
                          sum[1] += 0.734806597;
                        } else {
                          sum[1] += 0.297345102;
                        }
                      } else {
                        sum[1] += 1.17509019;
                      }
                    }
                  }
                } else {
                  if (sample[3] <102) {
                    if (sample[1] <84) {
                      if (sample[0] <65) {
                        sum[1] += 0.267515898;
                      } else {
                        if (sample[1] <60) {
                          sum[1] += 1.49120986;
                        } else {
                          sum[1] += 1.68038106;
                        }
                      }
                    } else {
                      if (sample[1] <98) {
                        if (sample[0] <100) {
                          sum[1] += 0.170487091;
                        } else {
                          sum[1] += 1.11741424;
                        }
                      } else {
                        if (sample[0] <128) {
                          sum[1] += -0.0141987903;
                        } else {
                          sum[1] += 0.69329071;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <65) {
                      if (sample[4] <192) {
                        if (sample[0] <118) {
                          sum[1] += 0.233726785;
                        } else {
                          sum[1] += 1.08466446;
                        }
                      } else {
                        if (sample[0] <96) {
                          sum[1] += 0.705821157;
                        } else {
                          sum[1] += 1.43349278;
                        }
                      }
                    } else {
                      if (sample[4] <192) {
                        if (sample[1] <71) {
                          sum[1] += 1.02807772;
                        } else {
                          sum[1] += 1.54082072;
                        }
                      } else {
                        sum[1] += 1.68369162;
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <101) {
                  if (sample[3] <98) {
                    if (sample[2] <28) {
                      if (sample[1] <122) {
                        if (sample[0] <130) {
                          sum[1] += -0.101018682;
                        } else {
                          sum[1] += 0.1975023;
                        }
                      } else {
                        sum[1] += -0.276795;
                      }
                    } else {
                      if (sample[4] <166) {
                        if (sample[0] <123) {
                          sum[1] += -0.253351212;
                        } else {
                          sum[1] += 0.275933594;
                        }
                      } else {
                        if (sample[0] <135) {
                          sum[1] += -0.230594471;
                        } else {
                          sum[1] += -0.280254781;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <113) {
                      if (sample[0] <137) {
                        if (sample[2] <43) {
                          sum[1] += 0.467509001;
                        } else {
                          sum[1] += -7.27731075e-09;
                        }
                      } else {
                        if (sample[1] <106) {
                          sum[1] += 0.0642201751;
                        } else {
                          sum[1] += 0.731053531;
                        }
                      }
                    } else {
                      if (sample[0] <168) {
                        if (sample[3] <99) {
                          sum[1] += -0.25207755;
                        } else {
                          sum[1] += 0.0762376115;
                        }
                      } else {
                        sum[1] += 0.921052575;
                      }
                    }
                  }
                } else {
                  if (sample[0] <174) {
                    if (sample[0] <148) {
                      if (sample[2] <42) {
                        if (sample[2] <40) {
                          sum[1] += 0.0642201751;
                        } else {
                          sum[1] += -0.193103448;
                        }
                      } else {
                        if (sample[0] <142) {
                          sum[1] += -0.17355372;
                        } else {
                          sum[1] += 1.04132223;
                        }
                      }
                    } else {
                      if (sample[2] <41) {
                        if (sample[1] <113) {
                          sum[1] += 1.24657524;
                        } else {
                          sum[1] += 0.417098433;
                        }
                      } else {
                        if (sample[1] <105) {
                          sum[1] += 1.05813944;
                        } else {
                          sum[1] += 0.318811864;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <102) {
                      sum[1] += 0.0642201751;
                    } else {
                      sum[1] += 1.73200679;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if (sample[4] <86) {
          if (sample[1] <66) {
            if (sample[0] <70) {
              if (sample[2] <80) {
                if (sample[0] <67) {
                  sum[1] += -0.290680975;
                } else {
                  if (sample[2] <78) {
                    if (sample[4] <39) {
                      if (sample[1] <58) {
                        sum[1] += 0.288990825;
                      } else {
                        if (sample[1] <61) {
                          sum[1] += -0.162251651;
                        } else {
                          sum[1] += -0.269957155;
                        }
                      }
                    } else {
                      sum[1] += -0.281814903;
                    }
                  } else {
                    if (sample[1] <63) {
                      if (sample[1] <60) {
                        sum[1] += -0.193103448;
                      } else {
                        sum[1] += 0.417098433;
                      }
                    } else {
                      if (sample[3] <170) {
                        sum[1] += -0.0773480684;
                      } else {
                        sum[1] += -0.250716329;
                      }
                    }
                  }
                }
              } else {
                if (sample[0] <64) {
                  if (sample[3] <178) {
                    if (sample[2] <87) {
                      sum[1] += -0.282298952;
                    } else {
                      if (sample[0] <62) {
                        sum[1] += 0.0642201751;
                      } else {
                        sum[1] += -0.184210524;
                      }
                    }
                  } else {
                    if (sample[0] <62) {
                      sum[1] += -0.212707177;
                    } else {
                      if (sample[0] <63) {
                        sum[1] += 0.288990825;
                      } else {
                        sum[1] += -0.16055046;
                      }
                    }
                  }
                } else {
                  if (sample[2] <81) {
                    if (sample[3] <174) {
                      if (sample[0] <68) {
                        if (sample[0] <66) {
                          sum[1] += 0.0642201751;
                        } else {
                          sum[1] += 0.599447489;
                        }
                      } else {
                        sum[1] += -0.0241379365;
                      }
                    } else {
                      sum[1] += -0.225806445;
                    }
                  } else {
                    if (sample[2] <92) {
                      if (sample[3] <171) {
                        sum[1] += -0.26835236;
                      } else {
                        if (sample[1] <63) {
                          sum[1] += 0.0203094687;
                        } else {
                          sum[1] += -0.181684628;
                        }
                      }
                    } else {
                      if (sample[2] <95) {
                        if (sample[4] <82) {
                          sum[1] += 0.552631557;
                        } else {
                          sum[1] += 0.0642201751;
                        }
                      } else {
                        sum[1] += -0.217616573;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[5] <75) {
                if (sample[4] <19) {
                  sum[1] += 0.482758611;
                } else {
                  if (sample[3] <148) {
                    if (sample[3] <119) {
                      if (sample[2] <64) {
                        if (sample[3] <115) {
                          sum[1] += -0.247712016;
                        } else {
                          sum[1] += -0.202702701;
                        }
                      } else {
                        sum[1] += 0.0642201751;
                      }
                    } else {
                      sum[1] += -0.277401179;
                    }
                  } else {
                    if (sample[0] <72) {
                      if (sample[4] <30) {
                        if (sample[4] <29) {
                          sum[1] += -0.138339922;
                        } else {
                          sum[1] += 0.0289256144;
                        }
                      } else {
                        if (sample[3] <156) {
                          sum[1] += -0.274173796;
                        } else {
                          sum[1] += -0.16008316;
                        }
                      }
                    } else {
                      if (sample[4] <36) {
                        sum[1] += -0.244186044;
                      } else {
                        if (sample[1] <62) {
                          sum[1] += -0.0894568712;
                        } else {
                          sum[1] += 0.193370149;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <93) {
                  if (sample[0] <77) {
                    if (sample[1] <64) {
                      if (sample[1] <58) {
                        if (sample[1] <52) {
                          sum[1] += -0.0445859917;
                        } else {
                          sum[1] += -0.250487953;
                        }
                      } else {
                        if (sample[0] <76) {
                          sum[1] += -0.0863975361;
                        } else {
                          sum[1] += 0.133988604;
                        }
                      }
                    } else {
                      if (sample[3] <171) {
                        if (sample[1] <65) {
                          sum[1] += -0.237905696;
                        } else {
                          sum[1] += -0.161651507;
                        }
                      } else {
                        if (sample[2] <87) {
                          sum[1] += 0.288990825;
                        } else {
                          sum[1] += -0.207100585;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <84) {
                      if (sample[1] <58) {
                        if (sample[4] <73) {
                          sum[1] += -0.151624545;
                        } else {
                          sum[1] += -0.284318745;
                        }
                      } else {
                        if (sample[1] <60) {
                          sum[1] += -0.126007527;
                        } else {
                          sum[1] += -0.212131456;
                        }
                      }
                    } else {
                      if (sample[4] <59) {
                        sum[1] += 0.921052575;
                      } else {
                        if (sample[5] <86) {
                          sum[1] += 0.0580110401;
                        } else {
                          sum[1] += -0.211853713;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <170) {
                    if (sample[2] <94) {
                      sum[1] += 0.735668778;
                    } else {
                      sum[1] += 0.111464955;
                    }
                  } else {
                    sum[1] += -0.200636938;
                  }
                }
              }
            }
          } else {
            if (sample[4] <60) {
              sum[1] += -0.291597813;
            } else {
              if (sample[2] <56) {
                if (sample[5] <79) {
                  sum[1] += -0.284323424;
                } else {
                  sum[1] += -0.246664032;
                }
              } else {
                if (sample[3] <48) {
                  sum[1] += -0.291543275;
                } else {
                  if (sample[3] <100) {
                    if (sample[0] <193) {
                      if (sample[3] <70) {
                        if (sample[2] <142) {
                          sum[1] += -0.289753795;
                        } else {
                          sum[1] += -0.213906109;
                        }
                      } else {
                        if (sample[4] <77) {
                          sum[1] += -0.283601969;
                        } else {
                          sum[1] += -0.269569963;
                        }
                      }
                    } else {
                      if (sample[2] <135) {
                        if (sample[4] <83) {
                          sum[1] += 1.16157198;
                        } else {
                          sum[1] += 0.231404945;
                        }
                      } else {
                        sum[1] += -0.282784343;
                      }
                    }
                  } else {
                    if (sample[0] <69) {
                      sum[1] += 0.368421048;
                    } else {
                      if (sample[1] <68) {
                        if (sample[5] <83) {
                          sum[1] += -0.285530269;
                        } else {
                          sum[1] += -0.12005277;
                        }
                      } else {
                        if (sample[1] <74) {
                          sum[1] += -0.272823513;
                        } else {
                          sum[1] += -0.290809602;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          if (sample[3] <94) {
            if (sample[3] <59) {
              if (sample[3] <12) {
                if (sample[1] <72) {
                  if (sample[2] <148) {
                    if (sample[0] <42) {
                      sum[1] += -0.291270733;
                    } else {
                      if (sample[4] <163) {
                        if (sample[4] <111) {
                          sum[1] += -0.243165657;
                        } else {
                          sum[1] += -0.271224886;
                        }
                      } else {
                        if (sample[1] <69) {
                          sum[1] += 0.572727263;
                        } else {
                          sum[1] += -0.220994949;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <58) {
                      sum[1] += -0.16055046;
                    } else {
                      sum[1] += 0.738532066;
                    }
                  }
                } else {
                  sum[1] += -0.290990472;
                }
              } else {
                sum[1] += -0.291468829;
              }
            } else {
              if (sample[1] <103) {
                if (sample[0] <88) {
                  if (sample[3] <78) {
                    if (sample[1] <74) {
                      if (sample[0] <60) {
                        if (sample[0] <50) {
                          sum[1] += -0.0445859917;
                        } else {
                          sum[1] += -0.217616573;
                        }
                      } else {
                        sum[1] += 0.231404945;
                      }
                    } else {
                      if (sample[2] <67) {
                        sum[1] += -0.286366761;
                      } else {
                        if (sample[4] <88) {
                          sum[1] += -0.200636938;
                        } else {
                          sum[1] += 0.0362694226;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <65) {
                      if (sample[1] <96) {
                        if (sample[2] <61) {
                          sum[1] += -0.24688077;
                        } else {
                          sum[1] += 0.0726140961;
                        }
                      } else {
                        sum[1] += -0.2889103;
                      }
                    } else {
                      sum[1] += -5.48990142e-09;
                    }
                  }
                } else {
                  if (sample[2] <49) {
                    if (sample[1] <97) {
                      if (sample[0] <91) {
                        if (sample[0] <89) {
                          sum[1] += 0.184210509;
                        } else {
                          sum[1] += -0.17355372;
                        }
                      } else {
                        if (sample[0] <94) {
                          sum[1] += 0.513761461;
                        } else {
                          sum[1] += 0.144827574;
                        }
                      }
                    } else {
                      sum[1] += -0.193103448;
                    }
                  } else {
                    if (sample[5] <89) {
                      if (sample[2] <56) {
                        if (sample[1] <85) {
                          sum[1] += -0.184210524;
                        } else {
                          sum[1] += 0.176322401;
                        }
                      } else {
                        sum[1] += -0.23517786;
                      }
                    } else {
                      if (sample[0] <105) {
                        if (sample[4] <123) {
                          sum[1] += -0.207053035;
                        } else {
                          sum[1] += -0.0685155019;
                        }
                      } else {
                        if (sample[1] <102) {
                          sum[1] += -0.217616573;
                        } else {
                          sum[1] += 0.227810636;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <185) {
                  if (sample[4] <98) {
                    if (sample[3] <90) {
                      if (sample[2] <117) {
                        sum[1] += -0.28081876;
                      } else {
                        sum[1] += 0.0289256144;
                      }
                    } else {
                      if (sample[2] <85) {
                        if (sample[1] <126) {
                          sum[1] += -0.199023545;
                        } else {
                          sum[1] += 0.091448918;
                        }
                      } else {
                        sum[1] += -0.286534995;
                      }
                    }
                  } else {
                    sum[1] += -0.290401697;
                  }
                } else {
                  if (sample[2] <112) {
                    sum[1] += -0.184210524;
                  } else {
                    sum[1] += 0.368421048;
                  }
                }
              }
            }
          } else {
            if (sample[4] <146) {
              if (sample[2] <66) {
                if (sample[4] <127) {
                  if (sample[0] <124) {
                    if (sample[4] <107) {
                      if (sample[2] <59) {
                        if (sample[1] <67) {
                          sum[1] += -0.213568419;
                        } else {
                          sum[1] += -0.256887376;
                        }
                      } else {
                        if (sample[1] <96) {
                          sum[1] += -0.274401903;
                        } else {
                          sum[1] += -0.137320578;
                        }
                      }
                    } else {
                      if (sample[1] <54) {
                        sum[1] += -0.288704664;
                      } else {
                        if (sample[1] <59) {
                          sum[1] += 0.055691544;
                        } else {
                          sum[1] += -0.207840577;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <93) {
                      if (sample[1] <82) {
                        sum[1] += 0.0642201751;
                      } else {
                        if (sample[4] <126) {
                          sum[1] += -0.267402381;
                        } else {
                          sum[1] += 0.0642201751;
                        }
                      }
                    } else {
                      if (sample[3] <104) {
                        if (sample[4] <122) {
                          sum[1] += 0.288990825;
                        } else {
                          sum[1] += -0.264023215;
                        }
                      } else {
                        if (sample[1] <96) {
                          sum[1] += 0.0580110401;
                        } else {
                          sum[1] += 0.906175733;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <121) {
                    if (sample[4] <135) {
                      if (sample[2] <53) {
                        if (sample[0] <105) {
                          sum[1] += -0.158668578;
                        } else {
                          sum[1] += 0.0495750606;
                        }
                      } else {
                        if (sample[4] <128) {
                          sum[1] += -0.101941749;
                        } else {
                          sum[1] += -0.20048067;
                        }
                      }
                    } else {
                      if (sample[3] <105) {
                        if (sample[3] <102) {
                          sum[1] += -0.0476839282;
                        } else {
                          sum[1] += 0.36993283;
                        }
                      } else {
                        if (sample[0] <107) {
                          sum[1] += -0.273081928;
                        } else {
                          sum[1] += -0.0369768441;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <103) {
                      if (sample[1] <119) {
                        if (sample[0] <128) {
                          sum[1] += -0.189129055;
                        } else {
                          sum[1] += 0.0466278009;
                        }
                      } else {
                        if (sample[4] <131) {
                          sum[1] += 0.0289256144;
                        } else {
                          sum[1] += -0.267911822;
                        }
                      }
                    } else {
                      if (sample[3] <106) {
                        if (sample[0] <131) {
                          sum[1] += 0.870711982;
                        } else {
                          sum[1] += 0.240866587;
                        }
                      } else {
                        if (sample[1] <80) {
                          sum[1] += 1.23192358;
                        } else {
                          sum[1] += 0.0820098817;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <106) {
                  if (sample[4] <118) {
                    if (sample[0] <192) {
                      if (sample[4] <110) {
                        if (sample[3] <102) {
                          sum[1] += -0.250223488;
                        } else {
                          sum[1] += -0.279517382;
                        }
                      } else {
                        if (sample[2] <100) {
                          sum[1] += -0.196171686;
                        } else {
                          sum[1] += 0.0300859511;
                        }
                      }
                    } else {
                      if (sample[0] <203) {
                        if (sample[4] <91) {
                          sum[1] += 1.27744806;
                        } else {
                          sum[1] += 0.417910427;
                        }
                      } else {
                        if (sample[1] <175) {
                          sum[1] += 0.168490142;
                        } else {
                          sum[1] += -0.280748665;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <104) {
                      if (sample[3] <97) {
                        if (sample[1] <129) {
                          sum[1] += 0.168490142;
                        } else {
                          sum[1] += -0.272562623;
                        }
                      } else {
                        if (sample[1] <168) {
                          sum[1] += -0.020522587;
                        } else {
                          sum[1] += 0.401123583;
                        }
                      }
                    } else {
                      if (sample[4] <139) {
                        if (sample[0] <131) {
                          sum[1] += 0.66149503;
                        } else {
                          sum[1] += 0.0231140368;
                        }
                      } else {
                        if (sample[1] <154) {
                          sum[1] += 1.17191005;
                        } else {
                          sum[1] += -0.17355372;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[1] <77) {
                    if (sample[0] <115) {
                      if (sample[2] <123) {
                        if (sample[2] <107) {
                          sum[1] += -0.238010809;
                        } else {
                          sum[1] += -0.286771774;
                        }
                      } else {
                        if (sample[1] <67) {
                          sum[1] += 0.891719699;
                        } else {
                          sum[1] += -0.0464695282;
                        }
                      }
                    } else {
                      if (sample[3] <124) {
                        if (sample[0] <120) {
                          sum[1] += 0.409433931;
                        } else {
                          sum[1] += 1.3041594;
                        }
                      } else {
                        if (sample[2] <96) {
                          sum[1] += 0.443220884;
                        } else {
                          sum[1] += -0.110964336;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <111) {
                      if (sample[4] <132) {
                        if (sample[4] <123) {
                          sum[1] += -0.285834461;
                        } else {
                          sum[1] += -0.12183699;
                        }
                      } else {
                        if (sample[3] <110) {
                          sum[1] += 0.581248224;
                        } else {
                          sum[1] += 0.00688523706;
                        }
                      }
                    } else {
                      if (sample[2] <83) {
                        if (sample[4] <143) {
                          sum[1] += -0.28177914;
                        } else {
                          sum[1] += 0.368761539;
                        }
                      } else {
                        if (sample[2] <97) {
                          sum[1] += -0.28801015;
                        } else {
                          sum[1] += -0.291299492;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[3] <101) {
                if (sample[3] <97) {
                  if (sample[1] <113) {
                    if (sample[4] <152) {
                      sum[1] += -0.193103448;
                    } else {
                      sum[1] += 0.231404945;
                    }
                  } else {
                    if (sample[3] <96) {
                      sum[1] += -0.291152447;
                    } else {
                      if (sample[2] <68) {
                        if (sample[4] <151) {
                          sum[1] += -0.122270741;
                        } else {
                          sum[1] += -0.25179857;
                        }
                      } else {
                        sum[1] += -0.0241379365;
                      }
                    }
                  }
                } else {
                  if (sample[3] <100) {
                    if (sample[1] <129) {
                      if (sample[1] <100) {
                        sum[1] += 0.288990825;
                      } else {
                        if (sample[2] <54) {
                          sum[1] += -0.0840672553;
                        } else {
                          sum[1] += -0.232706517;
                        }
                      }
                    } else {
                      if (sample[2] <54) {
                        sum[1] += -0.17355372;
                      } else {
                        if (sample[2] <62) {
                          sum[1] += 0.564516127;
                        } else {
                          sum[1] += 0.0427872762;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <152) {
                      if (sample[0] <131) {
                        sum[1] += -0.184210524;
                      } else {
                        if (sample[4] <154) {
                          sum[1] += 0.227810636;
                        } else {
                          sum[1] += 0.732851923;
                        }
                      }
                    } else {
                      if (sample[0] <162) {
                        if (sample[2] <54) {
                          sum[1] += 0.0642201751;
                        } else {
                          sum[1] += -0.23517786;
                        }
                      } else {
                        sum[1] += 0.0642201751;
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <89) {
                  if (sample[4] <176) {
                    if (sample[1] <47) {
                      sum[1] += -0.273081928;
                    } else {
                      if (sample[3] <111) {
                        if (sample[1] <117) {
                          sum[1] += 0.965141475;
                        } else {
                          sum[1] += 0.664828897;
                        }
                      } else {
                        if (sample[2] <77) {
                          sum[1] += 1.52017343;
                        } else {
                          sum[1] += 0.568692148;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <230) {
                      if (sample[0] <166) {
                        if (sample[1] <112) {
                          sum[1] += 0.987551808;
                        } else {
                          sum[1] += -0.17355372;
                        }
                      } else {
                        if (sample[4] <184) {
                          sum[1] += 1.38007629;
                        } else {
                          sum[1] += 1.68402147;
                        }
                      }
                    } else {
                      sum[1] += -0.16055046;
                    }
                  }
                } else {
                  if (sample[0] <219) {
                    if (sample[0] <211) {
                      sum[1] += -0.237735853;
                    } else {
                      if (sample[2] <92) {
                        sum[1] += 1.0545851;
                      } else {
                        sum[1] += -0.0445859917;
                      }
                    }
                  } else {
                    if (sample[1] <129) {
                      sum[1] += 0.482758611;
                    } else {
                      if (sample[0] <222) {
                        sum[1] += -0.0241379365;
                      } else {
                        sum[1] += -0.286303937;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }


  if (sample[0] <222) {
    if (sample[0] <203) {
      if (sample[3] <111) {
        if (sample[3] <110) {
          if (sample[2] <104) {
            if (sample[0] <137) {
              if (sample[4] <13) {
                if (sample[1] <87) {
                  if (sample[0] <81) {
                    if (sample[2] <54) {
                      sum[2] += -0.291616321;
                    } else {
                      if (sample[0] <71) {
                        if (sample[4] <8) {
                          sum[2] += -0.225701585;
                        } else {
                          sum[2] += -0.260857135;
                        }
                      } else {
                        if (sample[3] <51) {
                          sum[2] += -0.273990154;
                        } else {
                          sum[2] += -0.286317676;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <83) {
                      if (sample[4] <4) {
                        if (sample[0] <82) {
                          sum[2] += -0.250903934;
                        } else {
                          sum[2] += 0.286606222;
                        }
                      } else {
                        if (sample[3] <46) {
                          sum[2] += -0.06503243;
                        } else {
                          sum[2] += -0.248424768;
                        }
                      }
                    } else {
                      if (sample[2] <84) {
                        if (sample[1] <83) {
                          sum[2] += -0.238678157;
                        } else {
                          sum[2] += -0.286137104;
                        }
                      } else {
                        if (sample[3] <24) {
                          sum[2] += -0.272547424;
                        } else {
                          sum[2] += -0.234422848;
                        }
                      }
                    }
                  }
                } else {
                  sum[2] += -0.289816082;
                }
              } else {
                if (sample[4] <24) {
                  if (sample[3] <46) {
                    if (sample[5] <88) {
                      if (sample[0] <80) {
                        if (sample[5] <77) {
                          sum[2] += -0.268032193;
                        } else {
                          sum[2] += -0.283039391;
                        }
                      } else {
                        if (sample[0] <82) {
                          sum[2] += -0.245193526;
                        } else {
                          sum[2] += -0.286760718;
                        }
                      }
                    } else {
                      sum[2] += -0.290005505;
                    }
                  } else {
                    sum[2] += -0.290716976;
                  }
                } else {
                  if (sample[3] <108) {
                    if (sample[0] <123) {
                      if (sample[4] <160) {
                        if (sample[2] <67) {
                          sum[2] += -0.290514886;
                        } else {
                          sum[2] += -0.291189879;
                        }
                      } else {
                        sum[2] += -0.291600227;
                      }
                    } else {
                      if (sample[1] <108) {
                        if (sample[3] <102) {
                          sum[2] += -0.211874276;
                        } else {
                          sum[2] += -0.286957771;
                        }
                      } else {
                        if (sample[3] <77) {
                          sum[2] += -0.213043481;
                        } else {
                          sum[2] += -0.290147692;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <100) {
                      if (sample[4] <85) {
                        sum[2] += -0.289705545;
                      } else {
                        sum[2] += -0.283379823;
                      }
                    } else {
                      if (sample[1] <69) {
                        sum[2] += -0.290999472;
                      } else {
                        if (sample[4] <117) {
                          sum[2] += -0.265130103;
                        } else {
                          sum[2] += -0.0767662302;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[2] <55) {
                if (sample[4] <167) {
                  if (sample[1] <130) {
                    if (sample[0] <142) {
                      if (sample[4] <165) {
                        if (sample[1] <120) {
                          sum[2] += -0.139844611;
                        } else {
                          sum[2] += -0.264650285;
                        }
                      } else {
                        if (sample[0] <141) {
                          sum[2] += 0.22580643;
                        } else {
                          sum[2] += -0.207100585;
                        }
                      }
                    } else {
                      if (sample[1] <110) {
                        if (sample[4] <163) {
                          sum[2] += -0.221951216;
                        } else {
                          sum[2] += 0.152173907;
                        }
                      } else {
                        if (sample[1] <114) {
                          sum[2] += 0.838842928;
                        } else {
                          sum[2] += 0.169902891;
                        }
                      }
                    }
                  } else {
                    sum[2] += -0.290210843;
                  }
                } else {
                  if (sample[4] <238) {
                    if (sample[1] <130) {
                      if (sample[2] <52) {
                        if (sample[1] <113) {
                          sum[2] += -0.281054318;
                        } else {
                          sum[2] += -0.195783362;
                        }
                      } else {
                        if (sample[3] <108) {
                          sum[2] += 0.25992316;
                        } else {
                          sum[2] += -0.176557869;
                        }
                      }
                    } else {
                      sum[2] += -0.291482836;
                    }
                  } else {
                    sum[2] += -0.291649044;
                  }
                }
              } else {
                if (sample[0] <175) {
                  if (sample[4] <104) {
                    if (sample[0] <156) {
                      if (sample[1] <126) {
                        if (sample[4] <85) {
                          sum[2] += -0.287034869;
                        } else {
                          sum[2] += -0.278366506;
                        }
                      } else {
                        if (sample[3] <96) {
                          sum[2] += -0.290327102;
                        } else {
                          sum[2] += -0.227220267;
                        }
                      }
                    } else {
                      if (sample[1] <131) {
                        if (sample[0] <167) {
                          sum[2] += -0.244942933;
                        } else {
                          sum[2] += -0.108903781;
                        }
                      } else {
                        if (sample[1] <143) {
                          sum[2] += 0.114959672;
                        } else {
                          sum[2] += -0.276706517;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <98) {
                      if (sample[1] <129) {
                        if (sample[0] <142) {
                          sum[2] += -0.16253002;
                        } else {
                          sum[2] += 0.0701078475;
                        }
                      } else {
                        sum[2] += -0.291414231;
                      }
                    } else {
                      if (sample[4] <126) {
                        if (sample[4] <113) {
                          sum[2] += -0.207497716;
                        } else {
                          sum[2] += -0.102064461;
                        }
                      } else {
                        if (sample[1] <104) {
                          sum[2] += -0.123947755;
                        } else {
                          sum[2] += 0.247866109;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <104) {
                    if (sample[1] <127) {
                      sum[2] += 0.552631557;
                    } else {
                      if (sample[1] <149) {
                        if (sample[1] <146) {
                          sum[2] += -0.25578168;
                        } else {
                          sum[2] += 0.0252707507;
                        }
                      } else {
                        sum[2] += -0.287737131;
                      }
                    }
                  } else {
                    if (sample[0] <184) {
                      if (sample[4] <165) {
                        if (sample[4] <113) {
                          sum[2] += -0.0374331623;
                        } else {
                          sum[2] += 0.13412939;
                        }
                      } else {
                        if (sample[1] <108) {
                          sum[2] += -0.193103448;
                        } else {
                          sum[2] += 0.530013621;
                        }
                      }
                    } else {
                      if (sample[3] <108) {
                        if (sample[2] <71) {
                          sum[2] += 0.472514123;
                        } else {
                          sum[2] += 0.0470851921;
                        }
                      } else {
                        if (sample[4] <162) {
                          sum[2] += 0.780785203;
                        } else {
                          sum[2] += 0.123199984;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[4] <50) {
              sum[2] += -0.291550457;
            } else {
              if (sample[0] <156) {
                if (sample[3] <38) {
                  sum[2] += -0.291600645;
                } else {
                  if (sample[1] <128) {
                    sum[2] += -0.289735496;
                  } else {
                    if (sample[3] <84) {
                      sum[2] += -0.28801915;
                    } else {
                      if (sample[3] <103) {
                        if (sample[4] <74) {
                          sum[2] += -0.267019421;
                        } else {
                          sum[2] += -0.191106111;
                        }
                      } else {
                        if (sample[1] <141) {
                          sum[2] += -0.285713911;
                        } else {
                          sum[2] += -0.11290323;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[4] <100) {
                  if (sample[4] <84) {
                    if (sample[4] <70) {
                      if (sample[1] <170) {
                        if (sample[2] <146) {
                          sum[2] += -0.27766034;
                        } else {
                          sum[2] += -0.200824603;
                        }
                      } else {
                        sum[2] += -0.291254997;
                      }
                    } else {
                      if (sample[3] <109) {
                        if (sample[3] <105) {
                          sum[2] += -0.251877069;
                        } else {
                          sum[2] += -0.275634378;
                        }
                      } else {
                        if (sample[1] <148) {
                          sum[2] += -0.197026312;
                        } else {
                          sum[2] += -0.269980401;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <190) {
                      if (sample[2] <105) {
                        if (sample[1] <136) {
                          sum[2] += -0.21479395;
                        } else {
                          sum[2] += 0.0590094738;
                        }
                      } else {
                        if (sample[0] <181) {
                          sum[2] += -0.242717341;
                        } else {
                          sum[2] += -0.168189287;
                        }
                      }
                    } else {
                      if (sample[1] <160) {
                        if (sample[1] <158) {
                          sum[2] += -0.0638798997;
                        } else {
                          sum[2] += 0.636363626;
                        }
                      } else {
                        if (sample[3] <106) {
                          sum[2] += -0.271509171;
                        } else {
                          sum[2] += -0.0773480684;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <186) {
                    if (sample[4] <109) {
                      if (sample[5] <172) {
                        if (sample[1] <130) {
                          sum[2] += 0.0289256144;
                        } else {
                          sum[2] += 0.184210509;
                        }
                      } else {
                        if (sample[1] <141) {
                          sum[2] += -0.124053322;
                        } else {
                          sum[2] += -0.25454545;
                        }
                      }
                    } else {
                      if (sample[0] <184) {
                        sum[2] += -5.48990142e-09;
                      } else {
                        sum[2] += 0.46408838;
                      }
                    }
                  } else {
                    if (sample[3] <107) {
                      if (sample[1] <151) {
                        if (sample[0] <188) {
                          sum[2] += -0.17355372;
                        } else {
                          sum[2] += 0.288990825;
                        }
                      } else {
                        sum[2] += -0.261194021;
                      }
                    } else {
                      if (sample[1] <139) {
                        if (sample[2] <107) {
                          sum[2] += 0.372781038;
                        } else {
                          sum[2] += 0.921052575;
                        }
                      } else {
                        if (sample[0] <198) {
                          sum[2] += 0.111000977;
                        } else {
                          sum[2] += 0.531645536;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          if (sample[4] <93) {
            if (sample[4] <71) {
              if (sample[0] <88) {
                if (sample[1] <85) {
                  if (sample[4] <10) {
                    if (sample[0] <83) {
                      if (sample[0] <82) {
                        sum[2] += -0.226618707;
                      } else {
                        sum[2] += 0.0500420406;
                      }
                    } else {
                      if (sample[0] <84) {
                        sum[2] += -0.195026964;
                      } else {
                        sum[2] += -0.279374629;
                      }
                    }
                  } else {
                    sum[2] += -0.2905913;
                  }
                } else {
                  sum[2] += 0.146742195;
                }
              } else {
                if (sample[4] <46) {
                  if (sample[2] <111) {
                    sum[2] += -0.288722724;
                  } else {
                    sum[2] += -0.291549057;
                  }
                } else {
                  if (sample[2] <149) {
                    if (sample[0] <173) {
                      if (sample[0] <160) {
                        if (sample[2] <66) {
                          sum[2] += -0.130705401;
                        } else {
                          sum[2] += -0.286882788;
                        }
                      } else {
                        sum[2] += -0.267942905;
                      }
                    } else {
                      if (sample[2] <127) {
                        sum[2] += 0.231404945;
                      } else {
                        if (sample[1] <151) {
                          sum[2] += -0.177002922;
                        } else {
                          sum[2] += -0.242345944;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <193) {
                      sum[2] += 0.90322578;
                    } else {
                      if (sample[1] <166) {
                        sum[2] += 0.0828402266;
                      } else {
                        sum[2] += -0.244186044;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[0] <168) {
                if (sample[0] <157) {
                  if (sample[2] <71) {
                    if (sample[4] <83) {
                      sum[2] += -0.271120995;
                    } else {
                      if (sample[4] <84) {
                        if (sample[0] <96) {
                          sum[2] += -0.200636938;
                        } else {
                          sum[2] += 0.112903215;
                        }
                      } else {
                        if (sample[0] <86) {
                          sum[2] += -0.273644388;
                        } else {
                          sum[2] += -0.175948739;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <152) {
                      if (sample[4] <86) {
                        sum[2] += -0.284197271;
                      } else {
                        sum[2] += -0.26913774;
                      }
                    } else {
                      sum[2] += -0.249186471;
                    }
                  }
                } else {
                  if (sample[0] <158) {
                    if (sample[2] <110) {
                      if (sample[1] <122) {
                        if (sample[2] <103) {
                          sum[2] += -0.0241379365;
                        } else {
                          sum[2] += 0.231404945;
                        }
                      } else {
                        if (sample[1] <125) {
                          sum[2] += -0.0813953504;
                        } else {
                          sum[2] += 0.111464955;
                        }
                      }
                    } else {
                      if (sample[2] <113) {
                        sum[2] += -0.249258161;
                      } else {
                        if (sample[1] <128) {
                          sum[2] += 0.0642201751;
                        } else {
                          sum[2] += -0.16055046;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <127) {
                      sum[2] += -0.253178418;
                    } else {
                      if (sample[2] <108) {
                        if (sample[0] <167) {
                          sum[2] += 0.0642201751;
                        } else {
                          sum[2] += -5.48990142e-09;
                        }
                      } else {
                        if (sample[1] <129) {
                          sum[2] += -0.157729611;
                        } else {
                          sum[2] += -0.222735003;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <132) {
                  if (sample[2] <123) {
                    if (sample[4] <76) {
                      if (sample[1] <137) {
                        sum[2] += 0.0362694226;
                      } else {
                        if (sample[4] <73) {
                          sum[2] += 0.111464955;
                        } else {
                          sum[2] += 0.345849782;
                        }
                      }
                    } else {
                      if (sample[4] <84) {
                        if (sample[2] <121) {
                          sum[2] += 0.0930635706;
                        } else {
                          sum[2] += -0.261194021;
                        }
                      } else {
                        if (sample[1] <144) {
                          sum[2] += -0.19100976;
                        } else {
                          sum[2] += 0.231404945;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <173) {
                      sum[2] += -0.212707177;
                    } else {
                      if (sample[1] <146) {
                        if (sample[4] <78) {
                          sum[2] += 0.86542666;
                        } else {
                          sum[2] += 0.380191684;
                        }
                      } else {
                        if (sample[0] <194) {
                          sum[2] += 0.0832232386;
                        } else {
                          sum[2] += 0.626637518;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <78) {
                    if (sample[2] <143) {
                      sum[2] += -0.267192423;
                    } else {
                      if (sample[1] <162) {
                        sum[2] += 0.0642201751;
                      } else {
                        sum[2] += -0.225806445;
                      }
                    }
                  } else {
                    if (sample[0] <199) {
                      if (sample[0] <195) {
                        sum[2] += -0.184210524;
                      } else {
                        sum[2] += 0.368421048;
                      }
                    } else {
                      sum[2] += -0.217616573;
                    }
                  }
                }
              }
            }
          } else {
            if (sample[2] <64) {
              if (sample[2] <50) {
                if (sample[2] <45) {
                  sum[2] += -0.29154563;
                } else {
                  if (sample[0] <125) {
                    if (sample[2] <46) {
                      if (sample[0] <80) {
                        sum[2] += -0.207100585;
                      } else {
                        sum[2] += 0.0642201751;
                      }
                    } else {
                      sum[2] += -0.276216209;
                    }
                  } else {
                    if (sample[0] <128) {
                      sum[2] += 0.288990825;
                    } else {
                      sum[2] += -0.257719696;
                    }
                  }
                }
              } else {
                if (sample[1] <66) {
                  if (sample[0] <86) {
                    sum[2] += -0.207100585;
                  } else {
                    if (sample[4] <110) {
                      sum[2] += 0.579617798;
                    } else {
                      sum[2] += 0.0642201751;
                    }
                  }
                } else {
                  if (sample[4] <125) {
                    sum[2] += -0.230935633;
                  } else {
                    if (sample[0] <149) {
                      if (sample[2] <63) {
                        if (sample[4] <149) {
                          sum[2] += -8.0237017e-09;
                        } else {
                          sum[2] += 0.433884293;
                        }
                      } else {
                        sum[2] += 0.735668778;
                      }
                    } else {
                      sum[2] += -0.272169173;
                    }
                  }
                }
              }
            } else {
              if (sample[4] <107) {
                if (sample[4] <102) {
                  if (sample[4] <98) {
                    if (sample[0] <181) {
                      if (sample[2] <69) {
                        if (sample[2] <68) {
                          sum[2] += -0.246006384;
                        } else {
                          sum[2] += 0.25454542;
                        }
                      } else {
                        if (sample[0] <164) {
                          sum[2] += -0.240794763;
                        } else {
                          sum[2] += -0.140246049;
                        }
                      }
                    } else {
                      if (sample[4] <97) {
                        if (sample[0] <186) {
                          sum[2] += -0.077017121;
                        } else {
                          sum[2] += 0.091448918;
                        }
                      } else {
                        sum[2] += 0.372781038;
                      }
                    }
                  } else {
                    if (sample[0] <135) {
                      if (sample[1] <83) {
                        if (sample[1] <81) {
                          sum[2] += -0.0726643652;
                        } else {
                          sum[2] += 0.290613711;
                        }
                      } else {
                        if (sample[0] <127) {
                          sum[2] += -0.256842524;
                        } else {
                          sum[2] += -0.136807814;
                        }
                      }
                    } else {
                      if (sample[1] <109) {
                        if (sample[0] <145) {
                          sum[2] += 0.0768024921;
                        } else {
                          sum[2] += 0.603950083;
                        }
                      } else {
                        if (sample[2] <105) {
                          sum[2] += -0.142372876;
                        } else {
                          sum[2] += 0.074025102;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <134) {
                    if (sample[2] <77) {
                      if (sample[2] <68) {
                        if (sample[2] <67) {
                          sum[2] += -0.0401146188;
                        } else {
                          sum[2] += 0.198689938;
                        }
                      } else {
                        if (sample[1] <88) {
                          sum[2] += -0.149323627;
                        } else {
                          sum[2] += -0.259367198;
                        }
                      }
                    } else {
                      if (sample[1] <97) {
                        if (sample[0] <130) {
                          sum[2] += -0.0290456489;
                        } else {
                          sum[2] += 0.269230753;
                        }
                      } else {
                        if (sample[2] <80) {
                          sum[2] += -0.212707177;
                        } else {
                          sum[2] += -0.0445859917;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <154) {
                      if (sample[1] <104) {
                        if (sample[0] <137) {
                          sum[2] += 0.408759087;
                        } else {
                          sum[2] += 1.19664311;
                        }
                      } else {
                        if (sample[2] <88) {
                          sum[2] += 0.0981900319;
                        } else {
                          sum[2] += 1.081406;
                        }
                      }
                    } else {
                      if (sample[0] <186) {
                        if (sample[1] <113) {
                          sum[2] += 0.111464955;
                        } else {
                          sum[2] += -0.16592823;
                        }
                      } else {
                        if (sample[1] <140) {
                          sum[2] += 0.989655137;
                        } else {
                          sum[2] += 0.0580110401;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[4] <113) {
                  if (sample[0] <137) {
                    if (sample[0] <124) {
                      if (sample[1] <83) {
                        if (sample[2] <65) {
                          sum[2] += -0.062130183;
                        } else {
                          sum[2] += 0.328729272;
                        }
                      } else {
                        if (sample[4] <108) {
                          sum[2] += -5.48990142e-09;
                        } else {
                          sum[2] += -0.211018711;
                        }
                      }
                    } else {
                      if (sample[2] <72) {
                        if (sample[0] <125) {
                          sum[2] += 0.859861553;
                        } else {
                          sum[2] += 0.184210509;
                        }
                      } else {
                        if (sample[1] <93) {
                          sum[2] += -0.199524939;
                        } else {
                          sum[2] += 0.25179854;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <114) {
                      if (sample[2] <81) {
                        if (sample[1] <100) {
                          sum[2] += 0.626865625;
                        } else {
                          sum[2] += 0.240687653;
                        }
                      } else {
                        if (sample[4] <112) {
                          sum[2] += 1.19053698;
                        } else {
                          sum[2] += 0.69806093;
                        }
                      }
                    } else {
                      if (sample[0] <179) {
                        if (sample[4] <111) {
                          sum[2] += -0.0826771706;
                        } else {
                          sum[2] += 0.382932127;
                        }
                      } else {
                        if (sample[4] <108) {
                          sum[2] += 0.328729272;
                        } else {
                          sum[2] += 0.789599955;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <140) {
                    if (sample[0] <124) {
                      if (sample[1] <86) {
                        if (sample[0] <120) {
                          sum[2] += -0.0241379365;
                        } else {
                          sum[2] += 0.734146297;
                        }
                      } else {
                        sum[2] += -0.17355372;
                      }
                    } else {
                      if (sample[1] <97) {
                        if (sample[4] <126) {
                          sum[2] += 1.50167584;
                        } else {
                          sum[2] += 0.827272654;
                        }
                      } else {
                        if (sample[4] <115) {
                          sum[2] += 0.144827574;
                        } else {
                          sum[2] += 0.636363626;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <73) {
                      if (sample[4] <150) {
                        if (sample[1] <96) {
                          sum[2] += 0.0252707507;
                        } else {
                          sum[2] += 0.435986131;
                        }
                      } else {
                        sum[2] += -0.244186044;
                      }
                    } else {
                      if (sample[1] <128) {
                        if (sample[0] <162) {
                          sum[2] += 1.09553266;
                        } else {
                          sum[2] += 0.467705965;
                        }
                      } else {
                        sum[2] += 1.4542048;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if (sample[4] <99) {
          if (sample[4] <86) {
            if (sample[4] <55) {
              if (sample[4] <37) {
                if (sample[5] <89) {
                  if (sample[1] <84) {
                    if (sample[4] <15) {
                      if (sample[0] <82) {
                        sum[2] += -0.281003624;
                      } else {
                        if (sample[5] <84) {
                          sum[2] += -0.174180239;
                        } else {
                          sum[2] += -0.2774629;
                        }
                      }
                    } else {
                      if (sample[3] <145) {
                        sum[2] += -0.28878817;
                      } else {
                        if (sample[3] <164) {
                          sum[2] += -0.26643151;
                        } else {
                          sum[2] += -0.284444183;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <136) {
                      if (sample[0] <88) {
                        if (sample[0] <87) {
                          sum[2] += -0.232127979;
                        } else {
                          sum[2] += -0.0447638407;
                        }
                      } else {
                        if (sample[3] <129) {
                          sum[2] += -0.254890025;
                        } else {
                          sum[2] += -0.164445192;
                        }
                      }
                    } else {
                      if (sample[3] <141) {
                        if (sample[0] <88) {
                          sum[2] += -0.160023451;
                        } else {
                          sum[2] += -0.27248323;
                        }
                      } else {
                        sum[2] += -0.27595371;
                      }
                    }
                  }
                } else {
                  if (sample[4] <30) {
                    if (sample[1] <119) {
                      if (sample[1] <86) {
                        if (sample[0] <94) {
                          sum[2] += -0.282784998;
                        } else {
                          sum[2] += -0.179839432;
                        }
                      } else {
                        sum[2] += -0.289163291;
                      }
                    } else {
                      sum[2] += -0.291540951;
                    }
                  } else {
                    if (sample[0] <124) {
                      sum[2] += -0.288486928;
                    } else {
                      if (sample[5] <126) {
                        if (sample[0] <125) {
                          sum[2] += -0.271364599;
                        } else {
                          sum[2] += -0.224308521;
                        }
                      } else {
                        if (sample[3] <116) {
                          sum[2] += -0.287926584;
                        } else {
                          sum[2] += -0.269180715;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[0] <179) {
                  if (sample[3] <113) {
                    if (sample[4] <45) {
                      sum[2] += -0.286095917;
                    } else {
                      if (sample[1] <150) {
                        if (sample[3] <112) {
                          sum[2] += -0.28267011;
                        } else {
                          sum[2] += -0.27516824;
                        }
                      } else {
                        if (sample[1] <152) {
                          sum[2] += 0.0612691343;
                        } else {
                          sum[2] += -0.236011475;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <169) {
                      if (sample[0] <118) {
                        if (sample[4] <50) {
                          sum[2] += -0.284370452;
                        } else {
                          sum[2] += -0.259186268;
                        }
                      } else {
                        if (sample[1] <112) {
                          sum[2] += -0.206421062;
                        } else {
                          sum[2] += -0.266949207;
                        }
                      }
                    } else {
                      if (sample[3] <133) {
                        if (sample[4] <40) {
                          sum[2] += -0.0537772141;
                        } else {
                          sum[2] += 0.882870495;
                        }
                      } else {
                        if (sample[3] <136) {
                          sum[2] += -0.122270741;
                        } else {
                          sum[2] += -0.28735286;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <151) {
                    if (sample[3] <112) {
                      if (sample[0] <182) {
                        if (sample[2] <143) {
                          sum[2] += 0.0289256144;
                        } else {
                          sum[2] += -0.244186044;
                        }
                      } else {
                        sum[2] += 0.231404945;
                      }
                    } else {
                      sum[2] += 1.43865025;
                    }
                  } else {
                    if (sample[2] <168) {
                      if (sample[3] <113) {
                        if (sample[4] <43) {
                          sum[2] += -0.246726096;
                        } else {
                          sum[2] += 0.761613667;
                        }
                      } else {
                        if (sample[1] <151) {
                          sum[2] += -0.0813953504;
                        } else {
                          sum[2] += 1.07195568;
                        }
                      }
                    } else {
                      if (sample[0] <202) {
                        sum[2] += -0.28002575;
                      } else {
                        if (sample[1] <177) {
                          sum[2] += 0.433884293;
                        } else {
                          sum[2] += -0.167731628;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[1] <143) {
                if (sample[2] <97) {
                  if (sample[3] <113) {
                    if (sample[3] <112) {
                      if (sample[0] <123) {
                        if (sample[0] <122) {
                          sum[2] += -0.244819641;
                        } else {
                          sum[2] += -0.16775769;
                        }
                      } else {
                        if (sample[4] <59) {
                          sum[2] += -0.205264911;
                        } else {
                          sum[2] += -0.274911493;
                        }
                      }
                    } else {
                      if (sample[2] <91) {
                        if (sample[0] <114) {
                          sum[2] += -0.198402241;
                        } else {
                          sum[2] += 0.0413507223;
                        }
                      } else {
                        if (sample[0] <127) {
                          sum[2] += -0.119096115;
                        } else {
                          sum[2] += -0.223626941;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <114) {
                      if (sample[1] <87) {
                        if (sample[0] <89) {
                          sum[2] += -0.28464964;
                        } else {
                          sum[2] += -0.229408279;
                        }
                      } else {
                        if (sample[4] <62) {
                          sum[2] += -0.19627896;
                        } else {
                          sum[2] += 0.0779003203;
                        }
                      }
                    } else {
                      if (sample[4] <63) {
                        if (sample[2] <90) {
                          sum[2] += 0.351144522;
                        } else {
                          sum[2] += -0.00536217261;
                        }
                      } else {
                        if (sample[0] <136) {
                          sum[2] += 0.571176529;
                        } else {
                          sum[2] += 1.23695278;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <136) {
                    if (sample[0] <171) {
                      if (sample[4] <80) {
                        if (sample[3] <114) {
                          sum[2] += -0.269215733;
                        } else {
                          sum[2] += -0.13842161;
                        }
                      } else {
                        if (sample[3] <113) {
                          sum[2] += -0.12007682;
                        } else {
                          sum[2] += 0.77984786;
                        }
                      }
                    } else {
                      if (sample[3] <124) {
                        if (sample[4] <78) {
                          sum[2] += 0.827215374;
                        } else {
                          sum[2] += 1.3544879;
                        }
                      } else {
                        if (sample[1] <138) {
                          sum[2] += -0.218165621;
                        } else {
                          sum[2] += 0.472392619;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <102) {
                      if (sample[3] <165) {
                        if (sample[3] <160) {
                          sum[2] += -0.205680698;
                        } else {
                          sum[2] += 0.301916897;
                        }
                      } else {
                        if (sample[3] <179) {
                          sum[2] += -0.281911254;
                        } else {
                          sum[2] += -5.48990142e-09;
                        }
                      }
                    } else {
                      if (sample[4] <60) {
                        if (sample[3] <139) {
                          sum[2] += -0.0785997435;
                        } else {
                          sum[2] += -0.277798563;
                        }
                      } else {
                        sum[2] += -0.291320324;
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <128) {
                  if (sample[3] <113) {
                    if (sample[4] <72) {
                      if (sample[3] <112) {
                        if (sample[2] <139) {
                          sum[2] += -0.15213716;
                        } else {
                          sum[2] += 0.231221706;
                        }
                      } else {
                        if (sample[0] <174) {
                          sum[2] += -0.0884101093;
                        } else {
                          sum[2] += 0.736535192;
                        }
                      }
                    } else {
                      if (sample[3] <112) {
                        if (sample[0] <198) {
                          sum[2] += 0.666952729;
                        } else {
                          sum[2] += -0.0773480684;
                        }
                      } else {
                        sum[2] += 1.2996999;
                      }
                    }
                  } else {
                    if (sample[0] <178) {
                      if (sample[0] <174) {
                        sum[2] += -5.48990142e-09;
                      } else {
                        if (sample[1] <144) {
                          sum[2] += 1.22093022;
                        } else {
                          sum[2] += 0.501886785;
                        }
                      }
                    } else {
                      sum[2] += 1.64223373;
                    }
                  }
                } else {
                  if (sample[2] <160) {
                    sum[2] += 0.0642201751;
                  } else {
                    sum[2] += -0.290611833;
                  }
                }
              }
            }
          } else {
            if (sample[3] <119) {
              if (sample[3] <113) {
                if (sample[3] <112) {
                  if (sample[4] <96) {
                    if (sample[0] <186) {
                      if (sample[2] <105) {
                        if (sample[4] <93) {
                          sum[2] += -0.201248884;
                        } else {
                          sum[2] += 0.0157633889;
                        }
                      } else {
                        if (sample[2] <113) {
                          sum[2] += 0.0787933245;
                        } else {
                          sum[2] += 0.27769047;
                        }
                      }
                    } else {
                      if (sample[2] <120) {
                        sum[2] += 0.231404945;
                      } else {
                        sum[2] += 1.18845499;
                      }
                    }
                  } else {
                    if (sample[0] <137) {
                      if (sample[4] <97) {
                        if (sample[1] <100) {
                          sum[2] += -0.119167723;
                        } else {
                          sum[2] += 0.163212419;
                        }
                      } else {
                        if (sample[0] <130) {
                          sum[2] += 0.259377837;
                        } else {
                          sum[2] += -0.109147608;
                        }
                      }
                    } else {
                      if (sample[1] <108) {
                        if (sample[4] <97) {
                          sum[2] += 0.628951728;
                        } else {
                          sum[2] += 1.12781012;
                        }
                      } else {
                        if (sample[1] <113) {
                          sum[2] += 0.385697514;
                        } else {
                          sum[2] += 0.0674331784;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <143) {
                    if (sample[4] <93) {
                      if (sample[0] <116) {
                        if (sample[1] <76) {
                          sum[2] += -0.269645602;
                        } else {
                          sum[2] += -0.138472036;
                        }
                      } else {
                        if (sample[1] <101) {
                          sum[2] += 0.449686289;
                        } else {
                          sum[2] += 0.047817383;
                        }
                      }
                    } else {
                      if (sample[1] <75) {
                        if (sample[0] <96) {
                          sum[2] += -0.256723702;
                        } else {
                          sum[2] += 0.0289256144;
                        }
                      } else {
                        if (sample[0] <138) {
                          sum[2] += 0.593177676;
                        } else {
                          sum[2] += 1.10654104;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <90) {
                      if (sample[0] <160) {
                        if (sample[0] <154) {
                          sum[2] += -0.0977653638;
                        } else {
                          sum[2] += 0.221782163;
                        }
                      } else {
                        if (sample[2] <114) {
                          sum[2] += 0.834273577;
                        } else {
                          sum[2] += 1.32147157;
                        }
                      }
                    } else {
                      if (sample[4] <94) {
                        if (sample[0] <155) {
                          sum[2] += 0.517332673;
                        } else {
                          sum[2] += 1.25770009;
                        }
                      } else {
                        if (sample[1] <109) {
                          sum[2] += 1.56701016;
                        } else {
                          sum[2] += 1.2938143;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <94) {
                  if (sample[1] <87) {
                    if (sample[1] <76) {
                      sum[2] += -0.288581908;
                    } else {
                      if (sample[3] <114) {
                        if (sample[0] <114) {
                          sum[2] += 0.0538461432;
                        } else {
                          sum[2] += 0.498812318;
                        }
                      } else {
                        if (sample[2] <81) {
                          sum[2] += -0.161849707;
                        } else {
                          sum[2] += 0.288990825;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <115) {
                      if (sample[3] <114) {
                        if (sample[0] <122) {
                          sum[2] += 0.469168872;
                        } else {
                          sum[2] += 1.13653135;
                        }
                      } else {
                        if (sample[2] <79) {
                          sum[2] += 0.0289256144;
                        } else {
                          sum[2] += 0.586446047;
                        }
                      }
                    } else {
                      if (sample[2] <87) {
                        if (sample[0] <135) {
                          sum[2] += -0.256723702;
                        } else {
                          sum[2] += -5.48990142e-09;
                        }
                      } else {
                        sum[2] += 0.231404945;
                      }
                    }
                  }
                } else {
                  if (sample[0] <149) {
                    if (sample[4] <94) {
                      if (sample[0] <138) {
                        if (sample[4] <90) {
                          sum[2] += 1.40784276;
                        } else {
                          sum[2] += 0.998593092;
                        }
                      } else {
                        if (sample[3] <114) {
                          sum[2] += 0.762360752;
                        } else {
                          sum[2] += 1.21267164;
                        }
                      }
                    } else {
                      if (sample[1] <98) {
                        if (sample[0] <140) {
                          sum[2] += 0.830628753;
                        } else {
                          sum[2] += 0.231404945;
                        }
                      } else {
                        sum[2] += 1.58823514;
                      }
                    }
                  } else {
                    if (sample[1] <104) {
                      sum[2] += 0.579617798;
                    } else {
                      sum[2] += 1.71856534;
                    }
                  }
                }
              }
            } else {
              if (sample[3] <122) {
                if (sample[1] <82) {
                  if (sample[4] <98) {
                    sum[2] += -0.284036309;
                  } else {
                    if (sample[0] <100) {
                      sum[2] += -0.17355372;
                    } else {
                      sum[2] += 0.0642201751;
                    }
                  }
                } else {
                  if (sample[0] <164) {
                    if (sample[0] <154) {
                      if (sample[1] <96) {
                        if (sample[0] <135) {
                          sum[2] += 0.517751455;
                        } else {
                          sum[2] += 0.0121107185;
                        }
                      } else {
                        sum[2] += 0.738532066;
                      }
                    } else {
                      sum[2] += -0.16055046;
                    }
                  } else {
                    if (sample[2] <122) {
                      if (sample[1] <115) {
                        sum[2] += 0.482758611;
                      } else {
                        sum[2] += 1.37554574;
                      }
                    } else {
                      if (sample[4] <91) {
                        sum[2] += -0.17355372;
                      } else {
                        sum[2] += 0.231404945;
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <131) {
                  if (sample[2] <147) {
                    if (sample[2] <77) {
                      sum[2] += -0.271769881;
                    } else {
                      if (sample[3] <126) {
                        if (sample[4] <89) {
                          sum[2] += 0.207838461;
                        } else {
                          sum[2] += -0.165710181;
                        }
                      } else {
                        if (sample[2] <79) {
                          sum[2] += 0.163212419;
                        } else {
                          sum[2] += -0.283513963;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <90) {
                      if (sample[0] <200) {
                        if (sample[3] <129) {
                          sum[2] += 0.288990825;
                        } else {
                          sum[2] += -5.48990142e-09;
                        }
                      } else {
                        sum[2] += -0.217616573;
                      }
                    } else {
                      sum[2] += 0.807692289;
                    }
                  }
                } else {
                  if (sample[3] <135) {
                    if (sample[1] <122) {
                      sum[2] += -0.287224114;
                    } else {
                      if (sample[1] <130) {
                        if (sample[4] <87) {
                          sum[2] += -0.16055046;
                        } else {
                          sum[2] += 0.305676848;
                        }
                      } else {
                        sum[2] += -0.237735853;
                      }
                    }
                  } else {
                    sum[2] += -0.291469723;
                  }
                }
              }
            }
          }
        } else {
          if (sample[1] <84) {
            if (sample[1] <80) {
              if (sample[1] <74) {
                if (sample[1] <72) {
                  if (sample[5] <108) {
                    if (sample[1] <66) {
                      sum[2] += -0.287682623;
                    } else {
                      if (sample[0] <99) {
                        if (sample[4] <108) {
                          sum[2] += 0.673396647;
                        } else {
                          sum[2] += -0.17355372;
                        }
                      } else {
                        if (sample[0] <107) {
                          sum[2] += -0.218336478;
                        } else {
                          sum[2] += 0.0642201751;
                        }
                      }
                    }
                  } else {
                    sum[2] += -0.290460587;
                  }
                } else {
                  if (sample[5] <104) {
                    if (sample[4] <103) {
                      if (sample[3] <112) {
                        sum[2] += 0.0289256144;
                      } else {
                        sum[2] += 0.231404945;
                      }
                    } else {
                      sum[2] += 0.6517241;
                    }
                  } else {
                    if (sample[0] <125) {
                      sum[2] += -0.279766858;
                    } else {
                      if (sample[0] <126) {
                        sum[2] += 0.0642201751;
                      } else {
                        if (sample[2] <82) {
                          sum[2] += -0.241997436;
                        } else {
                          sum[2] += -0.102439024;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[5] <116) {
                  if (sample[2] <66) {
                    if (sample[2] <63) {
                      if (sample[0] <105) {
                        sum[2] += 0.921052575;
                      } else {
                        if (sample[2] <61) {
                          sum[2] += 0.288990825;
                        } else {
                          sum[2] += -0.217616573;
                        }
                      }
                    } else {
                      if (sample[1] <79) {
                        sum[2] += 1.00371468;
                      } else {
                        sum[2] += 0.231404945;
                      }
                    }
                  } else {
                    if (sample[4] <100) {
                      sum[2] += 0.288990825;
                    } else {
                      if (sample[1] <79) {
                        sum[2] += 0.0642201751;
                      } else {
                        sum[2] += -0.212707177;
                      }
                    }
                  }
                } else {
                  if (sample[5] <126) {
                    if (sample[3] <114) {
                      if (sample[3] <112) {
                        sum[2] += -0.193103448;
                      } else {
                        if (sample[3] <113) {
                          sum[2] += 0.231404945;
                        } else {
                          sum[2] += 0.820689619;
                        }
                      }
                    } else {
                      if (sample[0] <124) {
                        sum[2] += -0.260393858;
                      } else {
                        sum[2] += 0.111464955;
                      }
                    }
                  } else {
                    if (sample[3] <125) {
                      if (sample[2] <84) {
                        if (sample[0] <137) {
                          sum[2] += 0.044799991;
                        } else {
                          sum[2] += -0.28383562;
                        }
                      } else {
                        sum[2] += 0.736842096;
                      }
                    } else {
                      sum[2] += -0.284452289;
                    }
                  }
                }
              }
            } else {
              if (sample[5] <132) {
                if (sample[4] <117) {
                  if (sample[2] <74) {
                    if (sample[0] <116) {
                      if (sample[2] <69) {
                        if (sample[2] <68) {
                          sum[2] += 0.163212419;
                        } else {
                          sum[2] += 0.807692289;
                        }
                      } else {
                        if (sample[0] <115) {
                          sum[2] += 0.0289256144;
                        } else {
                          sum[2] += 0.144827574;
                        }
                      }
                    } else {
                      if (sample[0] <118) {
                        sum[2] += 1.14925373;
                      } else {
                        if (sample[0] <120) {
                          sum[2] += -0.0152838491;
                        } else {
                          sum[2] += 0.731737971;
                        }
                      }
                    }
                  } else {
                    sum[2] += -0.17355372;
                  }
                } else {
                  if (sample[4] <126) {
                    sum[2] += 1.32375181;
                  } else {
                    sum[2] += 0.423566848;
                  }
                }
              } else {
                if (sample[2] <90) {
                  if (sample[4] <155) {
                    if (sample[1] <83) {
                      if (sample[2] <60) {
                        if (sample[1] <81) {
                          sum[2] += 0.433884293;
                        } else {
                          sum[2] += -0.16055046;
                        }
                      } else {
                        if (sample[4] <116) {
                          sum[2] += 0.0642201751;
                        } else {
                          sum[2] += 0.926877439;
                        }
                      }
                    } else {
                      if (sample[2] <75) {
                        sum[2] += 0.0642201751;
                      } else {
                        sum[2] += -0.184210524;
                      }
                    }
                  } else {
                    sum[2] += -0.271844655;
                  }
                } else {
                  sum[2] += -0.276606947;
                }
              }
            }
          } else {
            if (sample[3] <121) {
              if (sample[4] <145) {
                if (sample[0] <124) {
                  if (sample[3] <112) {
                    if (sample[0] <117) {
                      sum[2] += 0.735668778;
                    } else {
                      if (sample[4] <110) {
                        if (sample[0] <122) {
                          sum[2] += 0.0451936759;
                        } else {
                          sum[2] += -0.232365146;
                        }
                      } else {
                        sum[2] += 0.552631557;
                      }
                    }
                  } else {
                    if (sample[0] <120) {
                      sum[2] += -5.48990142e-09;
                    } else {
                      sum[2] += 1.1839186;
                    }
                  }
                } else {
                  if (sample[3] <116) {
                    if (sample[0] <138) {
                      if (sample[4] <109) {
                        if (sample[0] <136) {
                          sum[2] += 0.52688998;
                        } else {
                          sum[2] += 1.44959116;
                        }
                      } else {
                        if (sample[3] <114) {
                          sum[2] += 1.67811823;
                        } else {
                          sum[2] += 0.256097555;
                        }
                      }
                    } else {
                      if (sample[0] <185) {
                        if (sample[1] <127) {
                          sum[2] += 1.70071208;
                        } else {
                          sum[2] += 0.812811196;
                        }
                      } else {
                        if (sample[1] <108) {
                          sum[2] += 0.288990825;
                        } else {
                          sum[2] += 1.74594653;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <107) {
                      if (sample[0] <145) {
                        sum[2] += -0.246006384;
                      } else {
                        if (sample[0] <181) {
                          sum[2] += 0.338289946;
                        } else {
                          sum[2] += 1.01612902;
                        }
                      }
                    } else {
                      sum[2] += 1.63417375;
                    }
                  }
                }
              } else {
                if (sample[2] <79) {
                  if (sample[4] <149) {
                    if (sample[0] <148) {
                      sum[2] += 0.989655137;
                    } else {
                      if (sample[1] <107) {
                        if (sample[0] <176) {
                          sum[2] += 0.193370149;
                        } else {
                          sum[2] += -0.212707177;
                        }
                      } else {
                        sum[2] += 0.433884293;
                      }
                    }
                  } else {
                    if (sample[0] <179) {
                      if (sample[1] <89) {
                        sum[2] += -0.262677491;
                      } else {
                        if (sample[2] <61) {
                          sum[2] += 0.163212419;
                        } else {
                          sum[2] += -0.188417614;
                        }
                      }
                    } else {
                      if (sample[0] <200) {
                        sum[2] += -0.28322503;
                      } else {
                        sum[2] += -0.0445859917;
                      }
                    }
                  }
                } else {
                  sum[2] += 0.821299613;
                }
              }
            } else {
              if (sample[3] <124) {
                if (sample[4] <114) {
                  if (sample[2] <101) {
                    if (sample[1] <95) {
                      if (sample[0] <143) {
                        sum[2] += 0.288990825;
                      } else {
                        if (sample[2] <96) {
                          sum[2] += -0.221951216;
                        } else {
                          sum[2] += 0.111464955;
                        }
                      }
                    } else {
                      sum[2] += 0.552631557;
                    }
                  } else {
                    sum[2] += -0.242214531;
                  }
                } else {
                  sum[2] += 1.10923076;
                }
              } else {
                if (sample[2] <100) {
                  if (sample[1] <87) {
                    if (sample[0] <152) {
                      sum[2] += 0.313793093;
                    } else {
                      sum[2] += 0.0289256144;
                    }
                  } else {
                    sum[2] += -0.229257643;
                  }
                } else {
                  sum[2] += -0.289496243;
                }
              }
            }
          }
        }
      }
    } else {
      if (sample[2] <146) {
        if (sample[2] <91) {
          if (sample[2] <60) {
            sum[2] += -0.291634887;
          } else {
            if (sample[3] <107) {
              if (sample[1] <143) {
                if (sample[3] <106) {
                  if (sample[2] <63) {
                    sum[2] += 0.0642201751;
                  } else {
                    sum[2] += -0.217616573;
                  }
                } else {
                  if (sample[0] <206) {
                    sum[2] += 0.288990825;
                  } else {
                    if (sample[0] <214) {
                      sum[2] += -0.0445859917;
                    } else {
                      sum[2] += 0.184210509;
                    }
                  }
                }
              } else {
                if (sample[0] <216) {
                  sum[2] += -0.279766858;
                } else {
                  if (sample[1] <147) {
                    sum[2] += 0.0642201751;
                  } else {
                    sum[2] += -0.217616573;
                  }
                }
              }
            } else {
              if (sample[2] <77) {
                if (sample[1] <125) {
                  if (sample[0] <212) {
                    sum[2] += -0.23517786;
                  } else {
                    if (sample[0] <217) {
                      sum[2] += 0.482758611;
                    } else {
                      sum[2] += -0.217616573;
                    }
                  }
                } else {
                  if (sample[1] <133) {
                    if (sample[4] <166) {
                      sum[2] += 0.231404945;
                    } else {
                      if (sample[1] <129) {
                        if (sample[1] <127) {
                          sum[2] += 0.313793093;
                        } else {
                          sum[2] += 0.989655137;
                        }
                      } else {
                        if (sample[2] <69) {
                          sum[2] += 0.0642201751;
                        } else {
                          sum[2] += 0.433884293;
                        }
                      }
                    }
                  } else {
                    sum[2] += -0.16055046;
                  }
                }
              } else {
                if (sample[4] <147) {
                  sum[2] += 1.30232549;
                } else {
                  if (sample[2] <90) {
                    if (sample[1] <136) {
                      if (sample[1] <129) {
                        if (sample[0] <213) {
                          sum[2] += 0.775086462;
                        } else {
                          sum[2] += -0.0152838491;
                        }
                      } else {
                        sum[2] += 1.13204741;
                      }
                    } else {
                      if (sample[1] <139) {
                        sum[2] += -0.17355372;
                      } else {
                        sum[2] += 0.513761461;
                      }
                    }
                  } else {
                    sum[2] += -0.16055046;
                  }
                }
              }
            }
          }
        } else {
          if (sample[3] <111) {
            if (sample[1] <151) {
              if (sample[3] <109) {
                if (sample[0] <210) {
                  if (sample[4] <123) {
                    sum[2] += 0.144827574;
                  } else {
                    if (sample[4] <132) {
                      sum[2] += -0.258660495;
                    } else {
                      if (sample[3] <107) {
                        sum[2] += -0.17355372;
                      } else {
                        sum[2] += 0.0828402266;
                      }
                    }
                  }
                } else {
                  if (sample[3] <108) {
                    sum[2] += -0.0241379365;
                  } else {
                    sum[2] += 0.670984447;
                  }
                }
              } else {
                if (sample[4] <142) {
                  if (sample[1] <146) {
                    sum[2] += 1.48712432;
                  } else {
                    if (sample[2] <109) {
                      sum[2] += -0.184210524;
                    } else {
                      if (sample[4] <119) {
                        if (sample[2] <116) {
                          sum[2] += 0.316981107;
                        } else {
                          sum[2] += 1.12600529;
                        }
                      } else {
                        sum[2] += 1.44043314;
                      }
                    }
                  }
                } else {
                  if (sample[0] <215) {
                    sum[2] += 0.963302732;
                  } else {
                    sum[2] += -0.0241379365;
                  }
                }
              }
            } else {
              if (sample[1] <153) {
                if (sample[0] <207) {
                  sum[2] += -0.255667508;
                } else {
                  if (sample[2] <100) {
                    sum[2] += 0.0642201751;
                  } else {
                    sum[2] += 1.12903225;
                  }
                }
              } else {
                if (sample[1] <167) {
                  if (sample[2] <131) {
                    if (sample[3] <110) {
                      if (sample[0] <204) {
                        if (sample[2] <125) {
                          sum[2] += 0.288990825;
                        } else {
                          sum[2] += -0.0445859917;
                        }
                      } else {
                        if (sample[0] <220) {
                          sum[2] += -0.254302084;
                        } else {
                          sum[2] += -5.48990142e-09;
                        }
                      }
                    } else {
                      if (sample[4] <108) {
                        if (sample[4] <100) {
                          sum[2] += 0.144827574;
                        } else {
                          sum[2] += -0.15321888;
                        }
                      } else {
                        sum[2] += 0.313793093;
                      }
                    }
                  } else {
                    if (sample[2] <137) {
                      if (sample[2] <132) {
                        if (sample[0] <205) {
                          sum[2] += -0.16055046;
                        } else {
                          sum[2] += 0.275933594;
                        }
                      } else {
                        if (sample[1] <163) {
                          sum[2] += 0.231404945;
                        } else {
                          sum[2] += 0.871698081;
                        }
                      }
                    } else {
                      if (sample[3] <110) {
                        sum[2] += -0.275370568;
                      } else {
                        sum[2] += 0.328729272;
                      }
                    }
                  }
                } else {
                  sum[2] += -0.277219802;
                }
              }
            }
          } else {
            if (sample[3] <120) {
              if (sample[3] <119) {
                if (sample[4] <147) {
                  sum[2] += 1.74794078;
                } else {
                  sum[2] += 0.513761461;
                }
              } else {
                if (sample[4] <95) {
                  sum[2] += 1.53675044;
                } else {
                  if (sample[1] <132) {
                    sum[2] += 0.513761461;
                  } else {
                    sum[2] += -0.200636938;
                  }
                }
              }
            } else {
              if (sample[1] <136) {
                if (sample[2] <134) {
                  sum[2] += 0.313793093;
                } else {
                  if (sample[1] <135) {
                    if (sample[2] <136) {
                      if (sample[0] <210) {
                        sum[2] += -5.48990142e-09;
                      } else {
                        sum[2] += -0.207100585;
                      }
                    } else {
                      sum[2] += -0.266897738;
                    }
                  } else {
                    if (sample[2] <142) {
                      sum[2] += -0.193103448;
                    } else {
                      sum[2] += 0.636363626;
                    }
                  }
                }
              } else {
                sum[2] += 1.60138643;
              }
            }
          }
        }
      } else {
        if (sample[2] <166) {
          if (sample[3] <113) {
            if (sample[3] <111) {
              sum[2] += -0.288722694;
            } else {
              if (sample[1] <174) {
                if (sample[4] <69) {
                  sum[2] += 1.26855886;
                } else {
                  if (sample[1] <167) {
                    if (sample[0] <207) {
                      sum[2] += 0.0289256144;
                    } else {
                      sum[2] += -0.221951216;
                    }
                  } else {
                    if (sample[0] <211) {
                      sum[2] += 0.0642201751;
                    } else {
                      sum[2] += 0.423566848;
                    }
                  }
                }
              } else {
                if (sample[0] <217) {
                  sum[2] += -0.279007971;
                } else {
                  sum[2] += 0.111464955;
                }
              }
            }
          } else {
            if (sample[4] <87) {
              if (sample[4] <52) {
                if (sample[0] <205) {
                  sum[2] += 0.513761461;
                } else {
                  sum[2] += 0.0289256144;
                }
              } else {
                if (sample[3] <127) {
                  if (sample[1] <175) {
                    sum[2] += 1.64542234;
                  } else {
                    sum[2] += 0.552631557;
                  }
                } else {
                  sum[2] += 0.368421048;
                }
              }
            } else {
              if (sample[2] <148) {
                sum[2] += 0.552631557;
              } else {
                sum[2] += -0.281040877;
              }
            }
          }
        } else {
          if (sample[2] <170) {
            if (sample[0] <212) {
              if (sample[0] <211) {
                sum[2] += -0.284783363;
              } else {
                if (sample[1] <131) {
                  sum[2] += -0.259550571;
                } else {
                  if (sample[3] <115) {
                    sum[2] += -0.258660495;
                  } else {
                    sum[2] += 0.513761461;
                  }
                }
              }
            } else {
              if (sample[1] <175) {
                if (sample[1] <131) {
                  sum[2] += -0.265822768;
                } else {
                  if (sample[4] <59) {
                    sum[2] += 1.2234956;
                  } else {
                    sum[2] += 0.368421048;
                  }
                }
              } else {
                if (sample[1] <181) {
                  if (sample[0] <215) {
                    if (sample[1] <179) {
                      sum[2] += -0.062130183;
                    } else {
                      sum[2] += -0.221951216;
                    }
                  } else {
                    sum[2] += 0.0642201751;
                  }
                } else {
                  sum[2] += -0.283284456;
                }
              }
            }
          } else {
            if (sample[2] <173) {
              if (sample[0] <220) {
                if (sample[0] <218) {
                  sum[2] += -0.2845577;
                } else {
                  if (sample[1] <174) {
                    if (sample[1] <131) {
                      sum[2] += -0.221951216;
                    } else {
                      sum[2] += 0.184210509;
                    }
                  } else {
                    sum[2] += -0.266371667;
                  }
                }
              } else {
                if (sample[1] <175) {
                  sum[2] += 0.636363626;
                } else {
                  sum[2] += -0.25454545;
                }
              }
            } else {
              sum[2] += -0.291499972;
            }
          }
        }
      }
    }
  } else {
    if (sample[2] <144) {
      if (sample[3] <111) {
        if (sample[3] <109) {
          if (sample[2] <66) {
            sum[2] += -0.2915245;
          } else {
            if (sample[1] <152) {
              sum[2] += 1.34886646;
            } else {
              sum[2] += -0.286807209;
            }
          }
        } else {
          if (sample[1] <160) {
            if (sample[1] <125) {
              sum[2] += -0.25454545;
            } else {
              if (sample[0] <237) {
                if (sample[1] <132) {
                  sum[2] += 0.517751455;
                } else {
                  sum[2] += 1.45447457;
                }
              } else {
                if (sample[1] <149) {
                  sum[2] += 0.853658497;
                } else {
                  sum[2] += 0.0289256144;
                }
              }
            }
          } else {
            if (sample[1] <166) {
              if (sample[2] <131) {
                if (sample[1] <161) {
                  if (sample[0] <226) {
                    sum[2] += 0.288990825;
                  } else {
                    sum[2] += -0.17355372;
                  }
                } else {
                  if (sample[4] <111) {
                    sum[2] += -0.262677491;
                  } else {
                    if (sample[4] <112) {
                      sum[2] += 0.0289256144;
                    } else {
                      sum[2] += -0.184210524;
                    }
                  }
                }
              } else {
                if (sample[0] <224) {
                  sum[2] += -5.48990142e-09;
                } else {
                  if (sample[1] <165) {
                    sum[2] += 0.433884293;
                  } else {
                    sum[2] += 0.0289256144;
                  }
                }
              }
            } else {
              sum[2] += -0.284132838;
            }
          }
        }
      } else {
        if (sample[1] <127) {
          if (sample[0] <226) {
            sum[2] += -0.16055046;
          } else {
            sum[2] += 0.513761461;
          }
        } else {
          if (sample[3] <118) {
            sum[2] += 1.74926567;
          } else {
            sum[2] += 0.735668778;
          }
        }
      }
    } else {
      if (sample[2] <152) {
        if (sample[1] <171) {
          if (sample[3] <113) {
            sum[2] += 0.830039501;
          } else {
            sum[2] += 1.68726516;
          }
        } else {
          if (sample[1] <173) {
            if (sample[0] <233) {
              sum[2] += -0.17355372;
            } else {
              sum[2] += 0.0642201751;
            }
          } else {
            sum[2] += -0.288711995;
          }
        }
      } else {
        if (sample[2] <165) {
          if (sample[1] <175) {
            if (sample[1] <173) {
              sum[2] += 1.63747692;
            } else {
              sum[2] += 0.513761461;
            }
          } else {
            if (sample[3] <113) {
              sum[2] += -0.290885746;
            } else {
              sum[2] += 0.0642201751;
            }
          }
        } else {
          if (sample[2] <166) {
            if (sample[1] <177) {
              sum[2] += 0.513761461;
            } else {
              sum[2] += -0.280439913;
            }
          } else {
            sum[2] += -0.291021496;
          }
        }
      }
    }
  }


  if (sample[2] <57) {
    if (sample[1] <79) {
      if (sample[1] <73) {
        if (sample[1] <69) {
          if (sample[1] <62) {
            if (sample[3] <48) {
              if (sample[1] <60) {
                sum[3] += -0.291562289;
              } else {
                if (sample[2] <36) {
                  if (sample[0] <5) {
                    if (sample[0] <1) {
                      if (sample[2] <31) {
                        if (sample[1] <61) {
                          sum[3] += 0.193370149;
                        } else {
                          sum[3] += -0.16055046;
                        }
                      } else {
                        sum[3] += 0.358725727;
                      }
                    } else {
                      sum[3] += -0.207100585;
                    }
                  } else {
                    if (sample[0] <11) {
                      sum[3] += 1.06329107;
                    } else {
                      if (sample[2] <34) {
                        sum[3] += 0.433884293;
                      } else {
                        if (sample[3] <47) {
                          sum[3] += -0.17355372;
                        } else {
                          sum[3] += 0.0642201751;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <38) {
                    if (sample[3] <45) {
                      if (sample[0] <3) {
                        if (sample[1] <61) {
                          sum[3] += -0.184210524;
                        } else {
                          sum[3] += 0.0170731638;
                        }
                      } else {
                        sum[3] += 0.495121926;
                      }
                    } else {
                      sum[3] += -0.23517786;
                    }
                  } else {
                    if (sample[2] <44) {
                      if (sample[0] <1) {
                        if (sample[2] <42) {
                          sum[3] += -0.0207920857;
                        } else {
                          sum[3] += -0.193954661;
                        }
                      } else {
                        if (sample[0] <18) {
                          sum[3] += -0.222902626;
                        } else {
                          sum[3] += -0.287575155;
                        }
                      }
                    } else {
                      sum[3] += -0.291264623;
                    }
                  }
                }
              }
            } else {
              if (sample[1] <56) {
                if (sample[1] <40) {
                  sum[3] += -0.291166782;
                } else {
                  if (sample[0] <1) {
                    if (sample[1] <51) {
                      if (sample[2] <2) {
                        if (sample[1] <44) {
                          sum[3] += -0.0502632894;
                        } else {
                          sum[3] += 0.504403472;
                        }
                      } else {
                        if (sample[1] <47) {
                          sum[3] += -0.265859425;
                        } else {
                          sum[3] += -0.18329443;
                        }
                      }
                    } else {
                      if (sample[2] <10) {
                        if (sample[3] <56) {
                          sum[3] += 0.771565437;
                        } else {
                          sum[3] += 1.52230477;
                        }
                      } else {
                        if (sample[1] <53) {
                          sum[3] += -0.0682321712;
                        } else {
                          sum[3] += 0.30253765;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <10) {
                      if (sample[2] <1) {
                        if (sample[1] <52) {
                          sum[3] += 0.0170731638;
                        } else {
                          sum[3] += 1.14088392;
                        }
                      } else {
                        if (sample[2] <5) {
                          sum[3] += -0.112000003;
                        } else {
                          sum[3] += -0.284615368;
                        }
                      }
                    } else {
                      sum[3] += -0.291102558;
                    }
                  }
                }
              } else {
                if (sample[0] <10) {
                  if (sample[2] <21) {
                    if (sample[4] <251) {
                      if (sample[1] <59) {
                        if (sample[2] <9) {
                          sum[3] += 0.594339609;
                        } else {
                          sum[3] += -0.229257643;
                        }
                      } else {
                        if (sample[3] <54) {
                          sum[3] += 0.231404945;
                        } else {
                          sum[3] += 1.4315424;
                        }
                      }
                    } else {
                      sum[3] += 1.63343191;
                    }
                  } else {
                    if (sample[2] <25) {
                      if (sample[2] <23) {
                        if (sample[1] <58) {
                          sum[3] += 0.25454542;
                        } else {
                          sum[3] += 0.679104447;
                        }
                      } else {
                        sum[3] += 0.967310488;
                      }
                    } else {
                      if (sample[1] <60) {
                        sum[3] += -0.212707177;
                      } else {
                        if (sample[0] <6) {
                          sum[3] += -0.0241379365;
                        } else {
                          sum[3] += 0.989655137;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <15) {
                    if (sample[1] <60) {
                      if (sample[1] <58) {
                        if (sample[2] <9) {
                          sum[3] += -0.122270741;
                        } else {
                          sum[3] += -0.25578168;
                        }
                      } else {
                        if (sample[2] <31) {
                          sum[3] += 0.43118754;
                        } else {
                          sum[3] += -0.217616573;
                        }
                      }
                    } else {
                      if (sample[2] <13) {
                        if (sample[2] <5) {
                          sum[3] += 1.10526311;
                        } else {
                          sum[3] += 0.136585355;
                        }
                      } else {
                        sum[3] += 1.26236427;
                      }
                    }
                  } else {
                    if (sample[0] <19) {
                      if (sample[2] <15) {
                        if (sample[2] <1) {
                          sum[3] += -0.0773480684;
                        } else {
                          sum[3] += -0.247880295;
                        }
                      } else {
                        if (sample[1] <59) {
                          sum[3] += -0.177934021;
                        } else {
                          sum[3] += 0.184642419;
                        }
                      }
                    } else {
                      if (sample[0] <23) {
                        if (sample[4] <220) {
                          sum[3] += -0.274899215;
                        } else {
                          sum[3] += -0.18672739;
                        }
                      } else {
                        sum[3] += -0.290785939;
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[0] <12) {
              if (sample[3] <47) {
                if (sample[3] <41) {
                  if (sample[3] <39) {
                    if (sample[3] <37) {
                      sum[3] += -0.284804195;
                    } else {
                      if (sample[4] <235) {
                        sum[3] += -0.280439913;
                      } else {
                        if (sample[0] <3) {
                          sum[3] += -0.25058493;
                        } else {
                          sum[3] += -0.0841035172;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <248) {
                      if (sample[1] <63) {
                        sum[3] += -0.257719696;
                      } else {
                        if (sample[4] <220) {
                          sum[3] += -0.242214531;
                        } else {
                          sum[3] += 0.332249641;
                        }
                      }
                    } else {
                      if (sample[2] <47) {
                        if (sample[1] <64) {
                          sum[3] += -0.0995623693;
                        } else {
                          sum[3] += -0.271844655;
                        }
                      } else {
                        if (sample[2] <48) {
                          sum[3] += 0.433884293;
                        } else {
                          sum[3] += -0.17355372;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <7) {
                    if (sample[1] <65) {
                      if (sample[2] <39) {
                        if (sample[2] <37) {
                          sum[3] += 0.221518964;
                        } else {
                          sum[3] += 0.484886616;
                        }
                      } else {
                        if (sample[2] <41) {
                          sum[3] += -0.06363637;
                        } else {
                          sum[3] += 0.375609726;
                        }
                      }
                    } else {
                      if (sample[1] <67) {
                        sum[3] += -0.253351212;
                      } else {
                        if (sample[2] <41) {
                          sum[3] += 0.412663728;
                        } else {
                          sum[3] += -0.193103448;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <43) {
                      if (sample[2] <42) {
                        sum[3] += 0.921052575;
                      } else {
                        if (sample[1] <67) {
                          sum[3] += -0.0249406248;
                        } else {
                          sum[3] += 0.735668778;
                        }
                      }
                    } else {
                      if (sample[1] <65) {
                        if (sample[4] <219) {
                          sum[3] += 0.0289256144;
                        } else {
                          sum[3] += 0.614634097;
                        }
                      } else {
                        if (sample[3] <45) {
                          sum[3] += 1.21247101;
                        } else {
                          sum[3] += 0.564516127;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <28) {
                  sum[3] += 1.71345496;
                } else {
                  if (sample[0] <7) {
                    sum[3] += 0.368421048;
                  } else {
                    sum[3] += 1.18461537;
                  }
                }
              }
            } else {
              if (sample[0] <16) {
                if (sample[2] <36) {
                  if (sample[4] <211) {
                    if (sample[3] <59) {
                      if (sample[2] <26) {
                        sum[3] += 1.39419079;
                      } else {
                        sum[3] += 0.409433931;
                      }
                    } else {
                      if (sample[0] <14) {
                        sum[3] += -5.48990142e-09;
                      } else {
                        sum[3] += -0.193103448;
                      }
                    }
                  } else {
                    sum[3] += 1.39776349;
                  }
                } else {
                  if (sample[3] <42) {
                    if (sample[2] <45) {
                      sum[3] += -5.48990142e-09;
                    } else {
                      if (sample[4] <209) {
                        sum[3] += -0.277947456;
                      } else {
                        if (sample[2] <50) {
                          sum[3] += 0.0642201751;
                        } else {
                          sum[3] += -0.207100585;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <44) {
                      if (sample[0] <14) {
                        if (sample[4] <206) {
                          sum[3] += 0.113718398;
                        } else {
                          sum[3] += -0.130705401;
                        }
                      } else {
                        if (sample[3] <46) {
                          sum[3] += -0.242214531;
                        } else {
                          sum[3] += 0.0642201751;
                        }
                      }
                    } else {
                      if (sample[0] <15) {
                        sum[3] += 0.517751455;
                      } else {
                        sum[3] += -0.16055046;
                      }
                    }
                  }
                }
              } else {
                if (sample[0] <30) {
                  if (sample[4] <203) {
                    if (sample[3] <54) {
                      if (sample[3] <51) {
                        sum[3] += -0.290427864;
                      } else {
                        if (sample[1] <66) {
                          sum[3] += -0.266371667;
                        } else {
                          sum[3] += 0.112903215;
                        }
                      }
                    } else {
                      if (sample[1] <67) {
                        if (sample[1] <65) {
                          sum[3] += -0.159172207;
                        } else {
                          sum[3] += 0.193995371;
                        }
                      } else {
                        if (sample[0] <25) {
                          sum[3] += 0.227810636;
                        } else {
                          sum[3] += 1.17313015;
                        }
                      }
                    }
                  } else {
                    sum[3] += 1.5022471;
                  }
                } else {
                  sum[3] += -0.290436417;
                }
              }
            }
          }
        } else {
          if (sample[0] <30) {
            if (sample[2] <39) {
              if (sample[3] <45) {
                sum[3] += 0.231404945;
              } else {
                if (sample[4] <196) {
                  if (sample[3] <52) {
                    sum[3] += 0.267515898;
                  } else {
                    if (sample[3] <54) {
                      sum[3] += 0.928114951;
                    } else {
                      sum[3] += 1.56315982;
                    }
                  }
                } else {
                  sum[3] += 1.73614764;
                }
              }
            } else {
              if (sample[2] <47) {
                if (sample[0] <14) {
                  if (sample[0] <1) {
                    if (sample[2] <43) {
                      sum[3] += 0.6517241;
                    } else {
                      sum[3] += -0.0445859917;
                    }
                  } else {
                    if (sample[2] <40) {
                      sum[3] += 0.288990825;
                    } else {
                      sum[3] += 1.02256525;
                    }
                  }
                } else {
                  if (sample[2] <42) {
                    if (sample[2] <40) {
                      sum[3] += 0.0289256144;
                    } else {
                      sum[3] += 0.771565437;
                    }
                  } else {
                    if (sample[4] <150) {
                      sum[3] += 0.513761461;
                    } else {
                      if (sample[4] <154) {
                        sum[3] += -0.200636938;
                      } else {
                        if (sample[4] <175) {
                          sum[3] += 0.18089886;
                        } else {
                          sum[3] += -0.0813953504;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <45) {
                  if (sample[4] <215) {
                    if (sample[1] <72) {
                      if (sample[0] <26) {
                        sum[3] += -0.285433918;
                      } else {
                        if (sample[1] <71) {
                          sum[3] += -0.241475016;
                        } else {
                          sum[3] += -0.0415019803;
                        }
                      }
                    } else {
                      if (sample[3] <42) {
                        if (sample[3] <41) {
                          sum[3] += -0.16055046;
                        } else {
                          sum[3] += 0.231404945;
                        }
                      } else {
                        if (sample[2] <51) {
                          sum[3] += -0.0241379365;
                        } else {
                          sum[3] += -0.23517786;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <9) {
                      if (sample[2] <51) {
                        if (sample[0] <1) {
                          sum[3] += -0.23517786;
                        } else {
                          sum[3] += 0.193370149;
                        }
                      } else {
                        sum[3] += -0.27248323;
                      }
                    } else {
                      if (sample[2] <52) {
                        sum[3] += 0.614634097;
                      } else {
                        sum[3] += 0.0828402266;
                      }
                    }
                  }
                } else {
                  if (sample[2] <49) {
                    if (sample[2] <48) {
                      if (sample[1] <71) {
                        sum[3] += -0.0241379365;
                      } else {
                        if (sample[0] <27) {
                          sum[3] += 0.0289256144;
                        } else {
                          sum[3] += 0.288990825;
                        }
                      }
                    } else {
                      sum[3] += -0.229257643;
                    }
                  } else {
                    if (sample[0] <27) {
                      sum[3] += 0.0642201751;
                    } else {
                      if (sample[1] <71) {
                        sum[3] += 0.0642201751;
                      } else {
                        sum[3] += 0.807692289;
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[0] <54) {
              if (sample[4] <166) {
                if (sample[2] <36) {
                  if (sample[3] <65) {
                    if (sample[4] <147) {
                      if (sample[0] <34) {
                        sum[3] += -0.217616573;
                      } else {
                        if (sample[2] <35) {
                          sum[3] += 0.193370149;
                        } else {
                          sum[3] += 0.738532066;
                        }
                      }
                    } else {
                      sum[3] += 0.735668778;
                    }
                  } else {
                    if (sample[1] <72) {
                      if (sample[3] <78) {
                        if (sample[0] <48) {
                          sum[3] += -0.0462351441;
                        } else {
                          sum[3] += -0.237892941;
                        }
                      } else {
                        sum[3] += 0.368421048;
                      }
                    } else {
                      if (sample[2] <29) {
                        sum[3] += 0.735668778;
                      } else {
                        sum[3] += -5.48990142e-09;
                      }
                    }
                  }
                } else {
                  if (sample[2] <48) {
                    if (sample[3] <64) {
                      if (sample[2] <40) {
                        if (sample[2] <39) {
                          sum[3] += -0.15743944;
                        } else {
                          sum[3] += 0.256097555;
                        }
                      } else {
                        if (sample[3] <63) {
                          sum[3] += -0.228107497;
                        } else {
                          sum[3] += -0.0141987903;
                        }
                      }
                    } else {
                      sum[3] += -0.284452289;
                    }
                  } else {
                    if (sample[0] <32) {
                      if (sample[4] <143) {
                        if (sample[2] <54) {
                          sum[3] += -0.0290456489;
                        } else {
                          sum[3] += -0.225806445;
                        }
                      } else {
                        sum[3] += -0.248031497;
                      }
                    } else {
                      sum[3] += -0.285867751;
                    }
                  }
                }
              } else {
                if (sample[1] <70) {
                  if (sample[2] <22) {
                    sum[3] += 1.05181348;
                  } else {
                    if (sample[0] <48) {
                      sum[3] += 0.231404945;
                    } else {
                      sum[3] += -0.17355372;
                    }
                  }
                } else {
                  sum[3] += 1.62620151;
                }
              }
            } else {
              sum[3] += -0.289570242;
            }
          }
        }
      } else {
        if (sample[0] <52) {
          if (sample[2] <37) {
            if (sample[4] <144) {
              if (sample[1] <76) {
                if (sample[0] <35) {
                  sum[3] += -0.16055046;
                } else {
                  if (sample[3] <71) {
                    if (sample[4] <132) {
                      sum[3] += 0.0642201751;
                    } else {
                      sum[3] += 0.768545926;
                    }
                  } else {
                    sum[3] += 0.0289256144;
                  }
                }
              } else {
                if (sample[4] <137) {
                  sum[3] += 0.288990825;
                } else {
                  sum[3] += 1.30597007;
                }
              }
            } else {
              sum[3] += 1.7341336;
            }
          } else {
            if (sample[2] <43) {
              if (sample[4] <116) {
                if (sample[3] <63) {
                  sum[3] += 0.423566848;
                } else {
                  if (sample[4] <113) {
                    sum[3] += -0.23517786;
                  } else {
                    sum[3] += 0.111464955;
                  }
                }
              } else {
                if (sample[0] <44) {
                  if (sample[1] <75) {
                    if (sample[0] <39) {
                      if (sample[2] <38) {
                        sum[3] += 0.0642201751;
                      } else {
                        if (sample[0] <20) {
                          sum[3] += 1.14905655;
                        } else {
                          sum[3] += 0.546599448;
                        }
                      }
                    } else {
                      sum[3] += 0.144827574;
                    }
                  } else {
                    if (sample[4] <134) {
                      if (sample[3] <62) {
                        sum[3] += 0.732851923;
                      } else {
                        if (sample[4] <127) {
                          sum[3] += -0.193103448;
                        } else {
                          sum[3] += 0.423566848;
                        }
                      }
                    } else {
                      if (sample[0] <23) {
                        if (sample[1] <76) {
                          sum[3] += -0.17355372;
                        } else {
                          sum[3] += 0.368421048;
                        }
                      } else {
                        if (sample[1] <77) {
                          sum[3] += -0.232365146;
                        } else {
                          sum[3] += -0.0906735808;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[1] <76) {
                    if (sample[2] <39) {
                      sum[3] += -0.0241379365;
                    } else {
                      if (sample[4] <120) {
                        if (sample[0] <49) {
                          sum[3] += 0.0289256144;
                        } else {
                          sum[3] += 0.288990825;
                        }
                      } else {
                        sum[3] += 0.513761461;
                      }
                    }
                  } else {
                    if (sample[2] <42) {
                      sum[3] += 1.0950495;
                    } else {
                      sum[3] += 0.368421048;
                    }
                  }
                }
              }
            } else {
              if (sample[2] <46) {
                if (sample[1] <77) {
                  if (sample[4] <169) {
                    if (sample[3] <51) {
                      sum[3] += 0.46408838;
                    } else {
                      if (sample[4] <112) {
                        if (sample[4] <110) {
                          sum[3] += -0.0826771706;
                        } else {
                          sum[3] += 0.256097555;
                        }
                      } else {
                        sum[3] += -0.227121457;
                      }
                    }
                  } else {
                    sum[3] += -0.240072206;
                  }
                } else {
                  if (sample[2] <44) {
                    if (sample[1] <78) {
                      sum[3] += -0.193103448;
                    } else {
                      sum[3] += 0.231404945;
                    }
                  } else {
                    if (sample[1] <78) {
                      sum[3] += 0.495121926;
                    } else {
                      if (sample[0] <40) {
                        sum[3] += -0.16055046;
                      } else {
                        if (sample[0] <48) {
                          sum[3] += 0.288990825;
                        } else {
                          sum[3] += 0.0642201751;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <78) {
                  if (sample[4] <162) {
                    if (sample[0] <49) {
                      if (sample[4] <96) {
                        sum[3] += -0.283457786;
                      } else {
                        if (sample[3] <58) {
                          sum[3] += -0.238138199;
                        } else {
                          sum[3] += -0.0889145508;
                        }
                      }
                    } else {
                      if (sample[1] <77) {
                        if (sample[4] <98) {
                          sum[3] += -0.218650967;
                        } else {
                          sum[3] += 0.0642201751;
                        }
                      } else {
                        if (sample[0] <50) {
                          sum[3] += 0.112903215;
                        } else {
                          sum[3] += -0.172307685;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <165) {
                      sum[3] += 0.368421048;
                    } else {
                      if (sample[1] <75) {
                        if (sample[0] <23) {
                          sum[3] += -0.131301284;
                        } else {
                          sum[3] += 0.162790686;
                        }
                      } else {
                        if (sample[2] <48) {
                          sum[3] += -0.0773480684;
                        } else {
                          sum[3] += -0.274912059;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <51) {
                    if (sample[2] <55) {
                      sum[3] += -0.261954248;
                    } else {
                      if (sample[0] <36) {
                        sum[3] += 0.144827574;
                      } else {
                        sum[3] += -0.212707177;
                      }
                    }
                  } else {
                    if (sample[2] <55) {
                      if (sample[4] <93) {
                        sum[3] += 0.423566848;
                      } else {
                        if (sample[0] <46) {
                          sum[3] += 0.187615514;
                        } else {
                          sum[3] += -0.153172866;
                        }
                      }
                    } else {
                      sum[3] += -0.244186044;
                    }
                  }
                }
              }
            }
          }
        } else {
          if (sample[0] <58) {
            if (sample[4] <135) {
              if (sample[4] <118) {
                if (sample[4] <107) {
                  if (sample[0] <54) {
                    if (sample[4] <92) {
                      if (sample[2] <55) {
                        sum[3] += -0.280544728;
                      } else {
                        if (sample[3] <57) {
                          sum[3] += -0.22047244;
                        } else {
                          sum[3] += -0.0415019803;
                        }
                      }
                    } else {
                      if (sample[4] <98) {
                        if (sample[4] <95) {
                          sum[3] += -0.122270741;
                        } else {
                          sum[3] += 0.184210509;
                        }
                      } else {
                        sum[3] += -0.247692302;
                      }
                    }
                  } else {
                    sum[3] += -0.270906061;
                  }
                } else {
                  if (sample[3] <71) {
                    if (sample[2] <44) {
                      if (sample[3] <70) {
                        sum[3] += -0.193103448;
                      } else {
                        sum[3] += -0.0241379365;
                      }
                    } else {
                      if (sample[0] <55) {
                        sum[3] += 0.288990825;
                      } else {
                        sum[3] += 0.0642201751;
                      }
                    }
                  } else {
                    sum[3] += -0.261194021;
                  }
                }
              } else {
                if (sample[0] <57) {
                  if (sample[0] <53) {
                    sum[3] += -0.0445859917;
                  } else {
                    if (sample[1] <77) {
                      if (sample[0] <55) {
                        sum[3] += -0.184210524;
                      } else {
                        sum[3] += 0.433884293;
                      }
                    } else {
                      sum[3] += 0.838842928;
                    }
                  }
                } else {
                  sum[3] += -0.193103448;
                }
              }
            } else {
              if (sample[4] <151) {
                sum[3] += 0.482758611;
              } else {
                sum[3] += 1.67771602;
              }
            }
          } else {
            if (sample[3] <91) {
              if (sample[4] <143) {
                if (sample[4] <123) {
                  if (sample[4] <109) {
                    sum[3] += -0.283560574;
                  } else {
                    if (sample[3] <79) {
                      if (sample[4] <113) {
                        if (sample[1] <77) {
                          sum[3] += -0.225806445;
                        } else {
                          sum[3] += -0.0241379365;
                        }
                      } else {
                        if (sample[4] <117) {
                          sum[3] += 0.174273849;
                        } else {
                          sum[3] += -0.062130183;
                        }
                      }
                    } else {
                      if (sample[0] <75) {
                        if (sample[2] <44) {
                          sum[3] += -0.272660464;
                        } else {
                          sum[3] += -0.151624545;
                        }
                      } else {
                        if (sample[0] <76) {
                          sum[3] += 0.144827574;
                        } else {
                          sum[3] += -0.240072206;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <80) {
                    if (sample[0] <62) {
                      if (sample[1] <77) {
                        sum[3] += 0.288990825;
                      } else {
                        sum[3] += 0.989655137;
                      }
                    } else {
                      sum[3] += 0.231404945;
                    }
                  } else {
                    if (sample[3] <86) {
                      if (sample[0] <66) {
                        sum[3] += -0.200636938;
                      } else {
                        if (sample[1] <75) {
                          sum[3] += -0.16055046;
                        } else {
                          sum[3] += 0.272117943;
                        }
                      }
                    } else {
                      if (sample[0] <73) {
                        sum[3] += -0.270430893;
                      } else {
                        if (sample[0] <75) {
                          sum[3] += 0.267515898;
                        } else {
                          sum[3] += -0.221951216;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <75) {
                  if (sample[2] <16) {
                    sum[3] += 1.05660367;
                  } else {
                    if (sample[0] <66) {
                      sum[3] += 0.423566848;
                    } else {
                      if (sample[3] <88) {
                        sum[3] += -0.17355372;
                      } else {
                        sum[3] += 0.0642201751;
                      }
                    }
                  }
                } else {
                  if (sample[3] <79) {
                    sum[3] += 0.372781038;
                  } else {
                    if (sample[4] <151) {
                      sum[3] += 0.6517241;
                    } else {
                      sum[3] += 1.58436978;
                    }
                  }
                }
              }
            } else {
              if (sample[0] <133) {
                if (sample[2] <15) {
                  if (sample[2] <13) {
                    if (sample[0] <98) {
                      if (sample[1] <74) {
                        sum[3] += -5.48990142e-09;
                      } else {
                        sum[3] += 0.861061871;
                      }
                    } else {
                      if (sample[2] <7) {
                        if (sample[3] <98) {
                          sum[3] += 0.0289256144;
                        } else {
                          sum[3] += -0.283353835;
                        }
                      } else {
                        if (sample[4] <239) {
                          sum[3] += -0.0664718822;
                        } else {
                          sum[3] += 0.677419305;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <115) {
                      if (sample[3] <99) {
                        sum[3] += 0.433884293;
                      } else {
                        if (sample[0] <113) {
                          sum[3] += -0.247692302;
                        } else {
                          sum[3] += 0.0642201751;
                        }
                      }
                    } else {
                      if (sample[0] <125) {
                        sum[3] += 1.48883235;
                      } else {
                        sum[3] += 0.579617798;
                      }
                    }
                  }
                } else {
                  if (sample[2] <31) {
                    if (sample[3] <98) {
                      if (sample[1] <77) {
                        if (sample[4] <175) {
                          sum[3] += -0.0631769001;
                        } else {
                          sum[3] += -0.246006384;
                        }
                      } else {
                        sum[3] += 0.267515898;
                      }
                    } else {
                      if (sample[0] <118) {
                        sum[3] += -0.276812941;
                      } else {
                        if (sample[2] <29) {
                          sum[3] += -0.188745603;
                        } else {
                          sum[3] += 0.0828402266;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <187) {
                      sum[3] += -0.288643718;
                    } else {
                      if (sample[1] <77) {
                        sum[3] += 0.0642201751;
                      } else {
                        sum[3] += -0.17355372;
                      }
                    }
                  }
                }
              } else {
                sum[3] += -0.291384727;
              }
            }
          }
        }
      }
    } else {
      if (sample[3] <96) {
        if (sample[4] <125) {
          if (sample[1] <90) {
            if (sample[1] <84) {
              if (sample[0] <69) {
                if (sample[4] <118) {
                  if (sample[1] <83) {
                    if (sample[4] <91) {
                      if (sample[0] <53) {
                        if (sample[4] <90) {
                          sum[3] += 0.0642201751;
                        } else {
                          sum[3] += -0.062130183;
                        }
                      } else {
                        if (sample[0] <68) {
                          sum[3] += -0.256164014;
                        } else {
                          sum[3] += -0.153172866;
                        }
                      }
                    } else {
                      if (sample[4] <107) {
                        if (sample[3] <60) {
                          sum[3] += -0.217830107;
                        } else {
                          sum[3] += -0.088732399;
                        }
                      } else {
                        if (sample[0] <44) {
                          sum[3] += -0.217616573;
                        } else {
                          sum[3] += -0.00403071847;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <53) {
                      if (sample[4] <105) {
                        sum[3] += 0.73114115;
                      } else {
                        if (sample[0] <64) {
                          sum[3] += 0.024249414;
                        } else {
                          sum[3] += 0.482758611;
                        }
                      }
                    } else {
                      if (sample[2] <55) {
                        if (sample[0] <53) {
                          sum[3] += -5.48990142e-09;
                        } else {
                          sum[3] += -0.240072206;
                        }
                      } else {
                        if (sample[0] <60) {
                          sum[3] += -0.0894568712;
                        } else {
                          sum[3] += 0.22580643;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <58) {
                    if (sample[3] <54) {
                      sum[3] += -0.246006384;
                    } else {
                      if (sample[2] <50) {
                        sum[3] += -0.212707177;
                      } else {
                        sum[3] += 0.288990825;
                      }
                    }
                  } else {
                    if (sample[1] <82) {
                      if (sample[0] <53) {
                        if (sample[0] <48) {
                          sum[3] += 0.797927439;
                        } else {
                          sum[3] += 0.267515898;
                        }
                      } else {
                        if (sample[1] <80) {
                          sum[3] += 0.423566848;
                        } else {
                          sum[3] += -0.184210524;
                        }
                      }
                    } else {
                      if (sample[0] <51) {
                        if (sample[2] <45) {
                          sum[3] += -0.212707177;
                        } else {
                          sum[3] += 0.433884293;
                        }
                      } else {
                        sum[3] += 1.01547384;
                      }
                    }
                  }
                }
              } else {
                if (sample[4] <105) {
                  if (sample[1] <83) {
                    sum[3] += -0.282545447;
                  } else {
                    if (sample[3] <84) {
                      if (sample[2] <55) {
                        if (sample[3] <81) {
                          sum[3] += -0.138339922;
                        } else {
                          sum[3] += 0.136585355;
                        }
                      } else {
                        sum[3] += -0.249258161;
                      }
                    } else {
                      if (sample[2] <51) {
                        if (sample[2] <50) {
                          sum[3] += -0.207100585;
                        } else {
                          sum[3] += 0.0642201751;
                        }
                      } else {
                        sum[3] += -0.279399127;
                      }
                    }
                  }
                } else {
                  if (sample[3] <82) {
                    if (sample[4] <114) {
                      if (sample[4] <109) {
                        sum[3] += 0.0642201751;
                      } else {
                        sum[3] += -0.184210524;
                      }
                    } else {
                      if (sample[2] <45) {
                        sum[3] += 0.0642201751;
                      } else {
                        sum[3] += 0.838842928;
                      }
                    }
                  } else {
                    if (sample[4] <108) {
                      if (sample[0] <81) {
                        if (sample[0] <78) {
                          sum[3] += -0.193103448;
                        } else {
                          sum[3] += 0.163212419;
                        }
                      } else {
                        sum[3] += -0.193954661;
                      }
                    } else {
                      if (sample[1] <81) {
                        sum[3] += -0.282717586;
                      } else {
                        if (sample[3] <89) {
                          sum[3] += -0.129013076;
                        } else {
                          sum[3] += -0.223404258;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[0] <77) {
                if (sample[2] <49) {
                  if (sample[4] <110) {
                    if (sample[0] <58) {
                      sum[3] += 0.368421048;
                    } else {
                      sum[3] += -0.0241379365;
                    }
                  } else {
                    if (sample[0] <51) {
                      if (sample[1] <87) {
                        if (sample[4] <116) {
                          sum[3] += 0.0289256144;
                        } else {
                          sum[3] += 0.833794951;
                        }
                      } else {
                        sum[3] += -0.17355372;
                      }
                    } else {
                      if (sample[3] <82) {
                        if (sample[1] <85) {
                          sum[3] += 0.862702668;
                        } else {
                          sum[3] += 1.23104298;
                        }
                      } else {
                        sum[3] += 0.0642201751;
                      }
                    }
                  }
                } else {
                  if (sample[3] <60) {
                    if (sample[4] <111) {
                      if (sample[2] <52) {
                        sum[3] += 0.482758611;
                      } else {
                        if (sample[3] <58) {
                          sum[3] += 0.170487091;
                        } else {
                          sum[3] += -0.256723702;
                        }
                      }
                    } else {
                      if (sample[1] <86) {
                        if (sample[2] <52) {
                          sum[3] += 0.0289256144;
                        } else {
                          sum[3] += -0.217616573;
                        }
                      } else {
                        sum[3] += -0.26835236;
                      }
                    }
                  } else {
                    if (sample[4] <93) {
                      if (sample[0] <57) {
                        sum[3] += 0.423566848;
                      } else {
                        if (sample[1] <86) {
                          sum[3] += -0.180376604;
                        } else {
                          sum[3] += 0.0354969464;
                        }
                      }
                    } else {
                      if (sample[4] <106) {
                        if (sample[0] <73) {
                          sum[3] += 0.406819046;
                        } else {
                          sum[3] += -7.58604557e-09;
                        }
                      } else {
                        if (sample[3] <79) {
                          sum[3] += 0.783095062;
                        } else {
                          sum[3] += 0.113718398;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <87) {
                  if (sample[4] <112) {
                    if (sample[2] <55) {
                      if (sample[2] <52) {
                        if (sample[1] <88) {
                          sum[3] += -0.232365146;
                        } else {
                          sum[3] += -0.0241379365;
                        }
                      } else {
                        if (sample[4] <102) {
                          sum[3] += -0.00619469769;
                        } else {
                          sum[3] += 0.372781038;
                        }
                      }
                    } else {
                      if (sample[1] <89) {
                        sum[3] += -0.253351212;
                      } else {
                        sum[3] += 0.0289256144;
                      }
                    }
                  } else {
                    if (sample[1] <85) {
                      sum[3] += -0.16055046;
                    } else {
                      if (sample[0] <81) {
                        if (sample[1] <87) {
                          sum[3] += 0.267515898;
                        } else {
                          sum[3] += 0.797927439;
                        }
                      } else {
                        if (sample[0] <83) {
                          sum[3] += -0.0445859917;
                        } else {
                          sum[3] += 0.368421048;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <96) {
                    if (sample[2] <53) {
                      if (sample[1] <87) {
                        if (sample[0] <82) {
                          sum[3] += -0.0445859917;
                        } else {
                          sum[3] += -0.218252152;
                        }
                      } else {
                        if (sample[0] <91) {
                          sum[3] += 0.0856793001;
                        } else {
                          sum[3] += -0.202078521;
                        }
                      }
                    } else {
                      if (sample[4] <110) {
                        sum[3] += -0.268643141;
                      } else {
                        sum[3] += 0.0289256144;
                      }
                    }
                  } else {
                    sum[3] += 0.313793093;
                  }
                }
              }
            }
          } else {
            if (sample[3] <92) {
              if (sample[3] <69) {
                if (sample[2] <55) {
                  if (sample[0] <54) {
                    sum[3] += -0.23517786;
                  } else {
                    if (sample[1] <93) {
                      if (sample[4] <114) {
                        sum[3] += 1.12600529;
                      } else {
                        if (sample[2] <49) {
                          sum[3] += 0.656923056;
                        } else {
                          sum[3] += -0.0445859917;
                        }
                      }
                    } else {
                      if (sample[1] <94) {
                        sum[3] += -0.184210524;
                      } else {
                        if (sample[3] <64) {
                          sum[3] += 0.0289256144;
                        } else {
                          sum[3] += 0.580912828;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <103) {
                    if (sample[4] <101) {
                      sum[3] += -0.062130183;
                    } else {
                      sum[3] += 0.288990825;
                    }
                  } else {
                    if (sample[0] <53) {
                      sum[3] += 0.0642201751;
                    } else {
                      sum[3] += -0.25207755;
                    }
                  }
                }
              } else {
                if (sample[4] <109) {
                  if (sample[4] <103) {
                    if (sample[0] <87) {
                      if (sample[0] <69) {
                        sum[3] += 0.736842096;
                      } else {
                        if (sample[0] <73) {
                          sum[3] += -0.0773480684;
                        } else {
                          sum[3] += 0.53348726;
                        }
                      }
                    } else {
                      if (sample[0] <88) {
                        sum[3] += -0.184210524;
                      } else {
                        sum[3] += -5.48990142e-09;
                      }
                    }
                  } else {
                    if (sample[3] <89) {
                      if (sample[2] <55) {
                        if (sample[3] <87) {
                          sum[3] += 0.867999971;
                        } else {
                          sum[3] += -5.48990142e-09;
                        }
                      } else {
                        if (sample[3] <74) {
                          sum[3] += 0.184210509;
                        } else {
                          sum[3] += 1.27826083;
                        }
                      }
                    } else {
                      if (sample[4] <106) {
                        sum[3] += -0.193103448;
                      } else {
                        sum[3] += 0.6517241;
                      }
                    }
                  }
                } else {
                  if (sample[3] <82) {
                    if (sample[1] <107) {
                      sum[3] += 1.53214765;
                    } else {
                      sum[3] += -0.16055046;
                    }
                  } else {
                    if (sample[1] <94) {
                      if (sample[3] <89) {
                        if (sample[2] <52) {
                          sum[3] += 1.01060355;
                        } else {
                          sum[3] += 0.375609726;
                        }
                      } else {
                        if (sample[4] <113) {
                          sum[3] += -0.16055046;
                        } else {
                          sum[3] += 0.328729272;
                        }
                      }
                    } else {
                      sum[3] += 1.30442798;
                    }
                  }
                }
              }
            } else {
              if (sample[1] <99) {
                if (sample[2] <55) {
                  if (sample[1] <95) {
                    if (sample[0] <97) {
                      if (sample[4] <114) {
                        sum[3] += -0.225806445;
                      } else {
                        if (sample[2] <51) {
                          sum[3] += -0.184210524;
                        } else {
                          sum[3] += 0.231404945;
                        }
                      }
                    } else {
                      sum[3] += -0.253351212;
                    }
                  } else {
                    if (sample[2] <54) {
                      sum[3] += 0.288990825;
                    } else {
                      sum[3] += 0.0289256144;
                    }
                  }
                } else {
                  if (sample[3] <95) {
                    if (sample[4] <107) {
                      if (sample[0] <95) {
                        sum[3] += 0.0642201751;
                      } else {
                        sum[3] += -0.17355372;
                      }
                    } else {
                      if (sample[2] <56) {
                        sum[3] += 0.267515898;
                      } else {
                        sum[3] += 0.738532066;
                      }
                    }
                  } else {
                    sum[3] += -0.193103448;
                  }
                }
              } else {
                sum[3] += 1.10526311;
              }
            }
          }
        } else {
          if (sample[3] <59) {
            if (sample[2] <44) {
              if (sample[4] <163) {
                if (sample[1] <86) {
                  if (sample[3] <55) {
                    sum[3] += 0.0289256144;
                  } else {
                    if (sample[4] <141) {
                      sum[3] += 0.820689619;
                    } else {
                      if (sample[2] <40) {
                        sum[3] += 0.734806597;
                      } else {
                        if (sample[2] <41) {
                          sum[3] += -0.16055046;
                        } else {
                          sum[3] += 0.0642201751;
                        }
                      }
                    }
                  }
                } else {
                  sum[3] += -0.184210524;
                }
              } else {
                sum[3] += -0.256723702;
              }
            } else {
              if (sample[1] <87) {
                if (sample[3] <51) {
                  if (sample[1] <85) {
                    sum[3] += -0.269537926;
                  } else {
                    if (sample[4] <160) {
                      sum[3] += 0.0642201751;
                    } else {
                      sum[3] += -0.184210524;
                    }
                  }
                } else {
                  if (sample[4] <129) {
                    if (sample[2] <48) {
                      sum[3] += 0.513761461;
                    } else {
                      sum[3] += -0.0241379365;
                    }
                  } else {
                    if (sample[1] <84) {
                      if (sample[1] <81) {
                        sum[3] += -0.244186044;
                      } else {
                        if (sample[0] <37) {
                          sum[3] += 0.513761461;
                        } else {
                          sum[3] += -0.0270793103;
                        }
                      }
                    } else {
                      sum[3] += -0.261954248;
                    }
                  }
                }
              } else {
                sum[3] += -0.285802215;
              }
            }
          } else {
            if (sample[4] <132) {
              if (sample[3] <91) {
                if (sample[3] <69) {
                  if (sample[1] <92) {
                    sum[3] += 1.29574466;
                  } else {
                    if (sample[3] <63) {
                      if (sample[0] <50) {
                        sum[3] += 0.184210509;
                      } else {
                        sum[3] += 0.544041395;
                      }
                    } else {
                      if (sample[0] <62) {
                        sum[3] += -0.244186044;
                      } else {
                        sum[3] += 0.231404945;
                      }
                    }
                  }
                } else {
                  if (sample[2] <41) {
                    if (sample[0] <73) {
                      if (sample[3] <77) {
                        if (sample[3] <72) {
                          sum[3] += 0.433884293;
                        } else {
                          sum[3] += -5.48990142e-09;
                        }
                      } else {
                        sum[3] += 0.987551808;
                      }
                    } else {
                      sum[3] += -0.200636938;
                    }
                  } else {
                    if (sample[3] <84) {
                      if (sample[1] <102) {
                        sum[3] += 1.62004316;
                      } else {
                        if (sample[3] <80) {
                          sum[3] += 0.0121107185;
                        } else {
                          sum[3] += 1.30232549;
                        }
                      }
                    } else {
                      if (sample[1] <98) {
                        if (sample[1] <86) {
                          sum[3] += -0.221951216;
                        } else {
                          sum[3] += 0.547826052;
                        }
                      } else {
                        if (sample[4] <127) {
                          sum[3] += 0.830039501;
                        } else {
                          sum[3] += 1.66808498;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <100) {
                  if (sample[1] <86) {
                    if (sample[0] <86) {
                      if (sample[0] <84) {
                        sum[3] += -0.184210524;
                      } else {
                        sum[3] += 0.0642201751;
                      }
                    } else {
                      sum[3] += -0.262677491;
                    }
                  } else {
                    if (sample[3] <94) {
                      if (sample[4] <130) {
                        if (sample[1] <92) {
                          sum[3] += 0.0917030498;
                        } else {
                          sum[3] += 0.45161289;
                        }
                      } else {
                        sum[3] += 1.04132223;
                      }
                    } else {
                      if (sample[4] <130) {
                        if (sample[0] <100) {
                          sum[3] += -0.0773480684;
                        } else {
                          sum[3] += -0.217616573;
                        }
                      } else {
                        sum[3] += 0.184210509;
                      }
                    }
                  }
                } else {
                  if (sample[3] <94) {
                    sum[3] += 1.2871536;
                  } else {
                    sum[3] += 0.423566848;
                  }
                }
              }
            } else {
              if (sample[3] <95) {
                if (sample[3] <67) {
                  if (sample[2] <45) {
                    if (sample[3] <63) {
                      if (sample[1] <87) {
                        if (sample[0] <33) {
                          sum[3] += 0.267515898;
                        } else {
                          sum[3] += 1.23239434;
                        }
                      } else {
                        if (sample[3] <62) {
                          sum[3] += -0.200636938;
                        } else {
                          sum[3] += 0.495121926;
                        }
                      }
                    } else {
                      sum[3] += 1.56004322;
                    }
                  } else {
                    if (sample[4] <143) {
                      if (sample[2] <51) {
                        if (sample[4] <137) {
                          sum[3] += -0.0241379365;
                        } else {
                          sum[3] += -0.249258161;
                        }
                      } else {
                        sum[3] += 0.423566848;
                      }
                    } else {
                      sum[3] += 1.14088392;
                    }
                  }
                } else {
                  if (sample[4] <144) {
                    if (sample[3] <93) {
                      if (sample[1] <82) {
                        if (sample[0] <69) {
                          sum[3] += 1.20102429;
                        } else {
                          sum[3] += 0.377593338;
                        }
                      } else {
                        if (sample[0] <97) {
                          sum[3] += 1.63670921;
                        } else {
                          sum[3] += 1.74359918;
                        }
                      }
                    } else {
                      if (sample[2] <47) {
                        if (sample[4] <139) {
                          sum[3] += -0.25454545;
                        } else {
                          sum[3] += 0.136585355;
                        }
                      } else {
                        if (sample[3] <94) {
                          sum[3] += 1.31353915;
                        } else {
                          sum[3] += 0.338709652;
                        }
                      }
                    }
                  } else {
                    sum[3] += 1.74629736;
                  }
                }
              } else {
                if (sample[1] <100) {
                  if (sample[4] <161) {
                    if (sample[4] <140) {
                      sum[3] += -0.240072206;
                    } else {
                      if (sample[2] <39) {
                        sum[3] += -0.207100585;
                      } else {
                        if (sample[0] <97) {
                          sum[3] += 0.290155411;
                        } else {
                          sum[3] += -0.0773480684;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <209) {
                      if (sample[4] <176) {
                        sum[3] += 0.921052575;
                      } else {
                        if (sample[2] <26) {
                          sum[3] += 0.734806597;
                        } else {
                          sum[3] += -0.0445859917;
                        }
                      }
                    } else {
                      if (sample[0] <116) {
                        if (sample[0] <102) {
                          sum[3] += 0.288990825;
                        } else {
                          sum[3] += -0.23517786;
                        }
                      } else {
                        sum[3] += 0.338709652;
                      }
                    }
                  }
                } else {
                  if (sample[2] <5) {
                    if (sample[2] <3) {
                      sum[3] += 0.838842928;
                    } else {
                      sum[3] += 0.231404945;
                    }
                  } else {
                    sum[3] += 1.55971348;
                  }
                }
              }
            }
          }
        }
      } else {
        if (sample[3] <100) {
          if (sample[1] <104) {
            if (sample[4] <159) {
              if (sample[1] <100) {
                if (sample[4] <140) {
                  if (sample[0] <115) {
                    if (sample[2] <44) {
                      if (sample[0] <90) {
                        sum[3] += 0.0642201751;
                      } else {
                        sum[3] += -0.212707177;
                      }
                    } else {
                      sum[3] += -0.269615889;
                    }
                  } else {
                    sum[3] += 0.0289256144;
                  }
                } else {
                  if (sample[3] <98) {
                    if (sample[1] <92) {
                      if (sample[1] <88) {
                        if (sample[1] <84) {
                          sum[3] += -0.237735853;
                        } else {
                          sum[3] += 0.181660891;
                        }
                      } else {
                        sum[3] += -0.240072206;
                      }
                    } else {
                      sum[3] += 0.423566848;
                    }
                  } else {
                    if (sample[4] <153) {
                      if (sample[2] <50) {
                        sum[3] += -0.277502477;
                      } else {
                        if (sample[4] <141) {
                          sum[3] += 0.0642201751;
                        } else {
                          sum[3] += -0.184210524;
                        }
                      }
                    } else {
                      if (sample[1] <87) {
                        sum[3] += -0.221951216;
                      } else {
                        if (sample[0] <109) {
                          sum[3] += 0.288990825;
                        } else {
                          sum[3] += -0.16055046;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <98) {
                  sum[3] += 0.423566848;
                } else {
                  if (sample[0] <121) {
                    sum[3] += -0.184210524;
                  } else {
                    sum[3] += 0.231404945;
                  }
                }
              }
            } else {
              if (sample[2] <4) {
                if (sample[0] <110) {
                  sum[3] += 0.0642201751;
                } else {
                  sum[3] += -0.274173796;
                }
              } else {
                if (sample[1] <96) {
                  if (sample[2] <11) {
                    if (sample[1] <85) {
                      if (sample[1] <81) {
                        if (sample[2] <8) {
                          sum[3] += 0.0289256144;
                        } else {
                          sum[3] += 0.738532066;
                        }
                      } else {
                        sum[3] += 1.19087136;
                      }
                    } else {
                      if (sample[1] <93) {
                        sum[3] += -0.225806445;
                      } else {
                        if (sample[0] <130) {
                          sum[3] += 0.316981107;
                        } else {
                          sum[3] += -0.17355372;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <84) {
                      if (sample[0] <102) {
                        if (sample[1] <82) {
                          sum[3] += -0.0336000063;
                        } else {
                          sum[3] += 0.579617798;
                        }
                      } else {
                        if (sample[1] <81) {
                          sum[3] += -5.48990142e-09;
                        } else {
                          sum[3] += -0.256723702;
                        }
                      }
                    } else {
                      if (sample[0] <103) {
                        if (sample[2] <29) {
                          sum[3] += 0.184210509;
                        } else {
                          sum[3] += 1.0545851;
                        }
                      } else {
                        if (sample[2] <36) {
                          sum[3] += 0.310505807;
                        } else {
                          sum[3] += -0.0528301932;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <28) {
                    if (sample[4] <242) {
                      if (sample[4] <227) {
                        if (sample[2] <24) {
                          sum[3] += 0.536741197;
                        } else {
                          sum[3] += 0.0642201751;
                        }
                      } else {
                        if (sample[4] <239) {
                          sum[3] += 0.129230753;
                        } else {
                          sum[3] += -0.200636938;
                        }
                      }
                    } else {
                      if (sample[2] <5) {
                        if (sample[3] <99) {
                          sum[3] += -5.48990142e-09;
                        } else {
                          sum[3] += 0.482758611;
                        }
                      } else {
                        if (sample[1] <103) {
                          sum[3] += 1.00552487;
                        } else {
                          sum[3] += 0.288990825;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <44) {
                      if (sample[4] <180) {
                        sum[3] += 1.42641509;
                      } else {
                        if (sample[2] <33) {
                          sum[3] += 0.797927439;
                        } else {
                          sum[3] += 0.0642201751;
                        }
                      }
                    } else {
                      sum[3] += 0.0642201751;
                    }
                  }
                }
              }
            }
          } else {
            if (sample[3] <99) {
              if (sample[4] <152) {
                if (sample[1] <109) {
                  sum[3] += 0.267515898;
                } else {
                  sum[3] += 0.830039501;
                }
              } else {
                if (sample[2] <27) {
                  if (sample[0] <132) {
                    sum[3] += 0.313793093;
                  } else {
                    if (sample[4] <243) {
                      sum[3] += 1.2118032;
                    } else {
                      sum[3] += 0.482758611;
                    }
                  }
                } else {
                  sum[3] += 1.47911537;
                }
              }
            } else {
              if (sample[4] <242) {
                if (sample[4] <153) {
                  sum[3] += 0.231404945;
                } else {
                  sum[3] += 1.04502368;
                }
              } else {
                sum[3] += 0.144827574;
              }
            }
          }
        } else {
          if (sample[3] <103) {
            if (sample[1] <99) {
              if (sample[0] <118) {
                if (sample[4] <199) {
                  if (sample[2] <38) {
                    if (sample[1] <84) {
                      sum[3] += -0.286467791;
                    } else {
                      if (sample[4] <173) {
                        sum[3] += 0.513761461;
                      } else {
                        if (sample[2] <33) {
                          sum[3] += 0.227810636;
                        } else {
                          sum[3] += -0.246006384;
                        }
                      }
                    }
                  } else {
                    sum[3] += -0.28399086;
                  }
                } else {
                  if (sample[2] <25) {
                    if (sample[2] <11) {
                      sum[3] += 0.0289256144;
                    } else {
                      sum[3] += -0.269230753;
                    }
                  } else {
                    sum[3] += 0.368421048;
                  }
                }
              } else {
                if (sample[4] <249) {
                  if (sample[2] <9) {
                    if (sample[4] <240) {
                      sum[3] += 1.02371538;
                    } else {
                      if (sample[4] <248) {
                        if (sample[4] <245) {
                          sum[3] += 0.187615514;
                        } else {
                          sum[3] += -0.25207755;
                        }
                      } else {
                        sum[3] += 0.626637518;
                      }
                    }
                  } else {
                    if (sample[4] <170) {
                      if (sample[2] <42) {
                        if (sample[4] <167) {
                          sum[3] += 0.0642201751;
                        } else {
                          sum[3] += -0.193103448;
                        }
                      } else {
                        sum[3] += -0.244186044;
                      }
                    } else {
                      if (sample[2] <39) {
                        if (sample[3] <102) {
                          sum[3] += 0.0970996097;
                        } else {
                          sum[3] += -0.178895295;
                        }
                      } else {
                        if (sample[4] <172) {
                          sum[3] += 0.184210509;
                        } else {
                          sum[3] += 0.636363626;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <3) {
                    sum[3] += -0.270686865;
                  } else {
                    if (sample[0] <143) {
                      sum[3] += -0.200636938;
                    } else {
                      sum[3] += -0.0241379365;
                    }
                  }
                }
              }
            } else {
              if (sample[0] <170) {
                if (sample[1] <115) {
                  if (sample[2] <45) {
                    if (sample[4] <186) {
                      sum[3] += 1.33762372;
                    } else {
                      if (sample[2] <4) {
                        sum[3] += -0.225806445;
                      } else {
                        if (sample[4] <238) {
                          sum[3] += 0.281793207;
                        } else {
                          sum[3] += 0.611524105;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <142) {
                      if (sample[4] <162) {
                        if (sample[0] <135) {
                          sum[3] += 0.43654263;
                        } else {
                          sum[3] += -0.0393258482;
                        }
                      } else {
                        if (sample[4] <168) {
                          sum[3] += 0.849840224;
                        } else {
                          sum[3] += -0.17355372;
                        }
                      }
                    } else {
                      sum[3] += -0.255667508;
                    }
                  }
                } else {
                  if (sample[0] <168) {
                    if (sample[4] <163) {
                      sum[3] += 0.288990825;
                    } else {
                      sum[3] += 1.10939157;
                    }
                  } else {
                    if (sample[2] <43) {
                      sum[3] += 0.0642201751;
                    } else {
                      sum[3] += 0.552631557;
                    }
                  }
                }
              } else {
                if (sample[3] <102) {
                  if (sample[0] <172) {
                    sum[3] += 0.0642201751;
                  } else {
                    if (sample[1] <128) {
                      sum[3] += 0.738532066;
                    } else {
                      sum[3] += 0.0642201751;
                    }
                  }
                } else {
                  if (sample[2] <31) {
                    sum[3] += -0.271844655;
                  } else {
                    if (sample[4] <198) {
                      sum[3] += -0.207100585;
                    } else {
                      sum[3] += 0.738532066;
                    }
                  }
                }
              }
            }
          } else {
            if (sample[4] <246) {
              if (sample[2] <8) {
                if (sample[4] <244) {
                  if (sample[0] <152) {
                    sum[3] += 0.706930637;
                  } else {
                    if (sample[1] <86) {
                      sum[3] += 0.368421048;
                    } else {
                      sum[3] += 0.0642201751;
                    }
                  }
                } else {
                  if (sample[0] <157) {
                    if (sample[0] <150) {
                      sum[3] += -0.193103448;
                    } else {
                      if (sample[1] <82) {
                        sum[3] += 0.0289256144;
                      } else {
                        sum[3] += 0.328729272;
                      }
                    }
                  } else {
                    sum[3] += -0.267376333;
                  }
                }
              } else {
                if (sample[3] <105) {
                  if (sample[0] <129) {
                    if (sample[2] <22) {
                      sum[3] += 0.0642201751;
                    } else {
                      sum[3] += -0.285209954;
                    }
                  } else {
                    if (sample[4] <201) {
                      if (sample[0] <152) {
                        if (sample[1] <87) {
                          sum[3] += 0.552631557;
                        } else {
                          sum[3] += -0.155031294;
                        }
                      } else {
                        if (sample[0] <172) {
                          sum[3] += 0.61018604;
                        } else {
                          sum[3] += -0.202397734;
                        }
                      }
                    } else {
                      if (sample[2] <10) {
                        if (sample[4] <243) {
                          sum[3] += 0.234279901;
                        } else {
                          sum[3] += -0.244186044;
                        }
                      } else {
                        if (sample[4] <206) {
                          sum[3] += -0.0831353962;
                        } else {
                          sum[3] += -0.242838368;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <174) {
                    if (sample[1] <100) {
                      if (sample[0] <151) {
                        if (sample[2] <14) {
                          sum[3] += 0.0642201751;
                        } else {
                          sum[3] += -0.252445489;
                        }
                      } else {
                        sum[3] += -0.289817572;
                      }
                    } else {
                      if (sample[2] <49) {
                        if (sample[3] <106) {
                          sum[3] += 0.25454542;
                        } else {
                          sum[3] += -0.225806445;
                        }
                      } else {
                        if (sample[2] <56) {
                          sum[3] += -0.25454545;
                        } else {
                          sum[3] += 0.0362694226;
                        }
                      }
                    }
                  } else {
                    sum[3] += -0.289662659;
                  }
                }
              }
            } else {
              sum[3] += -0.29141143;
            }
          }
        }
      }
    }
  } else {
    if (sample[2] <62) {
      if (sample[1] <99) {
        if (sample[1] <95) {
          if (sample[1] <84) {
            if (sample[1] <77) {
              sum[3] += -0.291333467;
            } else {
              if (sample[3] <42) {
                if (sample[4] <184) {
                  if (sample[0] <24) {
                    if (sample[2] <60) {
                      sum[3] += -5.48990142e-09;
                    } else {
                      sum[3] += 0.636363626;
                    }
                  } else {
                    if (sample[1] <78) {
                      if (sample[0] <27) {
                        sum[3] += 0.0642201751;
                      } else {
                        if (sample[0] <32) {
                          sum[3] += -0.17355372;
                        } else {
                          sum[3] += 0.0289256144;
                        }
                      }
                    } else {
                      sum[3] += -0.232365146;
                    }
                  }
                } else {
                  if (sample[2] <61) {
                    sum[3] += -0.266371667;
                  } else {
                    if (sample[0] <19) {
                      sum[3] += 0.0642201751;
                    } else {
                      sum[3] += -0.200636938;
                    }
                  }
                }
              } else {
                if (sample[0] <63) {
                  if (sample[4] <67) {
                    sum[3] += -0.288674891;
                  } else {
                    if (sample[3] <59) {
                      if (sample[3] <52) {
                        if (sample[1] <83) {
                          sum[3] += -0.249332145;
                        } else {
                          sum[3] += -0.167842031;
                        }
                      } else {
                        sum[3] += -0.276615798;
                      }
                    } else {
                      if (sample[1] <79) {
                        if (sample[3] <60) {
                          sum[3] += -0.17355372;
                        } else {
                          sum[3] += 0.0828402266;
                        }
                      } else {
                        if (sample[4] <72) {
                          sum[3] += -0.257307351;
                        } else {
                          sum[3] += -0.142914325;
                        }
                      }
                    }
                  }
                } else {
                  sum[3] += -0.287002653;
                }
              }
            }
          } else {
            if (sample[3] <80) {
              if (sample[0] <60) {
                if (sample[0] <54) {
                  if (sample[0] <34) {
                    if (sample[4] <161) {
                      sum[3] += 0.513761461;
                    } else {
                      sum[3] += -0.267402381;
                    }
                  } else {
                    if (sample[3] <55) {
                      sum[3] += -0.260808438;
                    } else {
                      if (sample[2] <58) {
                        sum[3] += -0.237735853;
                      } else {
                        if (sample[4] <99) {
                          sum[3] += -0.193103448;
                        } else {
                          sum[3] += 0.0170731638;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <56) {
                    if (sample[1] <90) {
                      if (sample[4] <98) {
                        if (sample[4] <93) {
                          sum[3] += 0.136585355;
                        } else {
                          sum[3] += -0.212707177;
                        }
                      } else {
                        if (sample[2] <61) {
                          sum[3] += 0.288990825;
                        } else {
                          sum[3] += 0.0642201751;
                        }
                      }
                    } else {
                      sum[3] += -0.184210524;
                    }
                  } else {
                    if (sample[4] <104) {
                      if (sample[1] <94) {
                        if (sample[2] <58) {
                          sum[3] += -0.265249521;
                        } else {
                          sum[3] += -0.18192558;
                        }
                      } else {
                        sum[3] += -5.48990142e-09;
                      }
                    } else {
                      sum[3] += 0.184210509;
                    }
                  }
                }
              } else {
                if (sample[4] <100) {
                  if (sample[4] <89) {
                    if (sample[0] <62) {
                      if (sample[3] <61) {
                        if (sample[4] <73) {
                          sum[3] += 0.288990825;
                        } else {
                          sum[3] += -0.121983916;
                        }
                      } else {
                        if (sample[0] <61) {
                          sum[3] += 0.0553359576;
                        } else {
                          sum[3] += 0.520761192;
                        }
                      }
                    } else {
                      if (sample[1] <87) {
                        if (sample[4] <84) {
                          sum[3] += -0.179028139;
                        } else {
                          sum[3] += -7.58604557e-09;
                        }
                      } else {
                        if (sample[4] <85) {
                          sum[3] += 0.0771585926;
                        } else {
                          sum[3] += -0.156095147;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <67) {
                      if (sample[4] <90) {
                        sum[3] += 0.111464955;
                      } else {
                        if (sample[1] <94) {
                          sum[3] += -0.25454545;
                        } else {
                          sum[3] += -0.0445859917;
                        }
                      }
                    } else {
                      if (sample[3] <79) {
                        if (sample[0] <69) {
                          sum[3] += 0.564516127;
                        } else {
                          sum[3] += 0.0826771557;
                        }
                      } else {
                        if (sample[0] <80) {
                          sum[3] += 0.184210509;
                        } else {
                          sum[3] += 0.838842928;
                        }
                      }
                    }
                  }
                } else {
                  sum[3] += 0.820689619;
                }
              }
            } else {
              if (sample[1] <91) {
                sum[3] += -0.275368184;
              } else {
                if (sample[3] <94) {
                  if (sample[2] <61) {
                    if (sample[2] <60) {
                      if (sample[4] <97) {
                        if (sample[0] <85) {
                          sum[3] += -0.221951216;
                        } else {
                          sum[3] += 0.23595503;
                        }
                      } else {
                        if (sample[1] <93) {
                          sum[3] += -0.229257643;
                        } else {
                          sum[3] += -6.72955647e-09;
                        }
                      }
                    } else {
                      if (sample[3] <90) {
                        if (sample[0] <85) {
                          sum[3] += 0.0289256144;
                        } else {
                          sum[3] += 0.45161289;
                        }
                      } else {
                        if (sample[0] <95) {
                          sum[3] += -0.17355372;
                        } else {
                          sum[3] += 0.231404945;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <86) {
                      sum[3] += 0.288990825;
                    } else {
                      if (sample[1] <94) {
                        sum[3] += -0.253351212;
                      } else {
                        sum[3] += 0.0289256144;
                      }
                    }
                  }
                } else {
                  sum[3] += -0.27189821;
                }
              }
            }
          }
        } else {
          if (sample[4] <106) {
            if (sample[0] <68) {
              if (sample[0] <65) {
                sum[3] += -0.259550571;
              } else {
                sum[3] += -5.48990142e-09;
              }
            } else {
              if (sample[0] <98) {
                if (sample[3] <73) {
                  if (sample[1] <97) {
                    sum[3] += 0.552631557;
                  } else {
                    sum[3] += 0.0642201751;
                  }
                } else {
                  if (sample[2] <60) {
                    if (sample[0] <85) {
                      sum[3] += 1.25040781;
                    } else {
                      if (sample[2] <59) {
                        if (sample[4] <103) {
                          sum[3] += -0.193103448;
                        } else {
                          sum[3] += 0.0642201751;
                        }
                      } else {
                        if (sample[3] <83) {
                          sum[3] += 0.144827574;
                        } else {
                          sum[3] += 0.682572603;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <77) {
                      if (sample[1] <97) {
                        sum[3] += 0.0289256144;
                      } else {
                        sum[3] += 0.736842096;
                      }
                    } else {
                      if (sample[1] <97) {
                        sum[3] += 1.36199093;
                      } else {
                        sum[3] += 0.775086462;
                      }
                    }
                  }
                }
              } else {
                if (sample[4] <101) {
                  sum[3] += -0.207100585;
                } else {
                  if (sample[3] <95) {
                    sum[3] += 0.313793093;
                  } else {
                    sum[3] += -0.184210524;
                  }
                }
              }
            }
          } else {
            if (sample[4] <108) {
              if (sample[2] <58) {
                sum[3] += 0.662721872;
              } else {
                sum[3] += -0.217616573;
              }
            } else {
              if (sample[4] <111) {
                if (sample[2] <60) {
                  sum[3] += 0.184210509;
                } else {
                  sum[3] += -0.217616573;
                }
              } else {
                sum[3] += -0.26635918;
              }
            }
          }
        }
      } else {
        if (sample[3] <97) {
          if (sample[3] <72) {
            if (sample[4] <102) {
              sum[3] += 0.144827574;
            } else {
              if (sample[1] <114) {
                sum[3] += -0.267005712;
              } else {
                sum[3] += -5.48990142e-09;
              }
            }
          } else {
            if (sample[1] <113) {
              if (sample[3] <84) {
                if (sample[1] <107) {
                  if (sample[4] <99) {
                    sum[3] += 0.734806597;
                  } else {
                    sum[3] += 1.63364184;
                  }
                } else {
                  if (sample[0] <86) {
                    sum[3] += -0.200636938;
                  } else {
                    if (sample[0] <95) {
                      sum[3] += 0.313793093;
                    } else {
                      sum[3] += 1.04777062;
                    }
                  }
                }
              } else {
                if (sample[1] <106) {
                  if (sample[2] <60) {
                    if (sample[1] <100) {
                      if (sample[4] <117) {
                        sum[3] += 0.231404945;
                      } else {
                        sum[3] += -0.16055046;
                      }
                    } else {
                      if (sample[0] <109) {
                        if (sample[1] <104) {
                          sum[3] += 1.0970149;
                        } else {
                          sum[3] += 0.44268772;
                        }
                      } else {
                        if (sample[1] <103) {
                          sum[3] += -0.0241379365;
                        } else {
                          sum[3] += 0.552631557;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <105) {
                      if (sample[4] <100) {
                        if (sample[0] <97) {
                          sum[3] += 0.0289256144;
                        } else {
                          sum[3] += -0.200636938;
                        }
                      } else {
                        if (sample[1] <100) {
                          sum[3] += 0.144827574;
                        } else {
                          sum[3] += 0.733624399;
                        }
                      }
                    } else {
                      if (sample[4] <111) {
                        if (sample[4] <106) {
                          sum[3] += -0.102439024;
                        } else {
                          sum[3] += -0.246006384;
                        }
                      } else {
                        if (sample[2] <61) {
                          sum[3] += 0.552631557;
                        } else {
                          sum[3] += 0.0642201751;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <121) {
                    if (sample[0] <103) {
                      if (sample[4] <117) {
                        sum[3] += -5.48990142e-09;
                      } else {
                        sum[3] += 0.921052575;
                      }
                    } else {
                      sum[3] += 1.47609866;
                    }
                  } else {
                    sum[3] += 0.231404945;
                  }
                }
              }
            } else {
              if (sample[0] <92) {
                sum[3] += 0.0642201751;
              } else {
                if (sample[3] <95) {
                  sum[3] += 1.74602413;
                } else {
                  if (sample[1] <123) {
                    if (sample[4] <141) {
                      if (sample[4] <139) {
                        sum[3] += 0.552631557;
                      } else {
                        sum[3] += -0.16055046;
                      }
                    } else {
                      sum[3] += 0.662721872;
                    }
                  } else {
                    sum[3] += 1.59227455;
                  }
                }
              }
            }
          }
        } else {
          if (sample[3] <100) {
            if (sample[0] <133) {
              if (sample[3] <98) {
                if (sample[0] <121) {
                  if (sample[4] <124) {
                    sum[3] += 0.0642201751;
                  } else {
                    sum[3] += 0.662721872;
                  }
                } else {
                  sum[3] += 0.111464955;
                }
              } else {
                if (sample[2] <59) {
                  if (sample[0] <117) {
                    sum[3] += -0.17355372;
                  } else {
                    sum[3] += 0.368421048;
                  }
                } else {
                  if (sample[0] <117) {
                    sum[3] += -0.0241379365;
                  } else {
                    sum[3] += -0.225806445;
                  }
                }
              }
            } else {
              if (sample[1] <128) {
                sum[3] += 1.26534784;
              } else {
                if (sample[4] <159) {
                  sum[3] += 0.144827574;
                } else {
                  sum[3] += 0.636363626;
                }
              }
            }
          } else {
            if (sample[1] <118) {
              if (sample[1] <104) {
                if (sample[4] <134) {
                  if (sample[1] <101) {
                    sum[3] += -0.212707177;
                  } else {
                    sum[3] += 0.0642201751;
                  }
                } else {
                  sum[3] += -0.280113161;
                }
              } else {
                if (sample[1] <105) {
                  if (sample[2] <59) {
                    if (sample[2] <58) {
                      sum[3] += -0.16055046;
                    } else {
                      sum[3] += 0.636363626;
                    }
                  } else {
                    sum[3] += -0.17355372;
                  }
                } else {
                  if (sample[3] <109) {
                    if (sample[1] <112) {
                      sum[3] += -0.274173796;
                    } else {
                      if (sample[0] <147) {
                        sum[3] += 0.288990825;
                      } else {
                        if (sample[1] <115) {
                          sum[3] += -0.232365146;
                        } else {
                          sum[3] += -0.062130183;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <107) {
                      sum[3] += 0.288990825;
                    } else {
                      sum[3] += -0.217616573;
                    }
                  }
                }
              }
            } else {
              if (sample[1] <125) {
                if (sample[3] <106) {
                  if (sample[2] <60) {
                    sum[3] += 0.752166331;
                  } else {
                    if (sample[3] <104) {
                      sum[3] += 0.517751455;
                    } else {
                      sum[3] += 0.0289256144;
                    }
                  }
                } else {
                  if (sample[0] <200) {
                    sum[3] += 0.144827574;
                  } else {
                    sum[3] += -0.225806445;
                  }
                }
              } else {
                if (sample[0] <207) {
                  if (sample[2] <61) {
                    sum[3] += -0.265249521;
                  } else {
                    if (sample[3] <104) {
                      sum[3] += -0.200636938;
                    } else {
                      sum[3] += 0.0642201751;
                    }
                  }
                } else {
                  sum[3] += -0.0241379365;
                }
              }
            }
          }
        }
      }
    } else {
      if (sample[4] <91) {
        if (sample[4] <64) {
          if (sample[4] <35) {
            sum[3] += -0.291602641;
          } else {
            if (sample[3] <34) {
              sum[3] += -0.291523039;
            } else {
              if (sample[3] <96) {
                if (sample[0] <113) {
                  if (sample[1] <103) {
                    if (sample[1] <86) {
                      sum[3] += -0.291330934;
                    } else {
                      if (sample[4] <53) {
                        sum[3] += -0.290276736;
                      } else {
                        if (sample[3] <47) {
                          sum[3] += -0.289355129;
                        } else {
                          sum[3] += -0.276373565;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <88) {
                      if (sample[1] <113) {
                        if (sample[2] <79) {
                          sum[3] += -0.0323325694;
                        } else {
                          sum[3] += -0.264455289;
                        }
                      } else {
                        if (sample[0] <104) {
                          sum[3] += -0.245541021;
                        } else {
                          sum[3] += 0.148556858;
                        }
                      }
                    } else {
                      if (sample[3] <58) {
                        sum[3] += -0.29044342;
                      } else {
                        if (sample[4] <44) {
                          sum[3] += -0.285768718;
                        } else {
                          sum[3] += -0.259455502;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <120) {
                    if (sample[4] <50) {
                      if (sample[1] <123) {
                        sum[3] += -0.284535617;
                      } else {
                        if (sample[3] <76) {
                          sum[3] += -0.265530497;
                        } else {
                          sum[3] += -0.224890471;
                        }
                      }
                    } else {
                      if (sample[3] <78) {
                        if (sample[1] <134) {
                          sum[3] += -0.16055046;
                        } else {
                          sum[3] += -0.284259796;
                        }
                      } else {
                        if (sample[3] <92) {
                          sum[3] += -0.147900507;
                        } else {
                          sum[3] += -0.224998027;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <84) {
                      sum[3] += -0.290444583;
                    } else {
                      if (sample[0] <156) {
                        if (sample[1] <162) {
                          sum[3] += -0.255524576;
                        } else {
                          sum[3] += 0.0642201751;
                        }
                      } else {
                        sum[3] += -0.285567671;
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <124) {
                  sum[3] += -0.291367799;
                } else {
                  if (sample[0] <125) {
                    sum[3] += -0.289909482;
                  } else {
                    if (sample[5] <167) {
                      if (sample[1] <133) {
                        sum[3] += -0.272740573;
                      } else {
                        if (sample[4] <49) {
                          sum[3] += -0.246929929;
                        } else {
                          sum[3] += 0.0828402266;
                        }
                      }
                    } else {
                      sum[3] += -0.29075709;
                    }
                  }
                }
              }
            }
          }
        } else {
          if (sample[1] <129) {
            if (sample[2] <89) {
              if (sample[1] <113) {
                if (sample[1] <110) {
                  if (sample[1] <105) {
                    if (sample[1] <88) {
                      sum[3] += -0.291114509;
                    } else {
                      if (sample[2] <70) {
                        if (sample[3] <86) {
                          sum[3] += -0.146812737;
                        } else {
                          sum[3] += -0.262833148;
                        }
                      } else {
                        if (sample[3] <96) {
                          sum[3] += -0.272875011;
                        } else {
                          sum[3] += -0.291404486;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <75) {
                      if (sample[0] <88) {
                        if (sample[4] <89) {
                          sum[3] += -0.230742529;
                        } else {
                          sum[3] += -0.0445859917;
                        }
                      } else {
                        if (sample[3] <83) {
                          sum[3] += 0.466209561;
                        } else {
                          sum[3] += -0.0186005384;
                        }
                      }
                    } else {
                      if (sample[2] <81) {
                        if (sample[4] <65) {
                          sum[3] += 0.145367399;
                        } else {
                          sum[3] += -0.202864304;
                        }
                      } else {
                        sum[3] += -0.288884819;
                      }
                    }
                  }
                } else {
                  if (sample[2] <77) {
                    if (sample[0] <91) {
                      if (sample[4] <80) {
                        if (sample[0] <81) {
                          sum[3] += 0.288990825;
                        } else {
                          sum[3] += -0.16055046;
                        }
                      } else {
                        sum[3] += -0.267402381;
                      }
                    } else {
                      if (sample[2] <75) {
                        if (sample[4] <89) {
                          sum[3] += 0.849840224;
                        } else {
                          sum[3] += 0.375609726;
                        }
                      } else {
                        if (sample[5] <112) {
                          sum[3] += -0.138339922;
                        } else {
                          sum[3] += 0.517751455;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <97) {
                      if (sample[3] <78) {
                        sum[3] += -0.283093929;
                      } else {
                        if (sample[4] <76) {
                          sum[3] += -0.0867533535;
                        } else {
                          sum[3] += 0.103209004;
                        }
                      }
                    } else {
                      if (sample[2] <81) {
                        if (sample[4] <87) {
                          sum[3] += 0.0642201751;
                        } else {
                          sum[3] += -0.212707177;
                        }
                      } else {
                        sum[3] += -0.285283208;
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <75) {
                  if (sample[3] <74) {
                    if (sample[4] <65) {
                      if (sample[0] <90) {
                        sum[3] += -0.217616573;
                      } else {
                        sum[3] += 0.0289256144;
                      }
                    } else {
                      sum[3] += -0.283990711;
                    }
                  } else {
                    if (sample[0] <98) {
                      sum[3] += 0.513761461;
                    } else {
                      sum[3] += -0.25207755;
                    }
                  }
                } else {
                  if (sample[0] <106) {
                    if (sample[1] <118) {
                      if (sample[4] <71) {
                        if (sample[0] <104) {
                          sum[3] += -7.58604557e-09;
                        } else {
                          sum[3] += 1.04272509;
                        }
                      } else {
                        if (sample[3] <83) {
                          sum[3] += 1.39304066;
                        } else {
                          sum[3] += 0.227810636;
                        }
                      }
                    } else {
                      if (sample[4] <74) {
                        if (sample[0] <104) {
                          sum[3] += 0.288990825;
                        } else {
                          sum[3] += 0.0642201751;
                        }
                      } else {
                        if (sample[2] <84) {
                          sum[3] += -0.255667508;
                        } else {
                          sum[3] += -0.062130183;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <98) {
                      if (sample[4] <80) {
                        if (sample[3] <94) {
                          sum[3] += 0.1426875;
                        } else {
                          sum[3] += -0.197224557;
                        }
                      } else {
                        if (sample[0] <113) {
                          sum[3] += -0.0949485525;
                        } else {
                          sum[3] += 0.459994465;
                        }
                      }
                    } else {
                      if (sample[1] <118) {
                        sum[3] += -0.264578819;
                      } else {
                        if (sample[4] <85) {
                          sum[3] += 0.231404945;
                        } else {
                          sum[3] += -0.232365146;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[1] <120) {
                sum[3] += -0.291347265;
              } else {
                if (sample[2] <95) {
                  if (sample[3] <77) {
                    if (sample[0] <100) {
                      sum[3] += -0.287788332;
                    } else {
                      if (sample[4] <75) {
                        if (sample[1] <127) {
                          sum[3] += -0.274673015;
                        } else {
                          sum[3] += -0.13691932;
                        }
                      } else {
                        if (sample[0] <106) {
                          sum[3] += 0.288990825;
                        } else {
                          sum[3] += -0.16055046;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <122) {
                      if (sample[1] <126) {
                        if (sample[0] <110) {
                          sum[3] += 0.46408838;
                        } else {
                          sum[3] += -0.0722419992;
                        }
                      } else {
                        if (sample[3] <78) {
                          sum[3] += 0.0289256144;
                        } else {
                          sum[3] += 0.43654263;
                        }
                      }
                    } else {
                      if (sample[2] <91) {
                        if (sample[5] <126) {
                          sum[3] += -0.221951216;
                        } else {
                          sum[3] += 0.0773731992;
                        }
                      } else {
                        if (sample[3] <89) {
                          sum[3] += -7.27731075e-09;
                        } else {
                          sum[3] += -0.189403474;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <98) {
                    if (sample[1] <128) {
                      if (sample[1] <125) {
                        sum[3] += -0.273406535;
                      } else {
                        if (sample[3] <94) {
                          sum[3] += -0.273644388;
                        } else {
                          sum[3] += -0.133692458;
                        }
                      }
                    } else {
                      if (sample[0] <126) {
                        if (sample[0] <116) {
                          sum[3] += -0.221951216;
                        } else {
                          sum[3] += 0.807692289;
                        }
                      } else {
                        sum[3] += -0.240072206;
                      }
                    }
                  } else {
                    sum[3] += -0.290962815;
                  }
                }
              }
            }
          } else {
            if (sample[2] <103) {
              if (sample[3] <81) {
                if (sample[3] <76) {
                  if (sample[4] <66) {
                    if (sample[0] <118) {
                      if (sample[0] <99) {
                        sum[3] += 0.0289256144;
                      } else {
                        sum[3] += -0.257719696;
                      }
                    } else {
                      sum[3] += 0.0642201751;
                    }
                  } else {
                    sum[3] += -0.287490577;
                  }
                } else {
                  if (sample[1] <132) {
                    if (sample[2] <92) {
                      if (sample[3] <80) {
                        sum[3] += -0.242214531;
                      } else {
                        sum[3] += 0.368421048;
                      }
                    } else {
                      if (sample[2] <94) {
                        sum[3] += 0.989655137;
                      } else {
                        if (sample[3] <78) {
                          sum[3] += 0.433884293;
                        } else {
                          sum[3] += -0.193103448;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <65) {
                      sum[3] += 0.231404945;
                    } else {
                      if (sample[4] <82) {
                        if (sample[2] <94) {
                          sum[3] += 0.0362694226;
                        } else {
                          sum[3] += -0.199052125;
                        }
                      } else {
                        sum[3] += -0.27844587;
                      }
                    }
                  }
                }
              } else {
                if (sample[0] <125) {
                  if (sample[3] <83) {
                    if (sample[0] <122) {
                      if (sample[2] <90) {
                        if (sample[0] <118) {
                          sum[3] += -0.17355372;
                        } else {
                          sum[3] += 0.0828402266;
                        }
                      } else {
                        if (sample[4] <72) {
                          sum[3] += 0.267515898;
                        } else {
                          sum[3] += 0.928114951;
                        }
                      }
                    } else {
                      if (sample[2] <95) {
                        sum[3] += -0.0445859917;
                      } else {
                        sum[3] += -0.221951216;
                      }
                    }
                  } else {
                    sum[3] += 1.08102047;
                  }
                } else {
                  if (sample[3] <99) {
                    if (sample[2] <92) {
                      if (sample[3] <84) {
                        sum[3] += -0.17355372;
                      } else {
                        if (sample[3] <89) {
                          sum[3] += 0.745409966;
                        } else {
                          sum[3] += 0.305825233;
                        }
                      }
                    } else {
                      if (sample[1] <146) {
                        if (sample[1] <135) {
                          sum[3] += 0.0288699381;
                        } else {
                          sum[3] += 0.210262805;
                        }
                      } else {
                        if (sample[3] <93) {
                          sum[3] += -0.244186044;
                        } else {
                          sum[3] += 0.267515898;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <99) {
                      if (sample[0] <146) {
                        sum[3] += 0.163212419;
                      } else {
                        if (sample[3] <102) {
                          sum[3] += -0.221951216;
                        } else {
                          sum[3] += 0.0642201751;
                        }
                      }
                    } else {
                      if (sample[1] <132) {
                        sum[3] += -0.284180194;
                      } else {
                        if (sample[2] <101) {
                          sum[3] += -0.249258161;
                        } else {
                          sum[3] += -0.108053692;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[2] <109) {
                if (sample[1] <143) {
                  if (sample[3] <100) {
                    if (sample[3] <83) {
                      if (sample[1] <132) {
                        if (sample[0] <89) {
                          sum[3] += -0.257719696;
                        } else {
                          sum[3] += -0.0886076018;
                        }
                      } else {
                        if (sample[4] <65) {
                          sum[3] += -0.11290323;
                        } else {
                          sum[3] += -0.284745753;
                        }
                      }
                    } else {
                      if (sample[3] <96) {
                        if (sample[2] <107) {
                          sum[3] += -0.090810813;
                        } else {
                          sum[3] += 0.22580643;
                        }
                      } else {
                        if (sample[0] <140) {
                          sum[3] += 0.0828402266;
                        } else {
                          sum[3] += -0.179272383;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <140) {
                      sum[3] += -0.281968802;
                    } else {
                      if (sample[3] <101) {
                        sum[3] += 0.184210509;
                      } else {
                        sum[3] += -0.240072206;
                      }
                    }
                  }
                } else {
                  if (sample[3] <88) {
                    if (sample[3] <84) {
                      sum[3] += -0.28708747;
                    } else {
                      if (sample[4] <70) {
                        if (sample[2] <107) {
                          sum[3] += 0.423566848;
                        } else {
                          sum[3] += 0.0289256144;
                        }
                      } else {
                        if (sample[3] <87) {
                          sum[3] += -0.265822768;
                        } else {
                          sum[3] += -0.102439024;
                        }
                      }
                    }
                  } else {
                    if (sample[5] <160) {
                      if (sample[1] <145) {
                        if (sample[0] <145) {
                          sum[3] += 0.338709652;
                        } else {
                          sum[3] += -0.0884101093;
                        }
                      } else {
                        if (sample[3] <94) {
                          sum[3] += 0.19923532;
                        } else {
                          sum[3] += 0.810142994;
                        }
                      }
                    } else {
                      if (sample[0] <164) {
                        if (sample[2] <106) {
                          sum[3] += -0.0445859917;
                        } else {
                          sum[3] += -0.269230753;
                        }
                      } else {
                        sum[3] += 0.111464955;
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <122) {
                  if (sample[1] <148) {
                    if (sample[3] <104) {
                      if (sample[2] <110) {
                        if (sample[1] <130) {
                          sum[3] += -5.48990142e-09;
                        } else {
                          sum[3] += -0.237917483;
                        }
                      } else {
                        sum[3] += -0.278202385;
                      }
                    } else {
                      sum[3] += -0.287807316;
                    }
                  } else {
                    if (sample[3] <90) {
                      if (sample[0] <161) {
                        sum[3] += -0.282778174;
                      } else {
                        if (sample[4] <75) {
                          sum[3] += 0.111464955;
                        } else {
                          sum[3] += -0.25454545;
                        }
                      }
                    } else {
                      if (sample[2] <115) {
                        if (sample[3] <96) {
                          sum[3] += -0.113466337;
                        } else {
                          sum[3] += 0.074025102;
                        }
                      } else {
                        if (sample[0] <182) {
                          sum[3] += -0.17344974;
                        } else {
                          sum[3] += 0.204615369;
                        }
                      }
                    }
                  }
                } else {
                  sum[3] += -0.290717602;
                }
              }
            }
          }
        }
      } else {
        if (sample[3] <70) {
          if (sample[3] <41) {
            sum[3] += -0.291367173;
          } else {
            if (sample[1] <92) {
              if (sample[0] <58) {
                if (sample[3] <54) {
                  if (sample[0] <53) {
                    if (sample[4] <157) {
                      sum[3] += -0.281287521;
                    } else {
                      if (sample[0] <33) {
                        sum[3] += -0.265249521;
                      } else {
                        if (sample[3] <42) {
                          sum[3] += 0.184210509;
                        } else {
                          sum[3] += -0.17355372;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <48) {
                      sum[3] += -0.26599738;
                    } else {
                      if (sample[2] <66) {
                        if (sample[4] <98) {
                          sum[3] += -0.275804669;
                        } else {
                          sum[3] += -0.169902906;
                        }
                      } else {
                        if (sample[0] <54) {
                          sum[3] += 0.231404945;
                        } else {
                          sum[3] += -0.156095147;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <94) {
                    sum[3] += -0.16055046;
                  } else {
                    sum[3] += 0.111464955;
                  }
                }
              } else {
                if (sample[3] <45) {
                  if (sample[3] <43) {
                    sum[3] += 0.305676848;
                  } else {
                    sum[3] += 0.111464955;
                  }
                } else {
                  if (sample[2] <70) {
                    sum[3] += -0.229257643;
                  } else {
                    if (sample[1] <91) {
                      sum[3] += -0.207100585;
                    } else {
                      if (sample[2] <73) {
                        sum[3] += 0.368421048;
                      } else {
                        sum[3] += -0.062130183;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[2] <64) {
                if (sample[0] <71) {
                  if (sample[1] <114) {
                    if (sample[1] <100) {
                      if (sample[1] <98) {
                        if (sample[4] <98) {
                          sum[3] += -0.11290323;
                        } else {
                          sum[3] += -0.265249521;
                        }
                      } else {
                        if (sample[3] <54) {
                          sum[3] += 0.184210509;
                        } else {
                          sum[3] += -0.102439024;
                        }
                      }
                    } else {
                      sum[3] += -0.275804669;
                    }
                  } else {
                    sum[3] += 0.0642201751;
                  }
                } else {
                  if (sample[0] <73) {
                    sum[3] += 0.231404945;
                  } else {
                    sum[3] += -0.200636938;
                  }
                }
              } else {
                sum[3] += -0.289815575;
              }
            }
          }
        } else {
          if (sample[3] <96) {
            if (sample[2] <87) {
              if (sample[0] <115) {
                if (sample[2] <74) {
                  if (sample[3] <92) {
                    if (sample[2] <65) {
                      if (sample[1] <102) {
                        if (sample[3] <75) {
                          sum[3] += 0.771565437;
                        } else {
                          sum[3] += 0.180317029;
                        }
                      } else {
                        if (sample[0] <84) {
                          sum[3] += 1.55901992;
                        } else {
                          sum[3] += 1.10341108;
                        }
                      }
                    } else {
                      if (sample[3] <76) {
                        if (sample[1] <107) {
                          sum[3] += 0.145367399;
                        } else {
                          sum[3] += -0.25179857;
                        }
                      } else {
                        if (sample[0] <99) {
                          sum[3] += 1.11040246;
                        } else {
                          sum[3] += 0.726296902;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <108) {
                      if (sample[4] <102) {
                        if (sample[1] <97) {
                          sum[3] += -0.130559549;
                        } else {
                          sum[3] += -0.273644388;
                        }
                      } else {
                        if (sample[1] <100) {
                          sum[3] += -0.16055046;
                        } else {
                          sum[3] += 0.482758611;
                        }
                      }
                    } else {
                      if (sample[3] <93) {
                        sum[3] += 0.734146297;
                      } else {
                        if (sample[1] <106) {
                          sum[3] += 0.349272311;
                        } else {
                          sum[3] += -0.0330812931;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <81) {
                    if (sample[1] <121) {
                      if (sample[4] <95) {
                        sum[3] += -0.232365146;
                      } else {
                        sum[3] += 0.0642201751;
                      }
                    } else {
                      sum[3] += -0.283513963;
                    }
                  } else {
                    if (sample[0] <114) {
                      if (sample[0] <111) {
                        if (sample[1] <119) {
                          sum[3] += 0.513761461;
                        } else {
                          sum[3] += -0.184210524;
                        }
                      } else {
                        sum[3] += 0.636363626;
                      }
                    } else {
                      sum[3] += -0.0241379365;
                    }
                  }
                }
              } else {
                if (sample[3] <84) {
                  if (sample[1] <132) {
                    if (sample[1] <128) {
                      sum[3] += 0.433884293;
                    } else {
                      sum[3] += 1.2404325;
                    }
                  } else {
                    if (sample[2] <76) {
                      sum[3] += 0.144827574;
                    } else {
                      if (sample[0] <129) {
                        if (sample[4] <97) {
                          sum[3] += -0.102439024;
                        } else {
                          sum[3] += -0.273081928;
                        }
                      } else {
                        sum[3] += -0.0445859917;
                      }
                    }
                  }
                } else {
                  if (sample[3] <90) {
                    if (sample[1] <143) {
                      if (sample[4] <97) {
                        if (sample[1] <127) {
                          sum[3] += 0.776340067;
                        } else {
                          sum[3] += 1.41917074;
                        }
                      } else {
                        sum[3] += 1.72183144;
                      }
                    } else {
                      if (sample[2] <80) {
                        sum[3] += 0.0289256144;
                      } else {
                        sum[3] += -0.250716329;
                      }
                    }
                  } else {
                    if (sample[2] <74) {
                      if (sample[1] <119) {
                        if (sample[1] <110) {
                          sum[3] += 0.184210509;
                        } else {
                          sum[3] += 1.23239434;
                        }
                      } else {
                        sum[3] += 1.6827774;
                      }
                    } else {
                      if (sample[1] <125) {
                        if (sample[3] <95) {
                          sum[3] += 0.649216771;
                        } else {
                          sum[3] += 0.0750670135;
                        }
                      } else {
                        if (sample[1] <141) {
                          sum[3] += 1.25425744;
                        } else {
                          sum[3] += 0.708879471;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[5] <144) {
                if (sample[3] <84) {
                  if (sample[3] <83) {
                    sum[3] += -0.258660495;
                  } else {
                    sum[3] += -0.0241379365;
                  }
                } else {
                  if (sample[3] <92) {
                    if (sample[3] <88) {
                      if (sample[1] <140) {
                        sum[3] += 1.02371538;
                      } else {
                        if (sample[0] <135) {
                          sum[3] += -0.0241379365;
                        } else {
                          sum[3] += 0.517751455;
                        }
                      }
                    } else {
                      if (sample[3] <91) {
                        sum[3] += 1.43246925;
                      } else {
                        if (sample[0] <142) {
                          sum[3] += 0.0642201751;
                        } else {
                          sum[3] += 0.921052575;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <97) {
                      if (sample[0] <139) {
                        sum[3] += 0.0289256144;
                      } else {
                        sum[3] += 0.544041395;
                      }
                    } else {
                      sum[3] += -0.184210524;
                    }
                  }
                }
              } else {
                if (sample[3] <91) {
                  if (sample[1] <146) {
                    if (sample[0] <137) {
                      sum[3] += -0.217616573;
                    } else {
                      sum[3] += 0.0289256144;
                    }
                  } else {
                    sum[3] += -0.288597792;
                  }
                } else {
                  if (sample[1] <156) {
                    if (sample[2] <90) {
                      if (sample[1] <143) {
                        if (sample[0] <147) {
                          sum[3] += -5.48990142e-09;
                        } else {
                          sum[3] += 0.417098433;
                        }
                      } else {
                        if (sample[4] <118) {
                          sum[3] += -0.139514729;
                        } else {
                          sum[3] += 0.313793093;
                        }
                      }
                    } else {
                      if (sample[1] <142) {
                        if (sample[4] <93) {
                          sum[3] += 0.231404945;
                        } else {
                          sum[3] += -0.217616573;
                        }
                      } else {
                        if (sample[2] <93) {
                          sum[3] += 0.598613203;
                        } else {
                          sum[3] += 0.239726007;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <161) {
                      if (sample[0] <165) {
                        sum[3] += -0.237735853;
                      } else {
                        if (sample[1] <158) {
                          sum[3] += -0.0813953504;
                        } else {
                          sum[3] += 0.223642156;
                        }
                      }
                    } else {
                      if (sample[2] <111) {
                        sum[3] += -0.278871983;
                      } else {
                        if (sample[0] <178) {
                          sum[3] += 0.144827574;
                        } else {
                          sum[3] += -0.229257643;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[3] <100) {
              if (sample[1] <111) {
                if (sample[4] <110) {
                  if (sample[1] <107) {
                    sum[3] += -0.284352243;
                  } else {
                    if (sample[3] <98) {
                      if (sample[4] <103) {
                        if (sample[1] <109) {
                          sum[3] += -0.17355372;
                        } else {
                          sum[3] += 0.313793093;
                        }
                      } else {
                        sum[3] += 0.513761461;
                      }
                    } else {
                      sum[3] += -0.261194021;
                    }
                  }
                } else {
                  if (sample[3] <98) {
                    if (sample[4] <113) {
                      if (sample[1] <105) {
                        sum[3] += 0.544041395;
                      } else {
                        if (sample[1] <107) {
                          sum[3] += -0.17355372;
                        } else {
                          sum[3] += 0.288990825;
                        }
                      }
                    } else {
                      if (sample[4] <118) {
                        sum[3] += -0.217616573;
                      } else {
                        if (sample[4] <119) {
                          sum[3] += 0.513761461;
                        } else {
                          sum[3] += -0.0773480684;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <116) {
                      sum[3] += -0.270802915;
                    } else {
                      if (sample[1] <103) {
                        sum[3] += -0.212707177;
                      } else {
                        if (sample[0] <122) {
                          sum[3] += 0.482758611;
                        } else {
                          sum[3] += 0.0415430181;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <78) {
                  if (sample[1] <129) {
                    if (sample[1] <122) {
                      if (sample[2] <65) {
                        if (sample[3] <97) {
                          sum[3] += 0.328729272;
                        } else {
                          sum[3] += 0.909747243;
                        }
                      } else {
                        if (sample[2] <67) {
                          sum[3] += -0.193103448;
                        } else {
                          sum[3] += 0.410572022;
                        }
                      }
                    } else {
                      if (sample[0] <148) {
                        if (sample[4] <143) {
                          sum[3] += 1.0818181;
                        } else {
                          sum[3] += 0.423566848;
                        }
                      } else {
                        if (sample[0] <150) {
                          sum[3] += -0.102439024;
                        } else {
                          sum[3] += 0.555956662;
                        }
                      }
                    }
                  } else {
                    sum[3] += 1.471753;
                  }
                } else {
                  if (sample[0] <178) {
                    if (sample[1] <151) {
                      if (sample[4] <119) {
                        if (sample[0] <157) {
                          sum[3] += 0.271758229;
                        } else {
                          sum[3] += -0.0598973259;
                        }
                      } else {
                        if (sample[0] <168) {
                          sum[3] += 0.891878128;
                        } else {
                          sum[3] += -0.207100585;
                        }
                      }
                    } else {
                      if (sample[2] <109) {
                        if (sample[0] <172) {
                          sum[3] += 0.730143487;
                        } else {
                          sum[3] += 0.220946893;
                        }
                      } else {
                        if (sample[3] <97) {
                          sum[3] += 0.231404945;
                        } else {
                          sum[3] += 1.25999999;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <163) {
                      if (sample[0] <183) {
                        if (sample[0] <179) {
                          sum[3] += -5.48990142e-09;
                        } else {
                          sum[3] += -0.23517786;
                        }
                      } else {
                        sum[3] += 0.417098433;
                      }
                    } else {
                      sum[3] += -0.275804669;
                    }
                  }
                }
              }
            } else {
              if (sample[3] <103) {
                if (sample[1] <121) {
                  if (sample[0] <129) {
                    if (sample[1] <104) {
                      sum[3] += -0.289662659;
                    } else {
                      if (sample[4] <114) {
                        if (sample[4] <92) {
                          sum[3] += -0.130705401;
                        } else {
                          sum[3] += -0.275510192;
                        }
                      } else {
                        if (sample[1] <106) {
                          sum[3] += -0.145283014;
                        } else {
                          sum[3] += 0.0170731638;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <101) {
                      if (sample[2] <66) {
                        sum[3] += 0.433884293;
                      } else {
                        if (sample[1] <112) {
                          sum[3] += 0.267515898;
                        } else {
                          sum[3] += -0.156394452;
                        }
                      }
                    } else {
                      if (sample[4] <138) {
                        if (sample[4] <123) {
                          sum[3] += -0.157469243;
                        } else {
                          sum[3] += -0.270430893;
                        }
                      } else {
                        if (sample[0] <141) {
                          sum[3] += 0.288990825;
                        } else {
                          sum[3] += -0.225806445;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <84) {
                    if (sample[3] <102) {
                      if (sample[0] <157) {
                        if (sample[3] <101) {
                          sum[3] += 0.372992665;
                        } else {
                          sum[3] += -0.0969230831;
                        }
                      } else {
                        if (sample[0] <173) {
                          sum[3] += 0.679611623;
                        } else {
                          sum[3] += -0.17355372;
                        }
                      }
                    } else {
                      if (sample[4] <142) {
                        if (sample[0] <160) {
                          sum[3] += -0.23517786;
                        } else {
                          sum[3] += 0.417098433;
                        }
                      } else {
                        sum[3] += -0.25454545;
                      }
                    }
                  } else {
                    if (sample[0] <190) {
                      if (sample[1] <150) {
                        if (sample[4] <105) {
                          sum[3] += -0.149096787;
                        } else {
                          sum[3] += 0.0925517678;
                        }
                      } else {
                        if (sample[2] <102) {
                          sum[3] += -5.48990142e-09;
                        } else {
                          sum[3] += 0.615015924;
                        }
                      }
                    } else {
                      sum[3] += -0.277990431;
                    }
                  }
                }
              } else {
                if (sample[4] <164) {
                  if (sample[3] <104) {
                    if (sample[0] <161) {
                      if (sample[0] <129) {
                        sum[3] += -0.288160861;
                      } else {
                        if (sample[0] <131) {
                          sum[3] += -0.156394452;
                        } else {
                          sum[3] += -0.261436462;
                        }
                      }
                    } else {
                      if (sample[1] <138) {
                        if (sample[4] <111) {
                          sum[3] += -0.172307685;
                        } else {
                          sum[3] += 0.211800277;
                        }
                      } else {
                        if (sample[2] <122) {
                          sum[3] += -0.259307027;
                        } else {
                          sum[3] += -0.0445859917;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <106) {
                      if (sample[0] <160) {
                        sum[3] += -0.29059422;
                      } else {
                        if (sample[0] <183) {
                          sum[3] += -0.183543205;
                        } else {
                          sum[3] += -0.287337154;
                        }
                      }
                    } else {
                      sum[3] += -0.291421294;
                    }
                  }
                } else {
                  if (sample[3] <108) {
                    if (sample[1] <133) {
                      if (sample[2] <66) {
                        if (sample[1] <120) {
                          sum[3] += -0.244186044;
                        } else {
                          sum[3] += 0.107858233;
                        }
                      } else {
                        if (sample[4] <170) {
                          sum[3] += 0.662721872;
                        } else {
                          sum[3] += 0.144827574;
                        }
                      }
                    } else {
                      if (sample[1] <136) {
                        if (sample[1] <135) {
                          sum[3] += -0.17355372;
                        } else {
                          sum[3] += 0.0642201751;
                        }
                      } else {
                        sum[3] += -0.27004537;
                      }
                    }
                  } else {
                    sum[3] += -0.285053223;
                  }
                }
              }
            }
          }
        }
      }
    }
  }


  if (sample[3] <136) {
    if (sample[3] <134) {
      if (sample[3] <8) {
        if (sample[4] <77) {
          if (sample[4] <52) {
            if (sample[4] <40) {
              sum[4] += -0.291335285;
            } else {
              if (sample[2] <130) {
                if (sample[0] <100) {
                  sum[4] += -0.290907055;
                } else {
                  if (sample[4] <51) {
                    sum[4] += -0.278913736;
                  } else {
                    sum[4] += -0.234118626;
                  }
                }
              } else {
                if (sample[3] <3) {
                  if (sample[2] <177) {
                    if (sample[2] <136) {
                      if (sample[1] <106) {
                        sum[4] += 0.0580110401;
                      } else {
                        sum[4] += -0.235323623;
                      }
                    } else {
                      if (sample[0] <123) {
                        if (sample[0] <121) {
                          sum[4] += -0.0336000063;
                        } else {
                          sum[4] += 0.433884293;
                        }
                      } else {
                        if (sample[2] <162) {
                          sum[4] += -0.248612642;
                        } else {
                          sum[4] += -7.7841884e-09;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <184) {
                      sum[4] += 0.807692289;
                    } else {
                      sum[4] += -0.193103448;
                    }
                  }
                } else {
                  if (sample[0] <112) {
                    if (sample[1] <117) {
                      if (sample[2] <131) {
                        sum[4] += -0.283284456;
                      } else {
                        if (sample[4] <45) {
                          sum[4] += -0.25454545;
                        } else {
                          sum[4] += -0.16592823;
                        }
                      }
                    } else {
                      sum[4] += 0.0642201751;
                    }
                  } else {
                    sum[4] += -0.268923432;
                  }
                }
              }
            }
          } else {
            if (sample[2] <136) {
              if (sample[3] <3) {
                if (sample[4] <63) {
                  if (sample[2] <127) {
                    if (sample[1] <102) {
                      sum[4] += -0.277856231;
                    } else {
                      sum[4] += -0.0445859917;
                    }
                  } else {
                    if (sample[1] <102) {
                      if (sample[3] <1) {
                        sum[4] += 0.579617798;
                      } else {
                        if (sample[0] <98) {
                          sum[4] += 0.144827574;
                        } else {
                          sum[4] += -0.130705401;
                        }
                      }
                    } else {
                      if (sample[0] <103) {
                        sum[4] += -0.274912059;
                      } else {
                        if (sample[3] <2) {
                          sum[4] += -0.105047755;
                        } else {
                          sum[4] += -0.257719696;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <105) {
                    if (sample[1] <69) {
                      if (sample[4] <64) {
                        if (sample[0] <59) {
                          sum[4] += 0.184210509;
                        } else {
                          sum[4] += -0.17355372;
                        }
                      } else {
                        sum[4] += -0.267735958;
                      }
                    } else {
                      if (sample[0] <70) {
                        sum[4] += 0.552631557;
                      } else {
                        if (sample[3] <1) {
                          sum[4] += 0.0170731638;
                        } else {
                          sum[4] += -0.218336478;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <2) {
                      if (sample[4] <69) {
                        if (sample[1] <93) {
                          sum[4] += 0.12727271;
                        } else {
                          sum[4] += 0.495121926;
                        }
                      } else {
                        sum[4] += 0.78978616;
                      }
                    } else {
                      if (sample[4] <71) {
                        if (sample[0] <91) {
                          sum[4] += -0.236011475;
                        } else {
                          sum[4] += 0.0427872762;
                        }
                      } else {
                        if (sample[0] <91) {
                          sum[4] += 0.152173907;
                        } else {
                          sum[4] += 0.820689619;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <128) {
                  if (sample[3] <5) {
                    if (sample[4] <72) {
                      if (sample[2] <124) {
                        if (sample[4] <69) {
                          sum[4] += -0.285239875;
                        } else {
                          sum[4] += -0.208916724;
                        }
                      } else {
                        if (sample[2] <126) {
                          sum[4] += -0.20744893;
                        } else {
                          sum[4] += -0.283987105;
                        }
                      }
                    } else {
                      if (sample[0] <87) {
                        if (sample[3] <4) {
                          sum[4] += -0.101018682;
                        } else {
                          sum[4] += -0.24487333;
                        }
                      } else {
                        if (sample[0] <89) {
                          sum[4] += 0.152173907;
                        } else {
                          sum[4] += -0.200636938;
                        }
                      }
                    }
                  } else {
                    sum[4] += -0.286850899;
                  }
                } else {
                  if (sample[1] <100) {
                    if (sample[4] <71) {
                      if (sample[2] <129) {
                        sum[4] += 0.231404945;
                      } else {
                        sum[4] += -5.48990142e-09;
                      }
                    } else {
                      if (sample[0] <92) {
                        sum[4] += -5.48990142e-09;
                      } else {
                        sum[4] += -0.250716329;
                      }
                    }
                  } else {
                    if (sample[1] <112) {
                      if (sample[0] <104) {
                        if (sample[1] <101) {
                          sum[4] += -0.18095839;
                        } else {
                          sum[4] += -0.256525695;
                        }
                      } else {
                        if (sample[2] <132) {
                          sum[4] += 0.184210509;
                        } else {
                          sum[4] += -0.224973649;
                        }
                      }
                    } else {
                      sum[4] += 0.0642201751;
                    }
                  }
                }
              }
            } else {
              if (sample[3] <5) {
                if (sample[4] <64) {
                  if (sample[4] <56) {
                    if (sample[2] <152) {
                      sum[4] += 0.662721872;
                    } else {
                      if (sample[3] <3) {
                        if (sample[1] <128) {
                          sum[4] += -0.0445859917;
                        } else {
                          sum[4] += 0.614634097;
                        }
                      } else {
                        sum[4] += -0.212707177;
                      }
                    }
                  } else {
                    if (sample[1] <121) {
                      if (sample[2] <147) {
                        sum[4] += 0.847980976;
                      } else {
                        if (sample[0] <115) {
                          sum[4] += 0.00938337017;
                        } else {
                          sum[4] += 0.332344204;
                        }
                      }
                    } else {
                      if (sample[2] <187) {
                        if (sample[4] <57) {
                          sum[4] += 0.368421048;
                        } else {
                          sum[4] += 1.2104404;
                        }
                      } else {
                        sum[4] += 0.231404945;
                      }
                    }
                  }
                } else {
                  if (sample[0] <108) {
                    if (sample[1] <109) {
                      if (sample[4] <70) {
                        if (sample[3] <3) {
                          sum[4] += 0.885892093;
                        } else {
                          sum[4] += -0.17355372;
                        }
                      } else {
                        if (sample[2] <140) {
                          sum[4] += 0.184210509;
                        } else {
                          sum[4] += -0.232365146;
                        }
                      }
                    } else {
                      sum[4] += 1.0866425;
                    }
                  } else {
                    if (sample[2] <156) {
                      if (sample[0] <110) {
                        if (sample[3] <2) {
                          sum[4] += -0.16055046;
                        } else {
                          sum[4] += 0.288990825;
                        }
                      } else {
                        if (sample[4] <71) {
                          sum[4] += -0.273367465;
                        } else {
                          sum[4] += 0.0642201751;
                        }
                      }
                    } else {
                      if (sample[4] <72) {
                        if (sample[4] <65) {
                          sum[4] += 0.144827574;
                        } else {
                          sum[4] += 0.676404476;
                        }
                      } else {
                        if (sample[0] <117) {
                          sum[4] += 0.513761461;
                        } else {
                          sum[4] += -0.240072206;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[4] <60) {
                  if (sample[3] <6) {
                    if (sample[2] <158) {
                      if (sample[0] <113) {
                        if (sample[0] <109) {
                          sum[4] += -0.193103448;
                        } else {
                          sum[4] += 0.288990825;
                        }
                      } else {
                        sum[4] += -0.242214531;
                      }
                    } else {
                      if (sample[2] <164) {
                        sum[4] += 0.807692289;
                      } else {
                        sum[4] += -0.229257643;
                      }
                    }
                  } else {
                    if (sample[0] <142) {
                      if (sample[0] <128) {
                        if (sample[1] <133) {
                          sum[4] += -0.220695227;
                        } else {
                          sum[4] += 0.433884293;
                        }
                      } else {
                        sum[4] += -0.264969021;
                      }
                    } else {
                      if (sample[0] <145) {
                        sum[4] += 0.482758611;
                      } else {
                        sum[4] += -0.200636938;
                      }
                    }
                  }
                } else {
                  if (sample[0] <123) {
                    if (sample[0] <113) {
                      if (sample[1] <115) {
                        if (sample[0] <102) {
                          sum[4] += -0.225806445;
                        } else {
                          sum[4] += 0.266033232;
                        }
                      } else {
                        if (sample[1] <118) {
                          sum[4] += -0.206783369;
                        } else {
                          sum[4] += 0.0121107185;
                        }
                      }
                    } else {
                      if (sample[1] <124) {
                        if (sample[1] <121) {
                          sum[4] += 0.0642201751;
                        } else {
                          sum[4] += 0.662721872;
                        }
                      } else {
                        if (sample[3] <7) {
                          sum[4] += 0.198689938;
                        } else {
                          sum[4] += -0.217616573;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <70) {
                      if (sample[3] <7) {
                        sum[4] += 1.24121404;
                      } else {
                        if (sample[4] <62) {
                          sum[4] += 0.0642201751;
                        } else {
                          sum[4] += 0.735668778;
                        }
                      }
                    } else {
                      sum[4] += 0.313793093;
                    }
                  }
                }
              }
            }
          }
        } else {
          if (sample[4] <119) {
            if (sample[1] <90) {
              if (sample[2] <101) {
                if (sample[2] <89) {
                  if (sample[2] <69) {
                    if (sample[4] <116) {
                      sum[4] += -0.288864911;
                    } else {
                      if (sample[0] <31) {
                        sum[4] += -0.221951216;
                      } else {
                        sum[4] += -5.48990142e-09;
                      }
                    }
                  } else {
                    if (sample[4] <83) {
                      sum[4] += -0.27004537;
                    } else {
                      if (sample[0] <54) {
                        if (sample[1] <50) {
                          sum[4] += -0.0330812931;
                        } else {
                          sum[4] += -0.197972253;
                        }
                      } else {
                        if (sample[1] <61) {
                          sum[4] += 0.202166051;
                        } else {
                          sum[4] += -0.193103448;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[1] <67) {
                    if (sample[2] <97) {
                      if (sample[1] <57) {
                        if (sample[2] <92) {
                          sum[4] += 0.231404945;
                        } else {
                          sum[4] += 0.820689619;
                        }
                      } else {
                        if (sample[0] <56) {
                          sum[4] += -0.162790701;
                        } else {
                          sum[4] += 0.325581372;
                        }
                      }
                    } else {
                      sum[4] += 0.981755912;
                    }
                  } else {
                    if (sample[4] <92) {
                      if (sample[2] <98) {
                        sum[4] += -0.275370568;
                      } else {
                        if (sample[3] <7) {
                          sum[4] += 0.0670926422;
                        } else {
                          sum[4] += -0.240072206;
                        }
                      }
                    } else {
                      if (sample[0] <59) {
                        sum[4] += -0.184210524;
                      } else {
                        if (sample[0] <62) {
                          sum[4] += 0.732851923;
                        } else {
                          sum[4] += 0.0362694226;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <6) {
                  if (sample[2] <142) {
                    if (sample[4] <82) {
                      if (sample[3] <3) {
                        sum[4] += 1.37445247;
                      } else {
                        if (sample[1] <79) {
                          sum[4] += 0.279999971;
                        } else {
                          sum[4] += -0.108053692;
                        }
                      }
                    } else {
                      if (sample[0] <78) {
                        if (sample[1] <82) {
                          sum[4] += 1.5457828;
                        } else {
                          sum[4] += 1.14905655;
                        }
                      } else {
                        if (sample[1] <88) {
                          sum[4] += 1.70332015;
                        } else {
                          sum[4] += 1.50057757;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <118) {
                      if (sample[4] <100) {
                        sum[4] += 0.0642201751;
                      } else {
                        if (sample[2] <144) {
                          sum[4] += -0.11290323;
                        } else {
                          sum[4] += -0.269645602;
                        }
                      }
                    } else {
                      if (sample[1] <87) {
                        sum[4] += 0.288990825;
                      } else {
                        sum[4] += -0.16055046;
                      }
                    }
                  }
                } else {
                  if (sample[4] <100) {
                    if (sample[4] <90) {
                      if (sample[0] <68) {
                        sum[4] += 0.288990825;
                      } else {
                        if (sample[4] <85) {
                          sum[4] += -0.261436462;
                        } else {
                          sum[4] += -0.128015563;
                        }
                      }
                    } else {
                      if (sample[2] <120) {
                        if (sample[2] <109) {
                          sum[4] += 0.152173892;
                        } else {
                          sum[4] += 0.636363626;
                        }
                      } else {
                        if (sample[4] <97) {
                          sum[4] += -0.232365146;
                        } else {
                          sum[4] += 0.111464955;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <126) {
                      if (sample[0] <73) {
                        if (sample[3] <7) {
                          sum[4] += 1.60963285;
                        } else {
                          sum[4] += 1.25655055;
                        }
                      } else {
                        if (sample[1] <84) {
                          sum[4] += -0.200636938;
                        } else {
                          sum[4] += 0.859861553;
                        }
                      }
                    } else {
                      if (sample[1] <85) {
                        if (sample[2] <129) {
                          sum[4] += 0.0580110401;
                        } else {
                          sum[4] += 0.926877439;
                        }
                      } else {
                        if (sample[0] <78) {
                          sum[4] += -0.0987306088;
                        } else {
                          sum[4] += 0.6517241;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[2] <143) {
                if (sample[3] <2) {
                  if (sample[0] <89) {
                    sum[4] += 0.564516127;
                  } else {
                    sum[4] += 1.55538845;
                  }
                } else {
                  if (sample[2] <128) {
                    if (sample[3] <5) {
                      sum[4] += 0.184210509;
                    } else {
                      if (sample[2] <124) {
                        sum[4] += -0.287368417;
                      } else {
                        if (sample[3] <7) {
                          sum[4] += -0.130559549;
                        } else {
                          sum[4] += -0.241222367;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <134) {
                      if (sample[1] <95) {
                        if (sample[2] <130) {
                          sum[4] += 0.730973423;
                        } else {
                          sum[4] += 1.50382769;
                        }
                      } else {
                        if (sample[4] <89) {
                          sum[4] += -0.00960659515;
                        } else {
                          sum[4] += 0.636363626;
                        }
                      }
                    } else {
                      if (sample[3] <5) {
                        if (sample[0] <85) {
                          sum[4] += -0.217616573;
                        } else {
                          sum[4] += 0.303149581;
                        }
                      } else {
                        if (sample[4] <103) {
                          sum[4] += -0.276216209;
                        } else {
                          sum[4] += -0.113590263;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[4] <99) {
                  if (sample[1] <93) {
                    sum[4] += 1.10526311;
                  } else {
                    if (sample[4] <85) {
                      if (sample[0] <104) {
                        if (sample[2] <144) {
                          sum[4] += 0.433884293;
                        } else {
                          sum[4] += -0.108053692;
                        }
                      } else {
                        if (sample[1] <112) {
                          sum[4] += 0.562326849;
                        } else {
                          sum[4] += 0.0510948785;
                        }
                      }
                    } else {
                      if (sample[0] <91) {
                        if (sample[2] <145) {
                          sum[4] += -0.0906735808;
                        } else {
                          sum[4] += 0.599447489;
                        }
                      } else {
                        if (sample[4] <95) {
                          sum[4] += -0.0655737743;
                        } else {
                          sum[4] += -0.230407521;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[1] <115) {
                    if (sample[0] <81) {
                      if (sample[2] <144) {
                        sum[4] += 0.0642201751;
                      } else {
                        sum[4] += -0.200636938;
                      }
                    } else {
                      sum[4] += -0.283370733;
                    }
                  } else {
                    if (sample[2] <176) {
                      sum[4] += -0.237735853;
                    } else {
                      if (sample[2] <182) {
                        sum[4] += 0.368421048;
                      } else {
                        sum[4] += -0.23517786;
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[4] <125) {
              if (sample[2] <121) {
                if (sample[1] <65) {
                  if (sample[1] <55) {
                    sum[4] += -0.269645602;
                  } else {
                    if (sample[3] <5) {
                      if (sample[1] <58) {
                        sum[4] += 0.433884293;
                      } else {
                        if (sample[1] <60) {
                          sum[4] += 0.0642201751;
                        } else {
                          sum[4] += -0.17355372;
                        }
                      }
                    } else {
                      if (sample[4] <123) {
                        sum[4] += 1.0545851;
                      } else {
                        sum[4] += 0.231404945;
                      }
                    }
                  }
                } else {
                  if (sample[1] <74) {
                    if (sample[0] <59) {
                      if (sample[2] <110) {
                        if (sample[3] <7) {
                          sum[4] += 1.31704772;
                        } else {
                          sum[4] += 0.517751455;
                        }
                      } else {
                        sum[4] += -0.184210524;
                      }
                    } else {
                      if (sample[3] <6) {
                        sum[4] += 0.859861553;
                      } else {
                        sum[4] += 1.72510612;
                      }
                    }
                  } else {
                    sum[4] += 0.144827574;
                  }
                }
              } else {
                if (sample[2] <131) {
                  if (sample[3] <6) {
                    if (sample[3] <5) {
                      if (sample[2] <127) {
                        sum[4] += 0.368421048;
                      } else {
                        sum[4] += -0.229257643;
                      }
                    } else {
                      sum[4] += 1.0791074;
                    }
                  } else {
                    if (sample[2] <129) {
                      if (sample[1] <81) {
                        sum[4] += -0.247692302;
                      } else {
                        sum[4] += 0.0289256144;
                      }
                    } else {
                      if (sample[4] <124) {
                        sum[4] += 0.231404945;
                      } else {
                        sum[4] += 1.04132223;
                      }
                    }
                  }
                } else {
                  if (sample[2] <132) {
                    if (sample[1] <81) {
                      sum[4] += -0.217616573;
                    } else {
                      sum[4] += 0.0289256144;
                    }
                  } else {
                    sum[4] += -0.288131803;
                  }
                }
              }
            } else {
              if (sample[2] <124) {
                if (sample[0] <44) {
                  if (sample[1] <20) {
                    sum[4] += -0.291406065;
                  } else {
                    if (sample[1] <21) {
                      if (sample[2] <46) {
                        sum[4] += -0.193103448;
                      } else {
                        sum[4] += 0.288990825;
                      }
                    } else {
                      if (sample[4] <147) {
                        if (sample[1] <55) {
                          sum[4] += -0.284538656;
                        } else {
                          sum[4] += -0.062130183;
                        }
                      } else {
                        if (sample[4] <156) {
                          sum[4] += -0.0171149205;
                        } else {
                          sum[4] += -0.269230753;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <117) {
                    if (sample[3] <6) {
                      if (sample[4] <127) {
                        sum[4] += 0.231404945;
                      } else {
                        sum[4] += -0.23517786;
                      }
                    } else {
                      if (sample[4] <140) {
                        if (sample[1] <64) {
                          sum[4] += 1.11664557;
                        } else {
                          sum[4] += 1.56203413;
                        }
                      } else {
                        if (sample[2] <102) {
                          sum[4] += 0.288990825;
                        } else {
                          sum[4] += -0.200636938;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <136) {
                      if (sample[3] <6) {
                        sum[4] += -0.232365146;
                      } else {
                        if (sample[2] <121) {
                          sum[4] += 0.853658497;
                        } else {
                          sum[4] += -5.48990142e-09;
                        }
                      }
                    } else {
                      sum[4] += -0.25454545;
                    }
                  }
                }
              } else {
                sum[4] += -0.291641712;
              }
            }
          }
        }
      } else {
        if (sample[3] <12) {
          if (sample[1] <70) {
            if (sample[2] <94) {
              if (sample[2] <92) {
                if (sample[2] <55) {
                  sum[4] += -0.291230887;
                } else {
                  if (sample[4] <111) {
                    sum[4] += -0.286455125;
                  } else {
                    if (sample[4] <112) {
                      sum[4] += 0.0828402266;
                    } else {
                      if (sample[1] <61) {
                        if (sample[2] <57) {
                          sum[4] += -0.127272725;
                        } else {
                          sum[4] += -0.256621569;
                        }
                      } else {
                        if (sample[4] <120) {
                          sum[4] += -0.249258161;
                        } else {
                          sum[4] += 0.193370149;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <67) {
                  if (sample[1] <56) {
                    sum[4] += -0.253351212;
                  } else {
                    if (sample[0] <49) {
                      if (sample[3] <9) {
                        sum[4] += -0.16055046;
                      } else {
                        sum[4] += 0.46408838;
                      }
                    } else {
                      if (sample[0] <54) {
                        sum[4] += -0.221951216;
                      } else {
                        sum[4] += 0.144827574;
                      }
                    }
                  }
                } else {
                  sum[4] += -0.264650285;
                }
              }
            } else {
              if (sample[4] <156) {
                if (sample[4] <123) {
                  if (sample[2] <100) {
                    if (sample[2] <98) {
                      if (sample[0] <50) {
                        sum[4] += 0.0289256144;
                      } else {
                        sum[4] += -0.276606947;
                      }
                    } else {
                      if (sample[1] <67) {
                        sum[4] += 0.513761461;
                      } else {
                        if (sample[2] <99) {
                          sum[4] += -0.225806445;
                        } else {
                          sum[4] += 0.163212419;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <9) {
                      sum[4] += 1.21219504;
                    } else {
                      sum[4] += 0.0642201751;
                    }
                  }
                } else {
                  if (sample[2] <111) {
                    if (sample[4] <132) {
                      if (sample[3] <9) {
                        sum[4] += 1.35483861;
                      } else {
                        if (sample[3] <11) {
                          sum[4] += 0.706930637;
                        } else {
                          sum[4] += 0.22580643;
                        }
                      }
                    } else {
                      if (sample[2] <95) {
                        if (sample[0] <44) {
                          sum[4] += 0.579617798;
                        } else {
                          sum[4] += -0.16055046;
                        }
                      } else {
                        if (sample[1] <58) {
                          sum[4] += 0.614634097;
                        } else {
                          sum[4] += 1.56843472;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <53) {
                      if (sample[4] <143) {
                        if (sample[4] <140) {
                          sum[4] += -5.48990142e-09;
                        } else {
                          sum[4] += 0.144827574;
                        }
                      } else {
                        sum[4] += -0.261954248;
                      }
                    } else {
                      sum[4] += 1.30232549;
                    }
                  }
                }
              } else {
                if (sample[4] <160) {
                  if (sample[2] <108) {
                    if (sample[1] <64) {
                      if (sample[2] <102) {
                        sum[4] += 0.313793093;
                      } else {
                        sum[4] += -0.200636938;
                      }
                    } else {
                      sum[4] += 1.27744806;
                    }
                  } else {
                    sum[4] += -0.253351212;
                  }
                } else {
                  if (sample[2] <99) {
                    if (sample[1] <56) {
                      sum[4] += -0.25207755;
                    } else {
                      sum[4] += 0.368421048;
                    }
                  } else {
                    sum[4] += -0.286778897;
                  }
                }
              }
            }
          } else {
            if (sample[1] <77) {
              if (sample[2] <119) {
                if (sample[2] <107) {
                  if (sample[4] <105) {
                    if (sample[2] <105) {
                      sum[4] += -0.290525943;
                    } else {
                      if (sample[0] <64) {
                        sum[4] += 0.288990825;
                      } else {
                        sum[4] += -0.184210524;
                      }
                    }
                  } else {
                    if (sample[3] <10) {
                      if (sample[1] <72) {
                        sum[4] += 1.05660367;
                      } else {
                        if (sample[4] <109) {
                          sum[4] += 0.0289256144;
                        } else {
                          sum[4] += 0.579617798;
                        }
                      }
                    } else {
                      if (sample[4] <126) {
                        if (sample[0] <58) {
                          sum[4] += -0.175879389;
                        } else {
                          sum[4] += 0.0510948785;
                        }
                      } else {
                        sum[4] += 0.495121926;
                      }
                    }
                  }
                } else {
                  if (sample[0] <56) {
                    if (sample[2] <116) {
                      if (sample[3] <10) {
                        if (sample[2] <111) {
                          sum[4] += -0.062130183;
                        } else {
                          sum[4] += 1.18708968;
                        }
                      } else {
                        if (sample[2] <113) {
                          sum[4] += 0.42743361;
                        } else {
                          sum[4] += 0.0277227629;
                        }
                      }
                    } else {
                      if (sample[4] <137) {
                        if (sample[4] <136) {
                          sum[4] += -0.184210524;
                        } else {
                          sum[4] += -5.48990142e-09;
                        }
                      } else {
                        sum[4] += -0.276414067;
                      }
                    }
                  } else {
                    if (sample[2] <113) {
                      if (sample[4] <103) {
                        sum[4] += -0.16055046;
                      } else {
                        if (sample[0] <60) {
                          sum[4] += 0.530995071;
                        } else {
                          sum[4] += 1.09879637;
                        }
                      }
                    } else {
                      if (sample[0] <60) {
                        sum[4] += 1.69597077;
                      } else {
                        if (sample[4] <122) {
                          sum[4] += 0.947598219;
                        } else {
                          sum[4] += -0.17355372;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[4] <132) {
                  sum[4] += 0.0642201751;
                } else {
                  sum[4] += -0.29155612;
                }
              }
            } else {
              if (sample[4] <63) {
                if (sample[4] <36) {
                  sum[4] += -0.291476458;
                } else {
                  if (sample[2] <183) {
                    if (sample[1] <106) {
                      sum[4] += -0.29118067;
                    } else {
                      if (sample[0] <102) {
                        if (sample[1] <110) {
                          sum[4] += -0.273115367;
                        } else {
                          sum[4] += -0.163854107;
                        }
                      } else {
                        if (sample[1] <108) {
                          sum[4] += -0.214198276;
                        } else {
                          sum[4] += -0.285825342;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <149) {
                      if (sample[2] <184) {
                        if (sample[1] <158) {
                          sum[4] += -0.229257643;
                        } else {
                          sum[4] += 0.163212419;
                        }
                      } else {
                        sum[4] += 0.820689619;
                      }
                    } else {
                      if (sample[1] <160) {
                        if (sample[0] <151) {
                          sum[4] += -0.17355372;
                        } else {
                          sum[4] += 0.0642201751;
                        }
                      } else {
                        sum[4] += -0.284825265;
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <183) {
                  if (sample[1] <107) {
                    if (sample[4] <135) {
                      if (sample[0] <58) {
                        if (sample[1] <78) {
                          sum[4] += 1.50092411;
                        } else {
                          sum[4] += -0.151624545;
                        }
                      } else {
                        if (sample[4] <105) {
                          sum[4] += -0.285051793;
                        } else {
                          sum[4] += -0.170641288;
                        }
                      }
                    } else {
                      sum[4] += -0.291643858;
                    }
                  } else {
                    if (sample[3] <10) {
                      if (sample[2] <177) {
                        if (sample[4] <87) {
                          sum[4] += -0.0819119439;
                        } else {
                          sum[4] += -0.20789957;
                        }
                      } else {
                        if (sample[0] <127) {
                          sum[4] += 0.368421048;
                        } else {
                          sum[4] += 0.0289256144;
                        }
                      }
                    } else {
                      if (sample[4] <77) {
                        sum[4] += -0.259692878;
                      } else {
                        if (sample[4] <81) {
                          sum[4] += 0.0371681303;
                        } else {
                          sum[4] += -0.220539227;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <102) {
                    sum[4] += -0.256723702;
                  } else {
                    if (sample[2] <191) {
                      sum[4] += 1.0818181;
                    } else {
                      sum[4] += 0.231404945;
                    }
                  }
                }
              }
            }
          }
        } else {
          if (sample[3] <131) {
            if (sample[3] <121) {
              if (sample[3] <14) {
                if (sample[1] <69) {
                  if (sample[0] <34) {
                    if (sample[4] <190) {
                      if (sample[2] <88) {
                        sum[4] += -0.286670953;
                      } else {
                        if (sample[0] <27) {
                          sum[4] += 0.901661992;
                        } else {
                          sum[4] += -0.248560458;
                        }
                      }
                    } else {
                      sum[4] += -0.290647596;
                    }
                  } else {
                    if (sample[4] <145) {
                      if (sample[4] <126) {
                        sum[4] += -0.286460817;
                      } else {
                        if (sample[3] <13) {
                          sum[4] += -0.0109976511;
                        } else {
                          sum[4] += -0.203864992;
                        }
                      }
                    } else {
                      if (sample[0] <39) {
                        if (sample[1] <63) {
                          sum[4] += 0.548067331;
                        } else {
                          sum[4] += -0.164964646;
                        }
                      } else {
                        if (sample[2] <110) {
                          sum[4] += 1.53895593;
                        } else {
                          sum[4] += -0.184210524;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <114) {
                    sum[4] += -0.290824383;
                  } else {
                    if (sample[2] <117) {
                      if (sample[4] <126) {
                        if (sample[3] <13) {
                          sum[4] += -0.215911672;
                        } else {
                          sum[4] += -0.273474962;
                        }
                      } else {
                        if (sample[2] <110) {
                          sum[4] += 0.00401651626;
                        } else {
                          sum[4] += -0.183418632;
                        }
                      }
                    } else {
                      if (sample[4] <147) {
                        if (sample[0] <53) {
                          sum[4] += -0.197622582;
                        } else {
                          sum[4] += -0.276914269;
                        }
                      } else {
                        sum[4] += -0.291495472;
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <18) {
                  if (sample[1] <61) {
                    if (sample[4] <235) {
                      if (sample[4] <186) {
                        if (sample[2] <91) {
                          sum[4] += -0.287533671;
                        } else {
                          sum[4] += 0.546599448;
                        }
                      } else {
                        if (sample[2] <72) {
                          sum[4] += -0.28358674;
                        } else {
                          sum[4] += 0.315863103;
                        }
                      }
                    } else {
                      if (sample[4] <241) {
                        if (sample[0] <6) {
                          sum[4] += -0.0744680911;
                        } else {
                          sum[4] += -0.282220751;
                        }
                      } else {
                        if (sample[2] <73) {
                          sum[4] += -0.285254657;
                        } else {
                          sum[4] += -0.291642338;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <124) {
                      sum[4] += -0.291388005;
                    } else {
                      if (sample[4] <195) {
                        if (sample[0] <25) {
                          sum[4] += 0.150645614;
                        } else {
                          sum[4] += -0.276184767;
                        }
                      } else {
                        sum[4] += -0.291637599;
                      }
                    }
                  }
                } else {
                  if (sample[4] <49) {
                    sum[4] += -0.291645527;
                  } else {
                    if (sample[3] <116) {
                      if (sample[0] <120) {
                        if (sample[3] <20) {
                          sum[4] += -0.289133817;
                        } else {
                          sum[4] += -0.291574836;
                        }
                      } else {
                        if (sample[2] <91) {
                          sum[4] += -0.289512426;
                        } else {
                          sum[4] += -0.290949494;
                        }
                      }
                    } else {
                      if (sample[0] <159) {
                        if (sample[4] <76) {
                          sum[4] += -0.287491024;
                        } else {
                          sum[4] += -0.238298625;
                        }
                      } else {
                        if (sample[1] <107) {
                          sum[4] += 0.32753551;
                        } else {
                          sum[4] += -0.202223107;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[4] <60) {
                if (sample[4] <52) {
                  if (sample[4] <43) {
                    if (sample[4] <31) {
                      sum[4] += -0.291499346;
                    } else {
                      if (sample[2] <131) {
                        sum[4] += -0.287915856;
                      } else {
                        if (sample[3] <124) {
                          sum[4] += -0.284978926;
                        } else {
                          sum[4] += -0.148208469;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <124) {
                      if (sample[2] <118) {
                        sum[4] += -0.28031677;
                      } else {
                        if (sample[3] <127) {
                          sum[4] += -0.230230927;
                        } else {
                          sum[4] += 0.249011844;
                        }
                      }
                    } else {
                      if (sample[3] <126) {
                        if (sample[0] <183) {
                          sum[4] += -0.0471847802;
                        } else {
                          sum[4] += 0.552631557;
                        }
                      } else {
                        if (sample[4] <45) {
                          sum[4] += -0.200636938;
                        } else {
                          sum[4] += 0.539861321;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <128) {
                    if (sample[2] <115) {
                      if (sample[2] <110) {
                        sum[4] += -0.266067713;
                      } else {
                        if (sample[2] <112) {
                          sum[4] += -0.0311572757;
                        } else {
                          sum[4] += -0.224436745;
                        }
                      }
                    } else {
                      if (sample[4] <54) {
                        if (sample[0] <140) {
                          sum[4] += 0.0642201751;
                        } else {
                          sum[4] += -0.23517786;
                        }
                      } else {
                        if (sample[4] <58) {
                          sum[4] += 0.337801576;
                        } else {
                          sum[4] += -0.130705401;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <178) {
                      if (sample[3] <130) {
                        if (sample[1] <136) {
                          sum[4] += 1.145275;
                        } else {
                          sum[4] += 0.544041395;
                        }
                      } else {
                        sum[4] += 0.184210509;
                      }
                    } else {
                      if (sample[3] <126) {
                        if (sample[1] <145) {
                          sum[4] += -0.240072206;
                        } else {
                          sum[4] += 0.163212419;
                        }
                      } else {
                        if (sample[2] <152) {
                          sum[4] += 0.0289256144;
                        } else {
                          sum[4] += 0.895348787;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <95) {
                  if (sample[0] <122) {
                    if (sample[2] <84) {
                      if (sample[0] <117) {
                        sum[4] += -0.287224889;
                      } else {
                        if (sample[3] <128) {
                          sum[4] += -0.25207755;
                        } else {
                          sum[4] += 0.288990825;
                        }
                      }
                    } else {
                      if (sample[1] <88) {
                        if (sample[2] <93) {
                          sum[4] += -0.13416943;
                        } else {
                          sum[4] += 0.275933594;
                        }
                      } else {
                        sum[4] += -0.263366342;
                      }
                    }
                  } else {
                    if (sample[0] <137) {
                      if (sample[4] <76) {
                        sum[4] += -0.232365146;
                      } else {
                        if (sample[1] <82) {
                          sum[4] += 0.201599985;
                        } else {
                          sum[4] += 0.731460631;
                        }
                      }
                    } else {
                      if (sample[1] <85) {
                        if (sample[0] <166) {
                          sum[4] += -0.224436745;
                        } else {
                          sum[4] += 0.0642201751;
                        }
                      } else {
                        if (sample[4] <99) {
                          sum[4] += -5.48990142e-09;
                        } else {
                          sum[4] += 0.479253083;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[1] <138) {
                    if (sample[0] <150) {
                      if (sample[1] <92) {
                        if (sample[4] <67) {
                          sum[4] += -0.130705401;
                        } else {
                          sum[4] += 1.15224457;
                        }
                      } else {
                        if (sample[2] <112) {
                          sum[4] += 0.0015758581;
                        } else {
                          sum[4] += 0.586752594;
                        }
                      }
                    } else {
                      if (sample[3] <126) {
                        if (sample[4] <88) {
                          sum[4] += 0.740820706;
                        } else {
                          sum[4] += 1.24740982;
                        }
                      } else {
                        sum[4] += 1.52044284;
                      }
                    }
                  } else {
                    if (sample[3] <127) {
                      if (sample[0] <188) {
                        if (sample[2] <146) {
                          sum[4] += 0.0170731638;
                        } else {
                          sum[4] += 0.838842928;
                        }
                      } else {
                        if (sample[4] <84) {
                          sum[4] += -0.263169736;
                        } else {
                          sum[4] += 0.513761461;
                        }
                      }
                    } else {
                      if (sample[4] <69) {
                        if (sample[2] <156) {
                          sum[4] += 0.519650638;
                        } else {
                          sum[4] += 1.24193537;
                        }
                      } else {
                        if (sample[3] <129) {
                          sum[4] += -0.200636938;
                        } else {
                          sum[4] += 0.227810636;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[4] <55) {
              if (sample[4] <42) {
                if (sample[4] <36) {
                  if (sample[4] <27) {
                    sum[4] += -0.291039944;
                  } else {
                    if (sample[0] <152) {
                      if (sample[0] <148) {
                        sum[4] += -0.283857554;
                      } else {
                        if (sample[4] <30) {
                          sum[4] += -0.207100585;
                        } else {
                          sum[4] += 0.0642201751;
                        }
                      }
                    } else {
                      if (sample[0] <154) {
                        sum[4] += 0.636363626;
                      } else {
                        if (sample[3] <132) {
                          sum[4] += -0.212707177;
                        } else {
                          sum[4] += 0.193370149;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <144) {
                    if (sample[0] <127) {
                      sum[4] += -0.282818377;
                    } else {
                      if (sample[0] <129) {
                        if (sample[4] <39) {
                          sum[4] += 0.0580110401;
                        } else {
                          sum[4] += -0.16055046;
                        }
                      } else {
                        if (sample[0] <141) {
                          sum[4] += -0.224436745;
                        } else {
                          sum[4] += -5.48990142e-09;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <132) {
                      sum[4] += 0.288990825;
                    } else {
                      sum[4] += 1.00552487;
                    }
                  }
                }
              } else {
                if (sample[1] <112) {
                  if (sample[2] <114) {
                    if (sample[4] <51) {
                      sum[4] += -0.273972601;
                    } else {
                      if (sample[0] <110) {
                        sum[4] += -0.269230753;
                      } else {
                        if (sample[0] <113) {
                          sum[4] += 0.513761461;
                        } else {
                          sum[4] += -0.122270741;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <107) {
                      sum[4] += 0.288990825;
                    } else {
                      sum[4] += -0.221951216;
                    }
                  }
                } else {
                  if (sample[0] <147) {
                    sum[4] += 0.290155411;
                  } else {
                    if (sample[0] <168) {
                      if (sample[1] <128) {
                        sum[4] += 0.482758611;
                      } else {
                        sum[4] += 1.31948876;
                      }
                    } else {
                      if (sample[4] <53) {
                        sum[4] += 0.144827574;
                      } else {
                        sum[4] += 0.738532066;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[2] <99) {
                if (sample[1] <83) {
                  if (sample[0] <114) {
                    if (sample[4] <114) {
                      sum[4] += -0.289026409;
                    } else {
                      if (sample[0] <103) {
                        sum[4] += -0.265822768;
                      } else {
                        sum[4] += 0.288990825;
                      }
                    }
                  } else {
                    if (sample[1] <73) {
                      if (sample[2] <85) {
                        sum[4] += 0.0289256144;
                      } else {
                        sum[4] += -0.249258161;
                      }
                    } else {
                      if (sample[4] <94) {
                        if (sample[0] <116) {
                          sum[4] += -5.48990142e-09;
                        } else {
                          sum[4] += -0.200636938;
                        }
                      } else {
                        if (sample[4] <103) {
                          sum[4] += 0.636363626;
                        } else {
                          sum[4] += 0.0289256144;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[1] <85) {
                    sum[4] += 0.111464955;
                  } else {
                    if (sample[0] <112) {
                      sum[4] += 0.738532066;
                    } else {
                      sum[4] += 0.111464955;
                    }
                  }
                }
              } else {
                if (sample[0] <141) {
                  if (sample[1] <97) {
                    if (sample[4] <62) {
                      sum[4] += 0.144827574;
                    } else {
                      if (sample[1] <82) {
                        sum[4] += 0.433884293;
                      } else {
                        sum[4] += 1.22819471;
                      }
                    }
                  } else {
                    if (sample[0] <138) {
                      if (sample[0] <132) {
                        sum[4] += 0.0289256144;
                      } else {
                        sum[4] += -0.200636938;
                      }
                    } else {
                      sum[4] += 0.267515898;
                    }
                  }
                } else {
                  sum[4] += 1.5525198;
                }
              }
            }
          }
        }
      }
    } else {
      if (sample[4] <60) {
        if (sample[4] <44) {
          if (sample[4] <38) {
            if (sample[4] <29) {
              sum[4] += -0.291356742;
            } else {
              if (sample[0] <152) {
                sum[4] += -0.281765282;
              } else {
                if (sample[3] <135) {
                  if (sample[4] <34) {
                    sum[4] += 0.313793093;
                  } else {
                    sum[4] += 0.0289256144;
                  }
                } else {
                  sum[4] += 0.552631557;
                }
              }
            }
          } else {
            if (sample[0] <146) {
              if (sample[1] <110) {
                sum[4] += -0.272319198;
              } else {
                if (sample[0] <134) {
                  sum[4] += 0.288990825;
                } else {
                  sum[4] += -0.193103448;
                }
              }
            } else {
              sum[4] += 0.926877439;
            }
          }
        } else {
          if (sample[0] <147) {
            if (sample[1] <62) {
              sum[4] += -0.27248323;
            } else {
              if (sample[0] <76) {
                sum[4] += 0.921052575;
              } else {
                if (sample[1] <107) {
                  if (sample[1] <90) {
                    if (sample[1] <80) {
                      if (sample[0] <80) {
                        sum[4] += -0.0241379365;
                      } else {
                        sum[4] += -0.257719696;
                      }
                    } else {
                      if (sample[1] <88) {
                        if (sample[4] <53) {
                          sum[4] += 0.227810636;
                        } else {
                          sum[4] += 0.738532066;
                        }
                      } else {
                        if (sample[0] <110) {
                          sum[4] += -0.17355372;
                        } else {
                          sum[4] += 0.0642201751;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <113) {
                      if (sample[1] <92) {
                        sum[4] += -0.200636938;
                      } else {
                        sum[4] += 0.0642201751;
                      }
                    } else {
                      sum[4] += -0.267402381;
                    }
                  }
                } else {
                  if (sample[1] <110) {
                    sum[4] += 0.482758611;
                  } else {
                    if (sample[1] <115) {
                      sum[4] += -0.17355372;
                    } else {
                      sum[4] += 0.288990825;
                    }
                  }
                }
              }
            }
          } else {
            if (sample[0] <185) {
              if (sample[0] <151) {
                sum[4] += 0.552631557;
              } else {
                sum[4] += 1.44733417;
              }
            } else {
              sum[4] += 0.433884293;
            }
          }
        }
      } else {
        if (sample[2] <98) {
          if (sample[2] <96) {
            if (sample[0] <105) {
              if (sample[4] <64) {
                if (sample[1] <62) {
                  sum[4] += -0.0241379365;
                } else {
                  sum[4] += -0.212707177;
                }
              } else {
                sum[4] += -0.286230505;
              }
            } else {
              if (sample[0] <107) {
                if (sample[1] <66) {
                  sum[4] += 0.288990825;
                } else {
                  sum[4] += 0.0642201751;
                }
              } else {
                sum[4] += -0.255667508;
              }
            }
          } else {
            sum[4] += 0.433884293;
          }
        } else {
          if (sample[0] <143) {
            if (sample[1] <92) {
              sum[4] += 1.35820889;
            } else {
              if (sample[4] <66) {
                sum[4] += -0.193103448;
              } else {
                sum[4] += 0.662721872;
              }
            }
          } else {
            sum[4] += 1.74657285;
          }
        }
      }
    }
  } else {
    if (sample[4] <55) {
      if (sample[4] <43) {
        if (sample[4] <35) {
          if (sample[4] <26) {
            if (sample[4] <22) {
              sum[4] += -0.291448325;
            } else {
              if (sample[0] <137) {
                sum[4] += -0.289000273;
              } else {
                if (sample[3] <158) {
                  if (sample[4] <24) {
                    if (sample[2] <181) {
                      if (sample[0] <168) {
                        sum[4] += -0.257894725;
                      } else {
                        if (sample[0] <177) {
                          sum[4] += 1.04132223;
                        } else {
                          sum[4] += -0.0528301932;
                        }
                      }
                    } else {
                      sum[4] += -0.285943121;
                    }
                  } else {
                    if (sample[2] <155) {
                      if (sample[4] <25) {
                        if (sample[2] <147) {
                          sum[4] += -0.272169173;
                        } else {
                          sum[4] += -0.145283014;
                        }
                      } else {
                        if (sample[3] <140) {
                          sum[4] += 0.193370149;
                        } else {
                          sum[4] += -0.127272725;
                        }
                      }
                    } else {
                      if (sample[2] <181) {
                        if (sample[1] <148) {
                          sum[4] += 0.231404945;
                        } else {
                          sum[4] += 1.00552487;
                        }
                      } else {
                        sum[4] += -0.258660495;
                      }
                    }
                  }
                } else {
                  sum[4] += -0.28352651;
                }
              }
            }
          } else {
            if (sample[0] <183) {
              if (sample[0] <150) {
                if (sample[0] <124) {
                  sum[4] += -0.285116702;
                } else {
                  if (sample[3] <164) {
                    if (sample[2] <135) {
                      if (sample[4] <31) {
                        if (sample[5] <125) {
                          sum[4] += -0.132241815;
                        } else {
                          sum[4] += -0.273913026;
                        }
                      } else {
                        if (sample[3] <145) {
                          sum[4] += -0.229181483;
                        } else {
                          sum[4] += -0.151777968;
                        }
                      }
                    } else {
                      if (sample[4] <30) {
                        if (sample[1] <126) {
                          sum[4] += -0.00939598121;
                        } else {
                          sum[4] += -0.190045252;
                        }
                      } else {
                        if (sample[3] <149) {
                          sum[4] += -0.110315189;
                        } else {
                          sum[4] += 0.383367121;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <138) {
                      if (sample[0] <130) {
                        if (sample[3] <175) {
                          sum[4] += -0.253794253;
                        } else {
                          sum[4] += -0.13691932;
                        }
                      } else {
                        sum[4] += -0.062130183;
                      }
                    } else {
                      if (sample[2] <165) {
                        sum[4] += -0.279958695;
                      } else {
                        if (sample[2] <166) {
                          sum[4] += -0.0415019803;
                        } else {
                          sum[4] += -0.263366342;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <158) {
                  if (sample[3] <144) {
                    if (sample[4] <28) {
                      sum[4] += -0.25207755;
                    } else {
                      if (sample[0] <160) {
                        if (sample[0] <155) {
                          sum[4] += 0.614634097;
                        } else {
                          sum[4] += -0.062130183;
                        }
                      } else {
                        sum[4] += 1.05181348;
                      }
                    }
                  } else {
                    sum[4] += 1.35866404;
                  }
                } else {
                  if (sample[1] <158) {
                    if (sample[0] <164) {
                      if (sample[3] <172) {
                        if (sample[4] <31) {
                          sum[4] += -0.163704395;
                        } else {
                          sum[4] += 0.733624399;
                        }
                      } else {
                        if (sample[3] <176) {
                          sum[4] += -0.19849357;
                        } else {
                          sum[4] += -0.282352924;
                        }
                      }
                    } else {
                      sum[4] += 1.04132223;
                    }
                  } else {
                    sum[4] += -0.288042963;
                  }
                }
              }
            } else {
              if (sample[3] <154) {
                if (sample[0] <190) {
                  sum[4] += 1.54158783;
                } else {
                  sum[4] += 0.313793093;
                }
              } else {
                sum[4] += -0.246006384;
              }
            }
          }
        } else {
          if (sample[0] <129) {
            if (sample[0] <119) {
              if (sample[3] <162) {
                if (sample[3] <145) {
                  sum[4] += -0.27556783;
                } else {
                  if (sample[0] <90) {
                    sum[4] += -0.277826369;
                  } else {
                    if (sample[1] <87) {
                      if (sample[0] <98) {
                        if (sample[1] <85) {
                          sum[4] += -0.145677701;
                        } else {
                          sum[4] += 0.0813953355;
                        }
                      } else {
                        if (sample[3] <151) {
                          sum[4] += 0.552631557;
                        } else {
                          sum[4] += 0.0289256144;
                        }
                      }
                    } else {
                      if (sample[3] <156) {
                        if (sample[2] <118) {
                          sum[4] += -0.138182804;
                        } else {
                          sum[4] += 0.227810636;
                        }
                      } else {
                        if (sample[0] <118) {
                          sum[4] += -0.270576477;
                        } else {
                          sum[4] += 0.288990825;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <129) {
                  sum[4] += -0.281903476;
                } else {
                  if (sample[3] <175) {
                    if (sample[1] <109) {
                      if (sample[0] <114) {
                        sum[4] += 0.288990825;
                      } else {
                        sum[4] += -0.17355372;
                      }
                    } else {
                      if (sample[3] <174) {
                        if (sample[0] <117) {
                          sum[4] += -0.0459518656;
                        } else {
                          sum[4] += -0.216634423;
                        }
                      } else {
                        sum[4] += -0.255667508;
                      }
                    }
                  } else {
                    if (sample[2] <136) {
                      sum[4] += -0.272434294;
                    } else {
                      if (sample[3] <178) {
                        sum[4] += -0.062130183;
                      } else {
                        sum[4] += -0.200636938;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[4] <39) {
                if (sample[0] <127) {
                  if (sample[1] <107) {
                    if (sample[2] <123) {
                      sum[4] += -0.236953452;
                    } else {
                      if (sample[0] <122) {
                        sum[4] += 0.0642201751;
                      } else {
                        sum[4] += 0.513761461;
                      }
                    }
                  } else {
                    if (sample[2] <136) {
                      if (sample[0] <126) {
                        sum[4] += -0.251430392;
                      } else {
                        if (sample[1] <109) {
                          sum[4] += -0.17355372;
                        } else {
                          sum[4] += 0.0642201751;
                        }
                      }
                    } else {
                      if (sample[3] <174) {
                        sum[4] += 0.184210509;
                      } else {
                        sum[4] += -0.224436745;
                      }
                    }
                  }
                } else {
                  if (sample[1] <120) {
                    if (sample[2] <120) {
                      sum[4] += -0.16055046;
                    } else {
                      if (sample[0] <128) {
                        sum[4] += 0.517751455;
                      } else {
                        if (sample[1] <111) {
                          sum[4] += 0.288990825;
                        } else {
                          sum[4] += 0.0289256144;
                        }
                      }
                    }
                  } else {
                    sum[4] += -0.184210524;
                  }
                }
              } else {
                if (sample[1] <110) {
                  if (sample[1] <102) {
                    sum[4] += 0.267515898;
                  } else {
                    if (sample[0] <120) {
                      sum[4] += 0.144827574;
                    } else {
                      if (sample[4] <40) {
                        sum[4] += -0.0241379365;
                      } else {
                        sum[4] += -0.259550571;
                      }
                    }
                  }
                } else {
                  if (sample[2] <132) {
                    sum[4] += 0.615015924;
                  } else {
                    if (sample[4] <42) {
                      if (sample[0] <124) {
                        if (sample[0] <120) {
                          sum[4] += -0.0241379365;
                        } else {
                          sum[4] += -0.256723702;
                        }
                      } else {
                        if (sample[1] <119) {
                          sum[4] += 0.313793093;
                        } else {
                          sum[4] += -0.0241379365;
                        }
                      }
                    } else {
                      if (sample[3] <166) {
                        sum[4] += 0.0289256144;
                      } else {
                        sum[4] += 0.375609726;
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[3] <174) {
              if (sample[0] <148) {
                if (sample[4] <39) {
                  if (sample[1] <119) {
                    if (sample[2] <128) {
                      if (sample[0] <133) {
                        if (sample[4] <36) {
                          sum[4] += -0.062130183;
                        } else {
                          sum[4] += 0.305676848;
                        }
                      } else {
                        sum[4] += -0.193103448;
                      }
                    } else {
                      if (sample[3] <156) {
                        if (sample[0] <136) {
                          sum[4] += 0.954545379;
                        } else {
                          sum[4] += 0.305676848;
                        }
                      } else {
                        sum[4] += 0.0642201751;
                      }
                    }
                  } else {
                    if (sample[2] <141) {
                      if (sample[3] <157) {
                        if (sample[2] <134) {
                          sum[4] += 0.0170731638;
                        } else {
                          sum[4] += -0.240072206;
                        }
                      } else {
                        sum[4] += 0.144827574;
                      }
                    } else {
                      if (sample[4] <36) {
                        if (sample[1] <127) {
                          sum[4] += 0.231404945;
                        } else {
                          sum[4] += -0.130705401;
                        }
                      } else {
                        if (sample[4] <38) {
                          sum[4] += 0.784232318;
                        } else {
                          sum[4] += 0.152173907;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <144) {
                    if (sample[3] <161) {
                      if (sample[2] <124) {
                        if (sample[4] <41) {
                          sum[4] += 0.0289256144;
                        } else {
                          sum[4] += 0.552631557;
                        }
                      } else {
                        if (sample[3] <140) {
                          sum[4] += 0.517751455;
                        } else {
                          sum[4] += 1.22079992;
                        }
                      }
                    } else {
                      if (sample[1] <126) {
                        if (sample[2] <141) {
                          sum[4] += -0.184210524;
                        } else {
                          sum[4] += 0.163212419;
                        }
                      } else {
                        sum[4] += 0.921052575;
                      }
                    }
                  } else {
                    if (sample[0] <146) {
                      if (sample[3] <147) {
                        sum[4] += 0.184210509;
                      } else {
                        sum[4] += -0.16055046;
                      }
                    } else {
                      sum[4] += 0.539525688;
                    }
                  }
                }
              } else {
                if (sample[3] <169) {
                  if (sample[2] <147) {
                    if (sample[4] <40) {
                      if (sample[0] <150) {
                        sum[4] += 0.433884293;
                      } else {
                        sum[4] += -5.48990142e-09;
                      }
                    } else {
                      sum[4] += 0.891719699;
                    }
                  } else {
                    if (sample[2] <189) {
                      sum[4] += 1.57356668;
                    } else {
                      if (sample[3] <153) {
                        sum[4] += 0.636363626;
                      } else {
                        sum[4] += -0.16055046;
                      }
                    }
                  }
                } else {
                  if (sample[0] <167) {
                    if (sample[4] <37) {
                      sum[4] += 0.267515898;
                    } else {
                      sum[4] += 0.870165706;
                    }
                  } else {
                    sum[4] += -0.16055046;
                  }
                }
              }
            } else {
              if (sample[4] <38) {
                if (sample[0] <166) {
                  if (sample[2] <151) {
                    sum[4] += 0.0289256144;
                  } else {
                    sum[4] += -0.267911822;
                  }
                } else {
                  sum[4] += 0.0642201751;
                }
              } else {
                if (sample[0] <156) {
                  if (sample[4] <40) {
                    if (sample[1] <137) {
                      sum[4] += 0.231404945;
                    } else {
                      sum[4] += -0.23517786;
                    }
                  } else {
                    if (sample[1] <137) {
                      sum[4] += 0.0289256144;
                    } else {
                      sum[4] += 0.6517241;
                    }
                  }
                } else {
                  sum[4] += 1.04132223;
                }
              }
            }
          }
        }
      } else {
        if (sample[0] <132) {
          if (sample[0] <115) {
            if (sample[3] <168) {
              if (sample[5] <99) {
                if (sample[0] <75) {
                  sum[4] += -0.276453048;
                } else {
                  if (sample[2] <72) {
                    if (sample[4] <48) {
                      sum[4] += 0.973170698;
                    } else {
                      if (sample[0] <76) {
                        sum[4] += -0.184210524;
                      } else {
                        sum[4] += 0.111464955;
                      }
                    }
                  } else {
                    if (sample[3] <165) {
                      if (sample[4] <49) {
                        sum[4] += -0.284132838;
                      } else {
                        if (sample[3] <148) {
                          sum[4] += -0.274427027;
                        } else {
                          sum[4] += -0.0768786147;
                        }
                      }
                    } else {
                      if (sample[4] <48) {
                        sum[4] += -0.242214531;
                      } else {
                        if (sample[4] <51) {
                          sum[4] += 0.423566848;
                        } else {
                          sum[4] += -0.0773480684;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <88) {
                  if (sample[2] <99) {
                    if (sample[4] <47) {
                      if (sample[4] <44) {
                        sum[4] += 0.144827574;
                      } else {
                        sum[4] += -0.229257643;
                      }
                    } else {
                      if (sample[1] <82) {
                        sum[4] += -0.193103448;
                      } else {
                        if (sample[0] <105) {
                          sum[4] += 0.495121926;
                        } else {
                          sum[4] += 0.0642201751;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <97) {
                      if (sample[0] <95) {
                        if (sample[0] <93) {
                          sum[4] += 0.0968858004;
                        } else {
                          sum[4] += 0.574626803;
                        }
                      } else {
                        if (sample[2] <105) {
                          sum[4] += -0.162790701;
                        } else {
                          sum[4] += 0.181660891;
                        }
                      }
                    } else {
                      if (sample[3] <156) {
                        if (sample[5] <109) {
                          sum[4] += 1.05416107;
                        } else {
                          sum[4] += 0.368421048;
                        }
                      } else {
                        if (sample[0] <99) {
                          sum[4] += 0.759815216;
                        } else {
                          sum[4] += 0.193370149;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <49) {
                    if (sample[3] <161) {
                      if (sample[3] <146) {
                        if (sample[3] <141) {
                          sum[4] += -0.265249521;
                        } else {
                          sum[4] += -0.0415019803;
                        }
                      } else {
                        if (sample[0] <106) {
                          sum[4] += -0.200636938;
                        } else {
                          sum[4] += 0.636363626;
                        }
                      }
                    } else {
                      if (sample[0] <99) {
                        if (sample[2] <108) {
                          sum[4] += -0.062130183;
                        } else {
                          sum[4] += 0.288990825;
                        }
                      } else {
                        if (sample[3] <164) {
                          sum[4] += -0.109147608;
                        } else {
                          sum[4] += -0.233117476;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <163) {
                      if (sample[0] <112) {
                        if (sample[4] <52) {
                          sum[4] += 0.919037163;
                        } else {
                          sum[4] += 0.467509001;
                        }
                      } else {
                        if (sample[3] <151) {
                          sum[4] += -0.11290323;
                        } else {
                          sum[4] += 0.482758611;
                        }
                      }
                    } else {
                      if (sample[0] <109) {
                        if (sample[2] <118) {
                          sum[4] += -7.7841884e-09;
                        } else {
                          sum[4] += 0.735668778;
                        }
                      } else {
                        if (sample[4] <53) {
                          sum[4] += -0.176557869;
                        } else {
                          sum[4] += 0.0917030498;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[2] <136) {
                if (sample[4] <52) {
                  if (sample[3] <176) {
                    if (sample[4] <46) {
                      if (sample[1] <108) {
                        sum[4] += -0.263469398;
                      } else {
                        if (sample[0] <113) {
                          sum[4] += -5.48990142e-09;
                        } else {
                          sum[4] += -0.212707177;
                        }
                      }
                    } else {
                      if (sample[1] <85) {
                        sum[4] += -0.258726895;
                      } else {
                        if (sample[0] <96) {
                          sum[4] += 0.00737617677;
                        } else {
                          sum[4] += -0.186376616;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <134) {
                      sum[4] += -0.272169173;
                    } else {
                      if (sample[1] <109) {
                        if (sample[4] <50) {
                          sum[4] += 0.288990825;
                        } else {
                          sum[4] += -0.0906735808;
                        }
                      } else {
                        sum[4] += -0.244186044;
                      }
                    }
                  }
                } else {
                  if (sample[2] <104) {
                    if (sample[1] <74) {
                      sum[4] += -0.282649845;
                    } else {
                      if (sample[1] <76) {
                        if (sample[3] <175) {
                          sum[4] += 0.0642201751;
                        } else {
                          sum[4] += -5.48990142e-09;
                        }
                      } else {
                        sum[4] += -0.25454545;
                      }
                    }
                  } else {
                    if (sample[1] <88) {
                      if (sample[3] <174) {
                        sum[4] += 0.733624399;
                      } else {
                        if (sample[1] <84) {
                          sum[4] += 0.313793093;
                        } else {
                          sum[4] += -0.23517786;
                        }
                      }
                    } else {
                      if (sample[1] <107) {
                        if (sample[3] <171) {
                          sum[4] += 0.0332541466;
                        } else {
                          sum[4] += -0.152566999;
                        }
                      } else {
                        sum[4] += 0.184210509;
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <137) {
                  sum[4] += 0.891719699;
                } else {
                  sum[4] += 0.0289256144;
                }
              }
            }
          } else {
            if (sample[4] <52) {
              if (sample[2] <144) {
                if (sample[3] <141) {
                  if (sample[2] <118) {
                    sum[4] += -0.260393858;
                  } else {
                    if (sample[4] <47) {
                      sum[4] += 0.288990825;
                    } else {
                      sum[4] += 0.0642201751;
                    }
                  }
                } else {
                  if (sample[3] <155) {
                    if (sample[4] <46) {
                      if (sample[0] <121) {
                        sum[4] += 0.544041395;
                      } else {
                        if (sample[1] <104) {
                          sum[4] += -0.184210524;
                        } else {
                          sum[4] += 0.372781038;
                        }
                      }
                    } else {
                      if (sample[3] <144) {
                        if (sample[4] <49) {
                          sum[4] += -5.48990142e-09;
                        } else {
                          sum[4] += 0.552631557;
                        }
                      } else {
                        sum[4] += 1.16372788;
                      }
                    }
                  } else {
                    if (sample[2] <136) {
                      if (sample[0] <121) {
                        if (sample[4] <48) {
                          sum[4] += -0.0880929381;
                        } else {
                          sum[4] += 0.238035247;
                        }
                      } else {
                        if (sample[2] <135) {
                          sum[4] += 0.561386108;
                        } else {
                          sum[4] += -0.0241379365;
                        }
                      }
                    } else {
                      if (sample[2] <141) {
                        if (sample[3] <175) {
                          sum[4] += 0.852475226;
                        } else {
                          sum[4] += 0.227810636;
                        }
                      } else {
                        if (sample[1] <117) {
                          sum[4] += -0.212707177;
                        } else {
                          sum[4] += 0.564516127;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <156) {
                  if (sample[4] <48) {
                    if (sample[3] <176) {
                      sum[4] += -0.225806445;
                    } else {
                      if (sample[1] <126) {
                        sum[4] += 0.267515898;
                      } else {
                        sum[4] += -0.17355372;
                      }
                    }
                  } else {
                    if (sample[3] <174) {
                      sum[4] += -5.48990142e-09;
                    } else {
                      sum[4] += -0.265822768;
                    }
                  }
                } else {
                  sum[4] += 0.736842096;
                }
              }
            } else {
              if (sample[3] <141) {
                if (sample[0] <120) {
                  sum[4] += 0.0642201751;
                } else {
                  sum[4] += -0.212707177;
                }
              } else {
                if (sample[3] <169) {
                  if (sample[0] <116) {
                    sum[4] += 0.288990825;
                  } else {
                    sum[4] += 1.37445247;
                  }
                } else {
                  if (sample[4] <54) {
                    if (sample[3] <175) {
                      if (sample[3] <172) {
                        sum[4] += 0.0289256144;
                      } else {
                        sum[4] += 0.738532066;
                      }
                    } else {
                      sum[4] += -0.184210524;
                    }
                  } else {
                    sum[4] += 0.734146297;
                  }
                }
              }
            }
          }
        } else {
          if (sample[0] <156) {
            if (sample[3] <168) {
              if (sample[5] <136) {
                if (sample[0] <134) {
                  if (sample[2] <131) {
                    sum[4] += 1.00552487;
                  } else {
                    sum[4] += 0.288990825;
                  }
                } else {
                  if (sample[0] <135) {
                    sum[4] += 0.0289256144;
                  } else {
                    sum[4] += 0.579617798;
                  }
                }
              } else {
                if (sample[1] <121) {
                  sum[4] += 1.38858032;
                } else {
                  if (sample[0] <145) {
                    if (sample[3] <163) {
                      if (sample[1] <124) {
                        sum[4] += 0.288990825;
                      } else {
                        sum[4] += -0.184210524;
                      }
                    } else {
                      sum[4] += 0.821299613;
                    }
                  } else {
                    if (sample[5] <150) {
                      sum[4] += 0.313793093;
                    } else {
                      if (sample[3] <142) {
                        if (sample[4] <46) {
                          sum[4] += 1.04132223;
                        } else {
                          sum[4] += 0.412663728;
                        }
                      } else {
                        sum[4] += 1.30194545;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[4] <54) {
                if (sample[1] <125) {
                  sum[4] += -5.48990142e-09;
                } else {
                  if (sample[3] <179) {
                    if (sample[1] <142) {
                      if (sample[2] <168) {
                        sum[4] += 0.979715943;
                      } else {
                        if (sample[1] <137) {
                          sum[4] += -0.16055046;
                        } else {
                          sum[4] += 0.501886785;
                        }
                      }
                    } else {
                      if (sample[4] <46) {
                        if (sample[2] <176) {
                          sum[4] += 0.738532066;
                        } else {
                          sum[4] += 0.0642201751;
                        }
                      } else {
                        sum[4] += 1.45442355;
                      }
                    }
                  } else {
                    sum[4] += 0.144827574;
                  }
                }
              } else {
                if (sample[1] <145) {
                  sum[4] += 0.368421048;
                } else {
                  sum[4] += -0.184210524;
                }
              }
            }
          } else {
            if (sample[2] <147) {
              sum[4] += 0.544041395;
            } else {
              sum[4] += 1.64724851;
            }
          }
        }
      }
    } else {
      if (sample[2] <97) {
        if (sample[2] <90) {
          if (sample[1] <60) {
            if (sample[0] <106) {
              if (sample[2] <70) {
                sum[4] += -0.289810866;
              } else {
                if (sample[0] <95) {
                  if (sample[5] <71) {
                    if (sample[0] <64) {
                      if (sample[0] <52) {
                        if (sample[0] <50) {
                          sum[4] += -0.221951216;
                        } else {
                          sum[4] += 0.144827574;
                        }
                      } else {
                        sum[4] += -0.271162122;
                      }
                    } else {
                      sum[4] += -5.48990142e-09;
                    }
                  } else {
                    if (sample[3] <179) {
                      sum[4] += -0.268760204;
                    } else {
                      if (sample[4] <72) {
                        sum[4] += 0.0289256144;
                      } else {
                        sum[4] += -0.225806445;
                      }
                    }
                  }
                } else {
                  if (sample[0] <97) {
                    sum[4] += 0.0642201751;
                  } else {
                    sum[4] += -0.217616573;
                  }
                }
              }
            } else {
              sum[4] += 0.0289256144;
            }
          } else {
            if (sample[4] <67) {
              if (sample[2] <72) {
                sum[4] += 0.288990825;
              } else {
                if (sample[3] <171) {
                  if (sample[3] <163) {
                    if (sample[0] <76) {
                      if (sample[3] <159) {
                        sum[4] += 0.111464955;
                      } else {
                        sum[4] += -0.242214531;
                      }
                    } else {
                      if (sample[5] <87) {
                        sum[4] += -0.278871983;
                      } else {
                        if (sample[1] <68) {
                          sum[4] += 0.0252707507;
                        } else {
                          sum[4] += -0.265249521;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <165) {
                      if (sample[4] <62) {
                        if (sample[3] <164) {
                          sum[4] += -5.48990142e-09;
                        } else {
                          sum[4] += 0.482758611;
                        }
                      } else {
                        sum[4] += -0.16055046;
                      }
                    } else {
                      if (sample[1] <67) {
                        if (sample[0] <69) {
                          sum[4] += -0.062130183;
                        } else {
                          sum[4] += -0.265249521;
                        }
                      } else {
                        if (sample[1] <68) {
                          sum[4] += 0.288990825;
                        } else {
                          sum[4] += -0.193103448;
                        }
                      }
                    }
                  }
                } else {
                  sum[4] += -0.28322503;
                }
              }
            } else {
              if (sample[3] <156) {
                if (sample[1] <66) {
                  if (sample[5] <84) {
                    if (sample[0] <83) {
                      sum[4] += -0.17355372;
                    } else {
                      sum[4] += 0.0642201751;
                    }
                  } else {
                    if (sample[1] <65) {
                      sum[4] += -0.279399127;
                    } else {
                      if (sample[0] <96) {
                        sum[4] += -0.184210524;
                      } else {
                        sum[4] += 0.0642201751;
                      }
                    }
                  }
                } else {
                  if (sample[0] <93) {
                    sum[4] += 0.636363626;
                  } else {
                    if (sample[3] <137) {
                      sum[4] += 0.184210509;
                    } else {
                      sum[4] += -0.244186044;
                    }
                  }
                }
              } else {
                if (sample[3] <173) {
                  if (sample[0] <70) {
                    sum[4] += 0.90322578;
                  } else {
                    if (sample[1] <64) {
                      if (sample[3] <161) {
                        if (sample[4] <73) {
                          sum[4] += 0.0289256144;
                        } else {
                          sum[4] += 0.513761461;
                        }
                      } else {
                        if (sample[3] <169) {
                          sum[4] += -0.127272725;
                        } else {
                          sum[4] += 0.288990825;
                        }
                      }
                    } else {
                      sum[4] += 0.6517241;
                    }
                  }
                } else {
                  sum[4] += -0.255667508;
                }
              }
            }
          }
        } else {
          if (sample[0] <70) {
            if (sample[2] <94) {
              if (sample[3] <171) {
                sum[4] += -0.16055046;
              } else {
                if (sample[2] <92) {
                  if (sample[4] <77) {
                    if (sample[1] <65) {
                      sum[4] += 0.0289256144;
                    } else {
                      sum[4] += 0.288990825;
                    }
                  } else {
                    sum[4] += 0.797927439;
                  }
                } else {
                  if (sample[0] <67) {
                    if (sample[0] <63) {
                      sum[4] += 0.288990825;
                    } else {
                      sum[4] += -0.17355372;
                    }
                  } else {
                    sum[4] += 0.372781038;
                  }
                }
              }
            } else {
              if (sample[3] <178) {
                sum[4] += 1.18461537;
              } else {
                if (sample[4] <82) {
                  sum[4] += 0.0642201751;
                } else {
                  sum[4] += 0.513761461;
                }
              }
            }
          } else {
            if (sample[1] <62) {
              if (sample[4] <85) {
                sum[4] += 0.0289256144;
              } else {
                if (sample[0] <90) {
                  sum[4] += -0.285654187;
                } else {
                  if (sample[4] <99) {
                    sum[4] += 0.0289256144;
                  } else {
                    sum[4] += -0.232365146;
                  }
                }
              }
            } else {
              if (sample[4] <73) {
                if (sample[2] <95) {
                  if (sample[4] <56) {
                    if (sample[0] <89) {
                      sum[4] += 0.552631557;
                    } else {
                      sum[4] += 0.0642201751;
                    }
                  } else {
                    if (sample[1] <68) {
                      if (sample[0] <74) {
                        if (sample[0] <72) {
                          sum[4] += -0.17355372;
                        } else {
                          sum[4] += 0.0642201751;
                        }
                      } else {
                        sum[4] += 0.579617798;
                      }
                    } else {
                      if (sample[4] <65) {
                        if (sample[0] <74) {
                          sum[4] += -0.217616573;
                        } else {
                          sum[4] += -0.0785997435;
                        }
                      } else {
                        if (sample[4] <67) {
                          sum[4] += 0.267515898;
                        } else {
                          sum[4] += -0.0894568712;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <172) {
                    if (sample[1] <75) {
                      if (sample[1] <72) {
                        if (sample[1] <71) {
                          sum[4] += 0.488372058;
                        } else {
                          sum[4] += -0.193103448;
                        }
                      } else {
                        sum[4] += 0.594339609;
                      }
                    } else {
                      if (sample[0] <104) {
                        sum[4] += -0.16055046;
                      } else {
                        sum[4] += 0.267515898;
                      }
                    }
                  } else {
                    if (sample[0] <75) {
                      sum[4] += 0.0642201751;
                    } else {
                      sum[4] += -0.193103448;
                    }
                  }
                }
              } else {
                if (sample[4] <84) {
                  if (sample[3] <161) {
                    if (sample[0] <103) {
                      if (sample[4] <75) {
                        sum[4] += 0.267515898;
                      } else {
                        sum[4] += -0.237735853;
                      }
                    } else {
                      sum[4] += 0.807692289;
                    }
                  } else {
                    if (sample[0] <73) {
                      if (sample[2] <92) {
                        sum[4] += 0.736842096;
                      } else {
                        if (sample[3] <173) {
                          sum[4] += -0.17355372;
                        } else {
                          sum[4] += 0.144827574;
                        }
                      }
                    } else {
                      if (sample[4] <78) {
                        sum[4] += 1.08309448;
                      } else {
                        sum[4] += 0.539525688;
                      }
                    }
                  }
                } else {
                  if (sample[1] <69) {
                    if (sample[4] <90) {
                      sum[4] += -0.229257643;
                    } else {
                      if (sample[4] <94) {
                        sum[4] += 0.288990825;
                      } else {
                        sum[4] += -0.207100585;
                      }
                    }
                  } else {
                    sum[4] += 0.738532066;
                  }
                }
              }
            }
          }
        }
      } else {
        if (sample[4] <106) {
          if (sample[4] <65) {
            if (sample[3] <171) {
              if (sample[5] <141) {
                if (sample[0] <94) {
                  if (sample[4] <58) {
                    if (sample[3] <165) {
                      sum[4] += 0.433884293;
                    } else {
                      sum[4] += -0.221951216;
                    }
                  } else {
                    if (sample[0] <88) {
                      if (sample[1] <76) {
                        sum[4] += 0.372781038;
                      } else {
                        sum[4] += -0.17355372;
                      }
                    } else {
                      sum[4] += 0.768545926;
                    }
                  }
                } else {
                  if (sample[4] <58) {
                    if (sample[3] <159) {
                      if (sample[5] <139) {
                        if (sample[1] <89) {
                          sum[4] += 0.825115502;
                        } else {
                          sum[4] += 1.30604017;
                        }
                      } else {
                        sum[4] += 0.423566848;
                      }
                    } else {
                      if (sample[1] <94) {
                        if (sample[4] <56) {
                          sum[4] += 0.479253083;
                        } else {
                          sum[4] += 1.10526311;
                        }
                      } else {
                        if (sample[0] <114) {
                          sum[4] += -0.11290323;
                        } else {
                          sum[4] += 0.75316453;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <140) {
                      if (sample[4] <60) {
                        sum[4] += 0.111464955;
                      } else {
                        sum[4] += 0.731591403;
                      }
                    } else {
                      if (sample[2] <111) {
                        if (sample[0] <109) {
                          sum[4] += 1.19095266;
                        } else {
                          sum[4] += 0.417098433;
                        }
                      } else {
                        sum[4] += 1.45883358;
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <170) {
                  if (sample[4] <57) {
                    if (sample[3] <167) {
                      if (sample[1] <139) {
                        sum[4] += 1.3887738;
                      } else {
                        sum[4] += 0.433884293;
                      }
                    } else {
                      if (sample[1] <128) {
                        sum[4] += 0.820689619;
                      } else {
                        sum[4] += 0.184210509;
                      }
                    }
                  } else {
                    sum[4] += 1.63212991;
                  }
                } else {
                  if (sample[0] <148) {
                    sum[4] += 0.6517241;
                  } else {
                    sum[4] += 1.74231327;
                  }
                }
              }
            } else {
              if (sample[2] <133) {
                if (sample[4] <62) {
                  if (sample[3] <175) {
                    if (sample[0] <87) {
                      sum[4] += -0.184210524;
                    } else {
                      if (sample[0] <104) {
                        if (sample[0] <95) {
                          sum[4] += 0.701711476;
                        } else {
                          sum[4] += 0.398132414;
                        }
                      } else {
                        if (sample[2] <130) {
                          sum[4] += -0.193103448;
                        } else {
                          sum[4] += 0.184210509;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <127) {
                      if (sample[4] <60) {
                        if (sample[2] <125) {
                          sum[4] += -0.00657483609;
                        } else {
                          sum[4] += -0.247692302;
                        }
                      } else {
                        if (sample[0] <86) {
                          sum[4] += -0.193103448;
                        } else {
                          sum[4] += 0.363741308;
                        }
                      }
                    } else {
                      if (sample[4] <56) {
                        sum[4] += -0.229257643;
                      } else {
                        if (sample[3] <179) {
                          sum[4] += 1.0545851;
                        } else {
                          sum[4] += 0.313793093;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <107) {
                    if (sample[1] <77) {
                      sum[4] += 0.433884293;
                    } else {
                      if (sample[3] <173) {
                        sum[4] += 0.0642201751;
                      } else {
                        sum[4] += -0.17355372;
                      }
                    }
                  } else {
                    if (sample[3] <179) {
                      if (sample[2] <132) {
                        sum[4] += 1.145275;
                      } else {
                        sum[4] += 0.288990825;
                      }
                    } else {
                      sum[4] += 0.111464955;
                    }
                  }
                }
              } else {
                if (sample[1] <115) {
                  if (sample[3] <178) {
                    sum[4] += 1.37236333;
                  } else {
                    if (sample[4] <64) {
                      if (sample[2] <136) {
                        sum[4] += 0.313793093;
                      } else {
                        if (sample[2] <150) {
                          sum[4] += 1.13204741;
                        } else {
                          sum[4] += 0.313793093;
                        }
                      }
                    } else {
                      sum[4] += -0.200636938;
                    }
                  }
                } else {
                  if (sample[2] <155) {
                    if (sample[2] <153) {
                      if (sample[2] <152) {
                        sum[4] += 0.885892093;
                      } else {
                        if (sample[0] <122) {
                          sum[4] += 0.433884293;
                        } else {
                          sum[4] += 0.0289256144;
                        }
                      }
                    } else {
                      if (sample[0] <127) {
                        sum[4] += -0.25454545;
                      } else {
                        sum[4] += 0.423566848;
                      }
                    }
                  } else {
                    if (sample[2] <187) {
                      if (sample[2] <180) {
                        if (sample[2] <170) {
                          sum[4] += 0.95425427;
                        } else {
                          sum[4] += 0.283975631;
                        }
                      } else {
                        if (sample[2] <185) {
                          sum[4] += 1.25534439;
                        } else {
                          sum[4] += 0.433884293;
                        }
                      }
                    } else {
                      if (sample[1] <145) {
                        sum[4] += -0.184210524;
                      } else {
                        sum[4] += 0.0828402266;
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[2] <107) {
              if (sample[0] <71) {
                sum[4] += 1.62413585;
              } else {
                if (sample[1] <63) {
                  if (sample[0] <76) {
                    sum[4] += 1.14088392;
                  } else {
                    sum[4] += -0.260393858;
                  }
                } else {
                  if (sample[3] <177) {
                    if (sample[2] <103) {
                      if (sample[4] <94) {
                        if (sample[1] <81) {
                          sum[4] += 1.14337802;
                        } else {
                          sum[4] += 0.0642201751;
                        }
                      } else {
                        if (sample[0] <106) {
                          sum[4] += 0.368421048;
                        } else {
                          sum[4] += -0.16055046;
                        }
                      }
                    } else {
                      if (sample[1] <67) {
                        if (sample[0] <88) {
                          sum[4] += 1.68091094;
                        } else {
                          sum[4] += 0.552631557;
                        }
                      } else {
                        if (sample[4] <93) {
                          sum[4] += 1.34242737;
                        } else {
                          sum[4] += 0.423566848;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <79) {
                      if (sample[1] <73) {
                        sum[4] += -0.212707177;
                      } else {
                        if (sample[4] <70) {
                          sum[4] += -0.200636938;
                        } else {
                          sum[4] += 0.46408838;
                        }
                      }
                    } else {
                      sum[4] += 0.928114951;
                    }
                  }
                }
              }
            } else {
              if (sample[3] <167) {
                if (sample[2] <109) {
                  if (sample[1] <84) {
                    if (sample[4] <93) {
                      sum[4] += 1.52236748;
                    } else {
                      sum[4] += 0.433884293;
                    }
                  } else {
                    sum[4] += 0.231404945;
                  }
                } else {
                  sum[4] += 1.74654067;
                }
              } else {
                if (sample[2] <157) {
                  if (sample[4] <72) {
                    if (sample[3] <176) {
                      if (sample[3] <171) {
                        sum[4] += 1.66718423;
                      } else {
                        if (sample[2] <153) {
                          sum[4] += 1.38606429;
                        } else {
                          sum[4] += 0.184210509;
                        }
                      }
                    } else {
                      if (sample[1] <104) {
                        if (sample[4] <67) {
                          sum[4] += 0.759815216;
                        } else {
                          sum[4] += 1.25065041;
                        }
                      } else {
                        if (sample[4] <68) {
                          sum[4] += 0.498812318;
                        } else {
                          sum[4] += -0.104477614;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <108) {
                      if (sample[4] <105) {
                        if (sample[2] <156) {
                          sum[4] += 1.71901274;
                        } else {
                          sum[4] += 0.768545926;
                        }
                      } else {
                        if (sample[1] <70) {
                          sum[4] += 0.952662706;
                        } else {
                          sum[4] += -0.200636938;
                        }
                      }
                    } else {
                      if (sample[2] <155) {
                        if (sample[0] <114) {
                          sum[4] += -0.232365146;
                        } else {
                          sum[4] += 0.564516127;
                        }
                      } else {
                        if (sample[4] <75) {
                          sum[4] += 0.433884293;
                        } else {
                          sum[4] += 1.52579021;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <91) {
                    if (sample[3] <171) {
                      if (sample[2] <190) {
                        sum[4] += 1.38734603;
                      } else {
                        if (sample[1] <132) {
                          sum[4] += 0.0642201751;
                        } else {
                          sum[4] += 0.288990825;
                        }
                      }
                    } else {
                      if (sample[2] <166) {
                        if (sample[1] <106) {
                          sum[4] += -0.217616573;
                        } else {
                          sum[4] += 1.25345206;
                        }
                      } else {
                        if (sample[2] <180) {
                          sum[4] += 0.213170201;
                        } else {
                          sum[4] += 0.661417305;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <115) {
                      sum[4] += -0.286422014;
                    } else {
                      if (sample[2] <186) {
                        if (sample[0] <123) {
                          sum[4] += -0.16055046;
                        } else {
                          sum[4] += 0.288990825;
                        }
                      } else {
                        sum[4] += -0.229257643;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          if (sample[0] <121) {
            if (sample[5] <117) {
              if (sample[3] <179) {
                if (sample[4] <108) {
                  if (sample[3] <174) {
                    if (sample[4] <107) {
                      if (sample[0] <75) {
                        sum[4] += 0.0642201751;
                      } else {
                        sum[4] += -0.193103448;
                      }
                    } else {
                      sum[4] += 0.231404945;
                    }
                  } else {
                    sum[4] += 0.552631557;
                  }
                } else {
                  if (sample[2] <102) {
                    if (sample[0] <78) {
                      sum[4] += 0.288990825;
                    } else {
                      sum[4] += 0.0289256144;
                    }
                  } else {
                    if (sample[2] <108) {
                      sum[4] += -0.247692302;
                    } else {
                      sum[4] += -0.0241379365;
                    }
                  }
                }
              } else {
                sum[4] += 0.552631557;
              }
            } else {
              if (sample[3] <170) {
                if (sample[4] <116) {
                  sum[4] += -0.246006384;
                } else {
                  sum[4] += 0.288990825;
                }
              } else {
                sum[4] += -0.275392115;
              }
            }
          } else {
            if (sample[3] <167) {
              if (sample[2] <105) {
                sum[4] += 0.433884293;
              } else {
                sum[4] += 1.45563757;
              }
            } else {
              sum[4] += -0.0241379365;
            }
          }
        }
      }
    }
  }


  if (sample[3] <18) {
    if (sample[4] <128) {
      if (sample[4] <119) {
        if (sample[4] <105) {
          if (sample[4] <73) {
            if (sample[4] <55) {
              if (sample[4] <39) {
                sum[5] += -0.291536897;
              } else {
                if (sample[2] <171) {
                  sum[5] += -0.290274292;
                } else {
                  if (sample[3] <5) {
                    if (sample[4] <45) {
                      if (sample[2] <192) {
                        if (sample[2] <177) {
                          sum[5] += -0.278591037;
                        } else {
                          sum[5] += -0.155953243;
                        }
                      } else {
                        sum[5] += 0.144827574;
                      }
                    } else {
                      if (sample[2] <173) {
                        sum[5] += -5.48990142e-09;
                      } else {
                        if (sample[4] <47) {
                          sum[5] += 0.136585355;
                        } else {
                          sum[5] += 0.732091665;
                        }
                      }
                    }
                  } else {
                    sum[5] += -0.285416186;
                  }
                }
              }
            } else {
              if (sample[0] <145) {
                if (sample[3] <5) {
                  if (sample[2] <134) {
                    if (sample[0] <100) {
                      if (sample[4] <68) {
                        if (sample[2] <128) {
                          sum[5] += -0.282761902;
                        } else {
                          sum[5] += -0.211055279;
                        }
                      } else {
                        if (sample[1] <76) {
                          sum[5] += -0.283513963;
                        } else {
                          sum[5] += -0.178970531;
                        }
                      }
                    } else {
                      if (sample[4] <59) {
                        if (sample[3] <1) {
                          sum[5] += 0.0170731638;
                        } else {
                          sum[5] += -0.203456402;
                        }
                      } else {
                        if (sample[3] <4) {
                          sum[5] += -0.0894568712;
                        } else {
                          sum[5] += 0.22580643;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <170) {
                      if (sample[0] <112) {
                        if (sample[4] <61) {
                          sum[5] += 0.0114192413;
                        } else {
                          sum[5] += 0.414592236;
                        }
                      } else {
                        if (sample[4] <67) {
                          sum[5] += -0.171723694;
                        } else {
                          sum[5] += 0.208955199;
                        }
                      }
                    } else {
                      if (sample[2] <183) {
                        if (sample[1] <139) {
                          sum[5] += 1.20909083;
                        } else {
                          sum[5] += 0.368421048;
                        }
                      } else {
                        if (sample[0] <143) {
                          sum[5] += -0.217616573;
                        } else {
                          sum[5] += 0.0642201751;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <172) {
                    if (sample[2] <138) {
                      sum[5] += -0.289569318;
                    } else {
                      if (sample[1] <115) {
                        if (sample[2] <140) {
                          sum[5] += -0.11290323;
                        } else {
                          sum[5] += 0.40220046;
                        }
                      } else {
                        if (sample[3] <7) {
                          sum[5] += -0.0527638234;
                        } else {
                          sum[5] += -0.28329891;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <140) {
                      sum[5] += 0.989655137;
                    } else {
                      if (sample[3] <11) {
                        if (sample[4] <70) {
                          sum[5] += -0.180454418;
                        } else {
                          sum[5] += 0.552631557;
                        }
                      } else {
                        if (sample[0] <143) {
                          sum[5] += -0.278177679;
                        } else {
                          sum[5] += -0.0445859917;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <9) {
                  sum[5] += 1.00552487;
                } else {
                  sum[5] += 0.0289256144;
                }
              }
            }
          } else {
            if (sample[2] <163) {
              if (sample[2] <140) {
                if (sample[3] <9) {
                  if (sample[0] <91) {
                    if (sample[4] <93) {
                      if (sample[2] <137) {
                        if (sample[3] <7) {
                          sum[5] += -0.241537049;
                        } else {
                          sum[5] += -0.274033695;
                        }
                      } else {
                        if (sample[1] <93) {
                          sum[5] += 0.112903215;
                        } else {
                          sum[5] += 0.921052575;
                        }
                      }
                    } else {
                      if (sample[1] <93) {
                        if (sample[3] <5) {
                          sum[5] += -0.243968025;
                        } else {
                          sum[5] += -0.0864682794;
                        }
                      } else {
                        if (sample[2] <132) {
                          sum[5] += -0.062130183;
                        } else {
                          sum[5] += 0.570962429;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <2) {
                      if (sample[4] <77) {
                        sum[5] += 0.288990825;
                      } else {
                        sum[5] += -0.255378842;
                      }
                    } else {
                      if (sample[2] <135) {
                        if (sample[4] <78) {
                          sum[5] += -0.132475406;
                        } else {
                          sum[5] += 0.301916897;
                        }
                      } else {
                        if (sample[4] <75) {
                          sum[5] += 0.231404945;
                        } else {
                          sum[5] += 1.02941167;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <138) {
                    if (sample[2] <125) {
                      if (sample[2] <103) {
                        sum[5] += -0.290106624;
                      } else {
                        sum[5] += -0.286365181;
                      }
                    } else {
                      if (sample[4] <95) {
                        if (sample[1] <97) {
                          sum[5] += -0.217077315;
                        } else {
                          sum[5] += -0.28266114;
                        }
                      } else {
                        if (sample[3] <10) {
                          sum[5] += 0.0264750291;
                        } else {
                          sum[5] += -0.224789709;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <11) {
                      sum[5] += 0.677419305;
                    } else {
                      if (sample[1] <106) {
                        sum[5] += 0.513761461;
                      } else {
                        if (sample[3] <13) {
                          sum[5] += -0.124814264;
                        } else {
                          sum[5] += -0.268440366;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <10) {
                  if (sample[2] <155) {
                    if (sample[1] <92) {
                      if (sample[4] <99) {
                        if (sample[2] <143) {
                          sum[5] += -0.244794443;
                        } else {
                          sum[5] += -0.0401146188;
                        }
                      } else {
                        if (sample[3] <2) {
                          sum[5] += 0.579617798;
                        } else {
                          sum[5] += -0.0379975922;
                        }
                      }
                    } else {
                      if (sample[2] <146) {
                        if (sample[1] <100) {
                          sum[5] += 0.250905126;
                        } else {
                          sum[5] += 0.943695426;
                        }
                      } else {
                        if (sample[2] <154) {
                          sum[5] += 0.0321100801;
                        } else {
                          sum[5] += 0.476905286;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <104) {
                      sum[5] += 1.53963006;
                    } else {
                      if (sample[4] <75) {
                        sum[5] += -0.0241379365;
                      } else {
                        if (sample[4] <85) {
                          sum[5] += 0.883076847;
                        } else {
                          sum[5] += 0.174273849;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <87) {
                    if (sample[3] <12) {
                      if (sample[0] <110) {
                        if (sample[0] <103) {
                          sum[5] += -0.253221005;
                        } else {
                          sum[5] += 0.00765863527;
                        }
                      } else {
                        sum[5] += 0.921052575;
                      }
                    } else {
                      if (sample[4] <80) {
                        if (sample[0] <109) {
                          sum[5] += -0.229050949;
                        } else {
                          sum[5] += -0.285714269;
                        }
                      } else {
                        if (sample[0] <109) {
                          sum[5] += -0.186252773;
                        } else {
                          sum[5] += 0.231404945;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <158) {
                      if (sample[2] <145) {
                        if (sample[3] <12) {
                          sum[5] += 0.355384588;
                        } else {
                          sum[5] += -0.0181065779;
                        }
                      } else {
                        if (sample[4] <97) {
                          sum[5] += -0.224375218;
                        } else {
                          sum[5] += -0.0127830608;
                        }
                      }
                    } else {
                      if (sample[1] <130) {
                        sum[5] += 0.987551808;
                      } else {
                        if (sample[3] <16) {
                          sum[5] += -0.184210524;
                        } else {
                          sum[5] += 0.313793093;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[1] <135) {
                if (sample[4] <85) {
                  if (sample[0] <116) {
                    if (sample[0] <114) {
                      sum[5] += 0.482758611;
                    } else {
                      sum[5] += -5.48990142e-09;
                    }
                  } else {
                    sum[5] += 1.42307687;
                  }
                } else {
                  sum[5] += 1.64009213;
                }
              } else {
                if (sample[3] <13) {
                  if (sample[1] <141) {
                    if (sample[2] <172) {
                      if (sample[0] <119) {
                        sum[5] += -0.17355372;
                      } else {
                        sum[5] += 0.0642201751;
                      }
                    } else {
                      sum[5] += 0.987551808;
                    }
                  } else {
                    if (sample[2] <179) {
                      sum[5] += 0.433884293;
                    } else {
                      if (sample[2] <188) {
                        sum[5] += -0.23517786;
                      } else {
                        if (sample[0] <130) {
                          sum[5] += 0.288990825;
                        } else {
                          sum[5] += 0.0289256144;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <168) {
                    if (sample[3] <17) {
                      sum[5] += -0.277502477;
                    } else {
                      if (sample[2] <165) {
                        sum[5] += 0.0289256144;
                      } else {
                        sum[5] += -0.212707177;
                      }
                    }
                  } else {
                    if (sample[0] <117) {
                      if (sample[2] <171) {
                        sum[5] += 0.433884293;
                      } else {
                        sum[5] += -0.16055046;
                      }
                    } else {
                      if (sample[0] <132) {
                        if (sample[3] <14) {
                          sum[5] += -0.0889145508;
                        } else {
                          sum[5] += -0.267886847;
                        }
                      } else {
                        sum[5] += 0.0289256144;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          if (sample[2] <155) {
            if (sample[2] <139) {
              if (sample[3] <12) {
                if (sample[1] <94) {
                  if (sample[0] <78) {
                    if (sample[2] <127) {
                      if (sample[0] <63) {
                        if (sample[3] <2) {
                          sum[5] += 0.0384615287;
                        } else {
                          sum[5] += -0.239036202;
                        }
                      } else {
                        if (sample[0] <69) {
                          sum[5] += -0.0921591595;
                        } else {
                          sum[5] += -0.203476682;
                        }
                      }
                    } else {
                      if (sample[1] <83) {
                        if (sample[2] <134) {
                          sum[5] += -0.136569276;
                        } else {
                          sum[5] += 0.670984447;
                        }
                      } else {
                        if (sample[1] <88) {
                          sum[5] += 0.538661659;
                        } else {
                          sum[5] += 0.162179068;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <90) {
                      if (sample[3] <2) {
                        sum[5] += -5.48990142e-09;
                      } else {
                        sum[5] += -0.290667593;
                      }
                    } else {
                      if (sample[3] <7) {
                        sum[5] += 0.313793093;
                      } else {
                        sum[5] += -0.16055046;
                      }
                    }
                  }
                } else {
                  if (sample[2] <138) {
                    if (sample[3] <9) {
                      sum[5] += 0.368421048;
                    } else {
                      sum[5] += 1.13895476;
                    }
                  } else {
                    sum[5] += -0.0445859917;
                  }
                }
              } else {
                if (sample[2] <126) {
                  if (sample[2] <105) {
                    sum[5] += -0.288495302;
                  } else {
                    if (sample[4] <109) {
                      sum[5] += -0.283193618;
                    } else {
                      if (sample[1] <93) {
                        if (sample[2] <124) {
                          sum[5] += -0.27128309;
                        } else {
                          sum[5] += -0.145496532;
                        }
                      } else {
                        if (sample[0] <66) {
                          sum[5] += -0.109696381;
                        } else {
                          sum[5] += -0.253157288;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <138) {
                    if (sample[1] <98) {
                      if (sample[0] <74) {
                        if (sample[3] <14) {
                          sum[5] += -0.145677701;
                        } else {
                          sum[5] += 0.152173907;
                        }
                      } else {
                        if (sample[3] <13) {
                          sum[5] += 0.305676848;
                        } else {
                          sum[5] += -0.17355372;
                        }
                      }
                    } else {
                      if (sample[2] <133) {
                        if (sample[4] <117) {
                          sum[5] += -0.253485203;
                        } else {
                          sum[5] += 0.0726140961;
                        }
                      } else {
                        if (sample[1] <102) {
                          sum[5] += 0.328729272;
                        } else {
                          sum[5] += -0.142914325;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <105) {
                      sum[5] += -0.207100585;
                    } else {
                      if (sample[0] <81) {
                        sum[5] += 0.544041395;
                      } else {
                        sum[5] += -0.16055046;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[1] <94) {
                if (sample[2] <140) {
                  if (sample[1] <89) {
                    if (sample[3] <4) {
                      sum[5] += -0.102439024;
                    } else {
                      sum[5] += -0.259550571;
                    }
                  } else {
                    sum[5] += 0.184210509;
                  }
                } else {
                  if (sample[1] <83) {
                    if (sample[0] <80) {
                      sum[5] += -0.16055046;
                    } else {
                      sum[5] += 0.0642201751;
                    }
                  } else {
                    if (sample[4] <108) {
                      if (sample[3] <3) {
                        sum[5] += 1.14088392;
                      } else {
                        if (sample[2] <142) {
                          sum[5] += -0.0773480684;
                        } else {
                          sum[5] += 0.256097555;
                        }
                      }
                    } else {
                      if (sample[1] <93) {
                        sum[5] += 1.32119203;
                      } else {
                        if (sample[2] <145) {
                          sum[5] += 0.0642201751;
                        } else {
                          sum[5] += 0.797927439;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <150) {
                  if (sample[3] <6) {
                    sum[5] += -0.260393858;
                  } else {
                    if (sample[4] <106) {
                      sum[5] += 0.947598219;
                    } else {
                      if (sample[1] <95) {
                        sum[5] += 0.734146297;
                      } else {
                        if (sample[1] <117) {
                          sum[5] += 0.101109467;
                        } else {
                          sum[5] += 0.479253083;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <153) {
                    if (sample[1] <111) {
                      if (sample[1] <98) {
                        if (sample[3] <5) {
                          sum[5] += -0.138339922;
                        } else {
                          sum[5] += 0.176322401;
                        }
                      } else {
                        if (sample[0] <87) {
                          sum[5] += -0.251041174;
                        } else {
                          sum[5] += -0.0685155019;
                        }
                      }
                    } else {
                      if (sample[2] <151) {
                        sum[5] += -0.193103448;
                      } else {
                        if (sample[1] <117) {
                          sum[5] += 0.482758611;
                        } else {
                          sum[5] += 0.0642201751;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <84) {
                      if (sample[2] <154) {
                        if (sample[1] <102) {
                          sum[5] += -6.72955647e-09;
                        } else {
                          sum[5] += -0.249258161;
                        }
                      } else {
                        if (sample[1] <101) {
                          sum[5] += 0.372781038;
                        } else {
                          sum[5] += 0.0642201751;
                        }
                      }
                    } else {
                      if (sample[1] <116) {
                        if (sample[1] <109) {
                          sum[5] += 0.162475809;
                        } else {
                          sum[5] += 0.952662706;
                        }
                      } else {
                        if (sample[0] <89) {
                          sum[5] += -0.207100585;
                        } else {
                          sum[5] += 0.0642201751;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[3] <14) {
              if (sample[2] <157) {
                if (sample[1] <113) {
                  if (sample[0] <86) {
                    sum[5] += 0.433884293;
                  } else {
                    sum[5] += 1.2409972;
                  }
                } else {
                  sum[5] += 0.0642201751;
                }
              } else {
                sum[5] += 1.72857726;
              }
            } else {
              if (sample[3] <15) {
                sum[5] += 0.482758611;
              } else {
                if (sample[4] <112) {
                  sum[5] += 0.313793093;
                } else {
                  if (sample[0] <93) {
                    sum[5] += -0.212707177;
                  } else {
                    sum[5] += 0.0289256144;
                  }
                }
              }
            }
          }
        }
      } else {
        if (sample[2] <156) {
          if (sample[2] <126) {
            if (sample[3] <12) {
              if (sample[2] <117) {
                if (sample[3] <6) {
                  if (sample[0] <49) {
                    sum[5] += -0.273081928;
                  } else {
                    if (sample[3] <5) {
                      if (sample[0] <59) {
                        sum[5] += 0.821299613;
                      } else {
                        sum[5] += 0.0642201751;
                      }
                    } else {
                      if (sample[1] <68) {
                        if (sample[2] <108) {
                          sum[5] += -0.062130183;
                        } else {
                          sum[5] += 0.368421048;
                        }
                      } else {
                        sum[5] += -0.0773480684;
                      }
                    }
                  }
                } else {
                  if (sample[2] <112) {
                    if (sample[2] <111) {
                      if (sample[1] <58) {
                        if (sample[4] <120) {
                          sum[5] += -0.121983916;
                        } else {
                          sum[5] += -0.281748772;
                        }
                      } else {
                        if (sample[1] <62) {
                          sum[5] += 0.238035247;
                        } else {
                          sum[5] += -0.159453303;
                        }
                      }
                    } else {
                      if (sample[0] <57) {
                        sum[5] += 0.433884293;
                      } else {
                        sum[5] += 0.0642201751;
                      }
                    }
                  } else {
                    if (sample[1] <74) {
                      if (sample[0] <58) {
                        sum[5] += 0.0289256144;
                      } else {
                        if (sample[0] <61) {
                          sum[5] += -0.287501335;
                        } else {
                          sum[5] += 0.0289256144;
                        }
                      }
                    } else {
                      if (sample[4] <120) {
                        sum[5] += 0.144827574;
                      } else {
                        if (sample[1] <80) {
                          sum[5] += -0.212173477;
                        } else {
                          sum[5] += -0.0311572757;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <10) {
                  if (sample[0] <66) {
                    if (sample[1] <81) {
                      if (sample[2] <119) {
                        if (sample[0] <62) {
                          sum[5] += 0.45161289;
                        } else {
                          sum[5] += 0.0362694226;
                        }
                      } else {
                        if (sample[0] <62) {
                          sum[5] += 0.231404945;
                        } else {
                          sum[5] += 0.920696259;
                        }
                      }
                    } else {
                      if (sample[4] <121) {
                        sum[5] += -0.16055046;
                      } else {
                        sum[5] += 0.267515898;
                      }
                    }
                  } else {
                    if (sample[1] <79) {
                      sum[5] += -0.16055046;
                    } else {
                      sum[5] += 0.184210509;
                    }
                  }
                } else {
                  if (sample[0] <66) {
                    if (sample[4] <122) {
                      if (sample[2] <123) {
                        if (sample[4] <120) {
                          sum[5] += -0.0241379365;
                        } else {
                          sum[5] += 0.368421048;
                        }
                      } else {
                        sum[5] += -0.193103448;
                      }
                    } else {
                      if (sample[2] <125) {
                        if (sample[1] <81) {
                          sum[5] += -0.240072206;
                        } else {
                          sum[5] += -0.132911399;
                        }
                      } else {
                        sum[5] += 0.0289256144;
                      }
                    }
                  } else {
                    sum[5] += 0.513761461;
                  }
                }
              }
            } else {
              if (sample[2] <115) {
                if (sample[2] <105) {
                  sum[5] += -0.288011163;
                } else {
                  if (sample[4] <124) {
                    sum[5] += -0.277698338;
                  } else {
                    if (sample[1] <79) {
                      if (sample[1] <77) {
                        sum[5] += -0.253351212;
                      } else {
                        if (sample[4] <126) {
                          sum[5] += -0.196821511;
                        } else {
                          sum[5] += -0.0311572757;
                        }
                      }
                    } else {
                      if (sample[3] <14) {
                        if (sample[4] <125) {
                          sum[5] += 0.0828402266;
                        } else {
                          sum[5] += -0.256723702;
                        }
                      } else {
                        sum[5] += -0.250049472;
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <83) {
                  if (sample[0] <59) {
                    if (sample[2] <116) {
                      sum[5] += 0.288990825;
                    } else {
                      sum[5] += 0.0289256144;
                    }
                  } else {
                    if (sample[4] <124) {
                      sum[5] += 0.0289256144;
                    } else {
                      sum[5] += -0.200636938;
                    }
                  }
                } else {
                  if (sample[4] <126) {
                    if (sample[1] <87) {
                      if (sample[2] <120) {
                        if (sample[2] <117) {
                          sum[5] += -0.224973649;
                        } else {
                          sum[5] += -0.117821783;
                        }
                      } else {
                        if (sample[4] <123) {
                          sum[5] += -0.17355372;
                        } else {
                          sum[5] += 0.112903215;
                        }
                      }
                    } else {
                      sum[5] += -0.256290495;
                    }
                  } else {
                    if (sample[1] <89) {
                      sum[5] += -0.275590539;
                    } else {
                      if (sample[4] <127) {
                        if (sample[0] <59) {
                          sum[5] += -0.193103448;
                        } else {
                          sum[5] += 0.140750661;
                        }
                      } else {
                        if (sample[1] <93) {
                          sum[5] += -0.212707177;
                        } else {
                          sum[5] += -0.0445859917;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[1] <91) {
              if (sample[4] <122) {
                if (sample[2] <130) {
                  if (sample[1] <85) {
                    if (sample[1] <80) {
                      if (sample[1] <78) {
                        if (sample[1] <77) {
                          sum[5] += -0.102439024;
                        } else {
                          sum[5] += 0.6517241;
                        }
                      } else {
                        if (sample[4] <121) {
                          sum[5] += -0.212707177;
                        } else {
                          sum[5] += 0.111464955;
                        }
                      }
                    } else {
                      sum[5] += 0.662721872;
                    }
                  } else {
                    sum[5] += -0.212707177;
                  }
                } else {
                  if (sample[3] <3) {
                    if (sample[0] <78) {
                      sum[5] += -0.0445859917;
                    } else {
                      sum[5] += 0.513761461;
                    }
                  } else {
                    if (sample[3] <9) {
                      if (sample[0] <77) {
                        sum[5] += 0.819059074;
                      } else {
                        if (sample[1] <86) {
                          sum[5] += -0.16055046;
                        } else {
                          sum[5] += 0.6517241;
                        }
                      }
                    } else {
                      sum[5] += 0.0642201751;
                    }
                  }
                }
              } else {
                if (sample[1] <80) {
                  if (sample[3] <3) {
                    sum[5] += -0.207100585;
                  } else {
                    if (sample[1] <75) {
                      sum[5] += 0.0642201751;
                    } else {
                      sum[5] += 1.55298007;
                    }
                  }
                } else {
                  if (sample[0] <77) {
                    if (sample[3] <12) {
                      if (sample[2] <141) {
                        sum[5] += 0.835820854;
                      } else {
                        if (sample[2] <144) {
                          sum[5] += 0.0872576088;
                        } else {
                          sum[5] += 0.704595149;
                        }
                      }
                    } else {
                      if (sample[1] <90) {
                        sum[5] += -5.48990142e-09;
                      } else {
                        sum[5] += 0.288990825;
                      }
                    }
                  } else {
                    sum[5] += 1.20909083;
                  }
                }
              }
            } else {
              if (sample[3] <8) {
                if (sample[1] <94) {
                  if (sample[4] <125) {
                    if (sample[0] <81) {
                      sum[5] += 0.986646831;
                    } else {
                      sum[5] += 0.231404945;
                    }
                  } else {
                    sum[5] += 0.111464955;
                  }
                } else {
                  if (sample[4] <120) {
                    sum[5] += -0.193103448;
                  } else {
                    if (sample[4] <123) {
                      if (sample[4] <121) {
                        sum[5] += 0.184210509;
                      } else {
                        sum[5] += 0.682572603;
                      }
                    } else {
                      if (sample[1] <95) {
                        sum[5] += -0.225806445;
                      } else {
                        if (sample[0] <78) {
                          sum[5] += 0.513761461;
                        } else {
                          sum[5] += 0.0726140961;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <129) {
                  if (sample[1] <92) {
                    sum[5] += -0.062130183;
                  } else {
                    sum[5] += -0.272169173;
                  }
                } else {
                  if (sample[1] <96) {
                    if (sample[2] <140) {
                      if (sample[2] <133) {
                        if (sample[2] <131) {
                          sum[5] += 0.0580110401;
                        } else {
                          sum[5] += 0.807692289;
                        }
                      } else {
                        if (sample[1] <93) {
                          sum[5] += -0.242214531;
                        } else {
                          sum[5] += -0.0388170108;
                        }
                      }
                    } else {
                      if (sample[0] <75) {
                        if (sample[0] <72) {
                          sum[5] += -0.200636938;
                        } else {
                          sum[5] += 0.704595149;
                        }
                      } else {
                        if (sample[2] <146) {
                          sum[5] += 0.231404945;
                        } else {
                          sum[5] += -0.225806445;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <141) {
                      if (sample[3] <13) {
                        if (sample[0] <73) {
                          sum[5] += 0.224528283;
                        } else {
                          sum[5] += 0.790322542;
                        }
                      } else {
                        if (sample[4] <127) {
                          sum[5] += -0.0840672553;
                        } else {
                          sum[5] += 0.412663728;
                        }
                      }
                    } else {
                      if (sample[1] <104) {
                        if (sample[1] <100) {
                          sum[5] += -0.071930781;
                        } else {
                          sum[5] += -0.203864992;
                        }
                      } else {
                        if (sample[0] <77) {
                          sum[5] += -0.0459518656;
                        } else {
                          sum[5] += 0.275631487;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          if (sample[1] <125) {
            if (sample[2] <157) {
              sum[5] += 0.797927439;
            } else {
              sum[5] += 1.74099815;
            }
          } else {
            sum[5] += 0.288990825;
          }
        }
      }
    } else {
      if (sample[2] <86) {
        if (sample[2] <77) {
          if (sample[2] <57) {
            if (sample[2] <50) {
              sum[5] += -0.290090829;
            } else {
              if (sample[1] <17) {
                if (sample[3] <5) {
                  sum[5] += 0.0642201751;
                } else {
                  sum[5] += 1.50429797;
                }
              } else {
                if (sample[1] <25) {
                  if (sample[2] <53) {
                    sum[5] += -0.229676783;
                  } else {
                    if (sample[3] <12) {
                      if (sample[3] <11) {
                        sum[5] += 0.0642201751;
                      } else {
                        sum[5] += 0.267515898;
                      }
                    } else {
                      if (sample[2] <55) {
                        if (sample[1] <24) {
                          sum[5] += -0.0773480684;
                        } else {
                          sum[5] += -0.200636938;
                        }
                      } else {
                        sum[5] += 0.0642201751;
                      }
                    }
                  }
                } else {
                  sum[5] += -0.286628395;
                }
              }
            }
          } else {
            if (sample[1] <30) {
              if (sample[3] <14) {
                if (sample[0] <1) {
                  if (sample[3] <13) {
                    sum[5] += 1.34021342;
                  } else {
                    if (sample[1] <28) {
                      if (sample[2] <62) {
                        sum[5] += 0.544041395;
                      } else {
                        sum[5] += 0.111464955;
                      }
                    } else {
                      sum[5] += 1.09763312;
                    }
                  }
                } else {
                  sum[5] += -0.247692302;
                }
              } else {
                if (sample[2] <60) {
                  if (sample[1] <28) {
                    if (sample[2] <59) {
                      sum[5] += 0.193370149;
                    } else {
                      sum[5] += -0.17355372;
                    }
                  } else {
                    if (sample[2] <59) {
                      sum[5] += -0.187667564;
                    } else {
                      sum[5] += 0.0121107185;
                    }
                  }
                } else {
                  sum[5] += 0.623145342;
                }
              }
            } else {
              if (sample[0] <1) {
                if (sample[3] <15) {
                  if (sample[1] <36) {
                    if (sample[2] <73) {
                      if (sample[2] <65) {
                        sum[5] += -0.17355372;
                      } else {
                        if (sample[1] <33) {
                          sum[5] += 0.66149503;
                        } else {
                          sum[5] += 0.174273849;
                        }
                      }
                    } else {
                      if (sample[1] <31) {
                        sum[5] += 0.580912828;
                      } else {
                        sum[5] += 1.27413976;
                      }
                    }
                  } else {
                    if (sample[2] <76) {
                      sum[5] += 0.152173907;
                    } else {
                      sum[5] += -6.72955647e-09;
                    }
                  }
                } else {
                  if (sample[2] <72) {
                    if (sample[2] <64) {
                      sum[5] += -0.27542311;
                    } else {
                      if (sample[1] <36) {
                        if (sample[1] <33) {
                          sum[5] += -0.207100585;
                        } else {
                          sum[5] += -0.00355330762;
                        }
                      } else {
                        if (sample[3] <17) {
                          sum[5] += -0.184742272;
                        } else {
                          sum[5] += -0.243505523;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <40) {
                      if (sample[1] <38) {
                        if (sample[1] <36) {
                          sum[5] += 0.231404945;
                        } else {
                          sum[5] += -0.0455333963;
                        }
                      } else {
                        if (sample[2] <75) {
                          sum[5] += -0.260904044;
                        } else {
                          sum[5] += -0.170667663;
                        }
                      }
                    } else {
                      if (sample[1] <42) {
                        if (sample[2] <76) {
                          sum[5] += 0.110034041;
                        } else {
                          sum[5] += -0.0841035172;
                        }
                      } else {
                        if (sample[2] <75) {
                          sum[5] += -0.0532994978;
                        } else {
                          sum[5] += -0.209642068;
                        }
                      }
                    }
                  }
                }
              } else {
                sum[5] += -0.286887676;
              }
            }
          }
        } else {
          if (sample[0] <1) {
            if (sample[2] <83) {
              if (sample[3] <16) {
                if (sample[2] <80) {
                  if (sample[1] <38) {
                    if (sample[2] <79) {
                      if (sample[1] <36) {
                        sum[5] += 1.29369617;
                      } else {
                        sum[5] += 0.781553328;
                      }
                    } else {
                      if (sample[1] <37) {
                        sum[5] += -0.200636938;
                      } else {
                        sum[5] += 0.495121926;
                      }
                    }
                  } else {
                    if (sample[2] <78) {
                      if (sample[1] <39) {
                        sum[5] += -0.116343491;
                      } else {
                        sum[5] += -0.0484764613;
                      }
                    } else {
                      if (sample[2] <79) {
                        if (sample[1] <39) {
                          sum[5] += 0.409433931;
                        } else {
                          sum[5] += 0.742535293;
                        }
                      } else {
                        sum[5] += 0.37575388;
                      }
                    }
                  }
                } else {
                  if (sample[2] <82) {
                    if (sample[1] <41) {
                      if (sample[1] <37) {
                        sum[5] += 0.46408838;
                      } else {
                        sum[5] += 1.05878866;
                      }
                    } else {
                      sum[5] += 0.716867447;
                    }
                  } else {
                    sum[5] += 0.720345616;
                  }
                }
              } else {
                if (sample[2] <81) {
                  if (sample[1] <41) {
                    sum[5] += 0.586752594;
                  } else {
                    if (sample[1] <42) {
                      if (sample[2] <78) {
                        sum[5] += 0.100286521;
                      } else {
                        if (sample[2] <79) {
                          sum[5] += 0.349272311;
                        } else {
                          sum[5] += 0.132075459;
                        }
                      }
                    } else {
                      if (sample[2] <80) {
                        if (sample[2] <78) {
                          sum[5] += 0.0954979435;
                        } else {
                          sum[5] += -0.0575835519;
                        }
                      } else {
                        if (sample[1] <44) {
                          sum[5] += 0.121739119;
                        } else {
                          sum[5] += 0.265822768;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <82) {
                    if (sample[1] <45) {
                      sum[5] += 0.979999959;
                    } else {
                      sum[5] += 0.543763638;
                    }
                  } else {
                    if (sample[1] <45) {
                      sum[5] += 0.506655514;
                    } else {
                      sum[5] += 0.170487091;
                    }
                  }
                }
              }
            } else {
              if (sample[1] <43) {
                if (sample[1] <42) {
                  if (sample[2] <84) {
                    if (sample[1] <40) {
                      sum[5] += 0.947598219;
                    } else {
                      sum[5] += 0.522684276;
                    }
                  } else {
                    sum[5] += 0.384615362;
                  }
                } else {
                  if (sample[2] <85) {
                    sum[5] += 1.13803673;
                  } else {
                    sum[5] += 0.403485239;
                  }
                }
              } else {
                if (sample[1] <49) {
                  sum[5] += 1.43650687;
                } else {
                  sum[5] += 0.517751455;
                }
              }
            }
          } else {
            if (sample[4] <225) {
              sum[5] += -0.268333793;
            } else {
              if (sample[2] <85) {
                if (sample[4] <233) {
                  sum[5] += -0.266371667;
                } else {
                  if (sample[2] <82) {
                    sum[5] += -0.23517786;
                  } else {
                    sum[5] += 0.6517241;
                  }
                }
              } else {
                if (sample[0] <10) {
                  sum[5] += 0.231404945;
                } else {
                  sum[5] += 0.738532066;
                }
              }
            }
          }
        }
      } else {
        if (sample[2] <134) {
          if (sample[4] <250) {
            if (sample[2] <125) {
              if (sample[4] <182) {
                if (sample[4] <162) {
                  if (sample[3] <14) {
                    if (sample[3] <7) {
                      if (sample[2] <98) {
                        if (sample[2] <96) {
                          sum[5] += -0.216634423;
                        } else {
                          sum[5] += 0.0642201751;
                        }
                      } else {
                        if (sample[1] <68) {
                          sum[5] += 0.676077247;
                        } else {
                          sum[5] += 0.0670926422;
                        }
                      }
                    } else {
                      if (sample[2] <109) {
                        if (sample[1] <60) {
                          sum[5] += -0.0429386646;
                        } else {
                          sum[5] += -0.219095796;
                        }
                      } else {
                        if (sample[4] <142) {
                          sum[5] += -0.166228503;
                        } else {
                          sum[5] += 0.0821716636;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <108) {
                      if (sample[3] <15) {
                        if (sample[4] <158) {
                          sum[5] += -0.241463408;
                        } else {
                          sum[5] += 0.332344204;
                        }
                      } else {
                        if (sample[4] <145) {
                          sum[5] += -0.285974503;
                        } else {
                          sum[5] += -0.262370795;
                        }
                      }
                    } else {
                      if (sample[1] <75) {
                        if (sample[4] <159) {
                          sum[5] += -0.151624545;
                        } else {
                          sum[5] += 0.368421048;
                        }
                      } else {
                        if (sample[0] <48) {
                          sum[5] += -0.184210524;
                        } else {
                          sum[5] += -0.225607604;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <16) {
                    if (sample[1] <74) {
                      if (sample[2] <99) {
                        if (sample[2] <92) {
                          sum[5] += -0.230396897;
                        } else {
                          sum[5] += 0.119148925;
                        }
                      } else {
                        if (sample[4] <165) {
                          sum[5] += 0.159178063;
                        } else {
                          sum[5] += 0.431143641;
                        }
                      }
                    } else {
                      if (sample[2] <112) {
                        sum[5] += 0.45161289;
                      } else {
                        if (sample[0] <37) {
                          sum[5] += 0.0900832564;
                        } else {
                          sum[5] += -0.107064396;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <99) {
                      if (sample[2] <96) {
                        sum[5] += -0.269908935;
                      } else {
                        if (sample[0] <30) {
                          sum[5] += 0.0362694226;
                        } else {
                          sum[5] += -0.246189907;
                        }
                      }
                    } else {
                      if (sample[1] <69) {
                        sum[5] += 0.338709652;
                      } else {
                        if (sample[0] <35) {
                          sum[5] += -0.08021155;
                        } else {
                          sum[5] += -0.200754717;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <119) {
                  if (sample[1] <58) {
                    if (sample[0] <6) {
                      if (sample[2] <106) {
                        if (sample[1] <52) {
                          sum[5] += 0.145367399;
                        } else {
                          sum[5] += 1.13817978;
                        }
                      } else {
                        if (sample[2] <109) {
                          sum[5] += 0.0170731638;
                        } else {
                          sum[5] += -0.16055046;
                        }
                      }
                    } else {
                      if (sample[0] <8) {
                        if (sample[3] <16) {
                          sum[5] += -0.142614603;
                        } else {
                          sum[5] += 0.731737971;
                        }
                      } else {
                        if (sample[4] <202) {
                          sum[5] += -0.00818474963;
                        } else {
                          sum[5] += -0.176013172;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <211) {
                      if (sample[3] <14) {
                        if (sample[2] <115) {
                          sum[5] += 0.185022011;
                        } else {
                          sum[5] += 0.923016131;
                        }
                      } else {
                        if (sample[4] <197) {
                          sum[5] += 0.0227687936;
                        } else {
                          sum[5] += 0.224182546;
                        }
                      }
                    } else {
                      if (sample[0] <17) {
                        if (sample[2] <110) {
                          sum[5] += 0.779984474;
                        } else {
                          sum[5] += 0.297506273;
                        }
                      } else {
                        if (sample[2] <113) {
                          sum[5] += 0.362216741;
                        } else {
                          sum[5] += 0.880994439;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <15) {
                    if (sample[1] <72) {
                      if (sample[1] <67) {
                        if (sample[1] <61) {
                          sum[5] += 0.358399987;
                        } else {
                          sum[5] += 1.40477157;
                        }
                      } else {
                        if (sample[4] <204) {
                          sum[5] += 1.1485225;
                        } else {
                          sum[5] += 0.522271693;
                        }
                      }
                    } else {
                      if (sample[0] <27) {
                        sum[5] += 1.0545851;
                      } else {
                        if (sample[2] <124) {
                          sum[5] += 0.326830298;
                        } else {
                          sum[5] += -0.0315947905;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <74) {
                      if (sample[0] <8) {
                        if (sample[1] <69) {
                          sum[5] += -0.0622559711;
                        } else {
                          sum[5] += 0.332344204;
                        }
                      } else {
                        if (sample[3] <16) {
                          sum[5] += 0.617251873;
                        } else {
                          sum[5] += 0.270500362;
                        }
                      }
                    } else {
                      if (sample[4] <212) {
                        if (sample[2] <122) {
                          sum[5] += -0.0507093333;
                        } else {
                          sum[5] += -0.172035545;
                        }
                      } else {
                        if (sample[4] <213) {
                          sum[5] += 1.05813944;
                        } else {
                          sum[5] += 0.18017523;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[1] <71) {
                if (sample[3] <15) {
                  if (sample[4] <148) {
                    if (sample[1] <68) {
                      sum[5] += 0.513761461;
                    } else {
                      if (sample[2] <129) {
                        sum[5] += -0.184210524;
                      } else {
                        sum[5] += 0.0289256144;
                      }
                    }
                  } else {
                    if (sample[1] <69) {
                      if (sample[4] <181) {
                        if (sample[2] <127) {
                          sum[5] += 0.275933594;
                        } else {
                          sum[5] += 0.928114951;
                        }
                      } else {
                        if (sample[4] <242) {
                          sum[5] += 1.69505763;
                        } else {
                          sum[5] += 0.840611339;
                        }
                      }
                    } else {
                      if (sample[2] <130) {
                        if (sample[2] <129) {
                          sum[5] += 0.926597893;
                        } else {
                          sum[5] += 1.26816285;
                        }
                      } else {
                        if (sample[2] <131) {
                          sum[5] += 1.43615901;
                        } else {
                          sum[5] += 1.64764273;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <129) {
                    if (sample[0] <9) {
                      if (sample[3] <16) {
                        if (sample[2] <126) {
                          sum[5] += 0.277410805;
                        } else {
                          sum[5] += 1.36939001;
                        }
                      } else {
                        if (sample[1] <70) {
                          sum[5] += 0.506841481;
                        } else {
                          sum[5] += 0.0460021794;
                        }
                      }
                    } else {
                      if (sample[4] <229) {
                        if (sample[4] <223) {
                          sum[5] += -0.184210524;
                        } else {
                          sum[5] += 0.490205646;
                        }
                      } else {
                        if (sample[1] <68) {
                          sum[5] += 0.562326849;
                        } else {
                          sum[5] += -0.0945080146;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <8) {
                      if (sample[0] <6) {
                        if (sample[3] <16) {
                          sum[5] += 1.26111734;
                        } else {
                          sum[5] += 0.231404945;
                        }
                      } else {
                        sum[5] += 1.61869693;
                      }
                    } else {
                      if (sample[2] <131) {
                        if (sample[1] <69) {
                          sum[5] += 1.2513274;
                        } else {
                          sum[5] += 0.579078674;
                        }
                      } else {
                        if (sample[0] <9) {
                          sum[5] += 0.636363626;
                        } else {
                          sum[5] += 1.47227526;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <13) {
                  if (sample[2] <129) {
                    if (sample[3] <12) {
                      if (sample[4] <164) {
                        if (sample[3] <7) {
                          sum[5] += -5.48990142e-09;
                        } else {
                          sum[5] += 0.990267038;
                        }
                      } else {
                        if (sample[1] <72) {
                          sum[5] += 0.734806597;
                        } else {
                          sum[5] += 0.155124635;
                        }
                      }
                    } else {
                      if (sample[0] <37) {
                        sum[5] += 0.928114951;
                      } else {
                        if (sample[0] <58) {
                          sum[5] += -0.0169409569;
                        } else {
                          sum[5] += 0.181660891;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <79) {
                      if (sample[0] <48) {
                        if (sample[1] <74) {
                          sum[5] += 1.64171517;
                        } else {
                          sum[5] += 0.737937808;
                        }
                      } else {
                        sum[5] += 1.71424472;
                      }
                    } else {
                      if (sample[0] <46) {
                        if (sample[1] <80) {
                          sum[5] += -0.0415019803;
                        } else {
                          sum[5] += 0.290155411;
                        }
                      } else {
                        if (sample[2] <131) {
                          sum[5] += 0.707685232;
                        } else {
                          sum[5] += 1.29322028;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[1] <82) {
                    if (sample[2] <133) {
                      if (sample[4] <230) {
                        if (sample[1] <72) {
                          sum[5] += 0.753183603;
                        } else {
                          sum[5] += 0.401121914;
                        }
                      } else {
                        if (sample[1] <77) {
                          sum[5] += -0.0158622954;
                        } else {
                          sum[5] += 1.04417408;
                        }
                      }
                    } else {
                      if (sample[1] <73) {
                        sum[5] += 1.6108706;
                      } else {
                        if (sample[1] <77) {
                          sum[5] += 0.288822174;
                        } else {
                          sum[5] += 1.10295427;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <16) {
                      if (sample[2] <126) {
                        if (sample[0] <45) {
                          sum[5] += 0.267515898;
                        } else {
                          sum[5] += -0.248612642;
                        }
                      } else {
                        if (sample[4] <151) {
                          sum[5] += 0.166576505;
                        } else {
                          sum[5] += -0.0186777432;
                        }
                      }
                    } else {
                      if (sample[0] <18) {
                        sum[5] += 0.513761461;
                      } else {
                        if (sample[3] <17) {
                          sum[5] += -0.160284251;
                        } else {
                          sum[5] += -0.260278851;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[3] <15) {
              if (sample[1] <55) {
                if (sample[1] <49) {
                  if (sample[1] <41) {
                    if (sample[2] <90) {
                      if (sample[2] <88) {
                        sum[5] += 0.46408838;
                      } else {
                        sum[5] += 1.24260354;
                      }
                    } else {
                      sum[5] += 0.288990825;
                    }
                  } else {
                    if (sample[2] <89) {
                      if (sample[2] <88) {
                        if (sample[2] <87) {
                          sum[5] += -5.48990142e-09;
                        } else {
                          sum[5] += 0.316981107;
                        }
                      } else {
                        sum[5] += 0.797927439;
                      }
                    } else {
                      if (sample[2] <93) {
                        if (sample[1] <44) {
                          sum[5] += -0.223008841;
                        } else {
                          sum[5] += 0.0289256144;
                        }
                      } else {
                        if (sample[2] <95) {
                          sum[5] += 0.462102652;
                        } else {
                          sum[5] += 0.154260516;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <107) {
                    if (sample[2] <103) {
                      sum[5] += 0.288990825;
                    } else {
                      sum[5] += 1.2221396;
                    }
                  } else {
                    if (sample[1] <54) {
                      if (sample[2] <112) {
                        if (sample[2] <110) {
                          sum[5] += 0.519650638;
                        } else {
                          sum[5] += 0.223642156;
                        }
                      } else {
                        sum[5] += -0.232365146;
                      }
                    } else {
                      sum[5] += 0.884615362;
                    }
                  }
                }
              } else {
                sum[5] += 1.56470573;
              }
            } else {
              if (sample[1] <47) {
                if (sample[1] <44) {
                  sum[5] += 0.64424777;
                } else {
                  if (sample[2] <94) {
                    sum[5] += 1.49990749;
                  } else {
                    if (sample[2] <95) {
                      sum[5] += 0.564516127;
                    } else {
                      sum[5] += -0.16055046;
                    }
                  }
                }
              } else {
                if (sample[2] <107) {
                  if (sample[3] <16) {
                    if (sample[1] <52) {
                      if (sample[2] <98) {
                        sum[5] += 1.68064296;
                      } else {
                        if (sample[1] <49) {
                          sum[5] += 0.0362694226;
                        } else {
                          sum[5] += 1.0383631;
                        }
                      }
                    } else {
                      sum[5] += 1.67507339;
                    }
                  } else {
                    if (sample[2] <92) {
                      if (sample[1] <51) {
                        sum[5] += 1.63837039;
                      } else {
                        sum[5] += 1.36215281;
                      }
                    } else {
                      sum[5] += 1.727126;
                    }
                  }
                } else {
                  if (sample[2] <121) {
                    if (sample[0] <2) {
                      if (sample[1] <54) {
                        sum[5] += 1.22075868;
                      } else {
                        if (sample[1] <63) {
                          sum[5] += 1.63853192;
                        } else {
                          sum[5] += 1.55237389;
                        }
                      }
                    } else {
                      sum[5] += 0.579617798;
                    }
                  } else {
                    if (sample[1] <75) {
                      sum[5] += 1.70044267;
                    } else {
                      sum[5] += 0.513761461;
                    }
                  }
                }
              }
            }
          }
        } else {
          if (sample[3] <13) {
            if (sample[2] <159) {
              if (sample[1] <90) {
                if (sample[1] <86) {
                  if (sample[3] <4) {
                    if (sample[2] <147) {
                      sum[5] += 1.00552487;
                    } else {
                      if (sample[0] <70) {
                        sum[5] += 0.0289256144;
                      } else {
                        sum[5] += 0.513761461;
                      }
                    }
                  } else {
                    if (sample[1] <82) {
                      if (sample[4] <224) {
                        sum[5] += 1.72693563;
                      } else {
                        sum[5] += 0.433884293;
                      }
                    } else {
                      if (sample[4] <136) {
                        if (sample[2] <146) {
                          sum[5] += 0.691987455;
                        } else {
                          sum[5] += 1.51492524;
                        }
                      } else {
                        if (sample[3] <10) {
                          sum[5] += 1.71724844;
                        } else {
                          sum[5] += 1.54507279;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <170) {
                    if (sample[2] <148) {
                      if (sample[3] <11) {
                        if (sample[0] <67) {
                          sum[5] += 1.01276588;
                        } else {
                          sum[5] += 0.538197815;
                        }
                      } else {
                        sum[5] += 1.53475928;
                      }
                    } else {
                      if (sample[3] <10) {
                        sum[5] += 1.68491626;
                      } else {
                        if (sample[1] <89) {
                          sum[5] += 1.3493557;
                        } else {
                          sum[5] += 0.754253268;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <88) {
                      if (sample[0] <44) {
                        if (sample[2] <155) {
                          sum[5] += 0.305676848;
                        } else {
                          sum[5] += 1.05161786;
                        }
                      } else {
                        sum[5] += 1.33135211;
                      }
                    } else {
                      if (sample[0] <43) {
                        sum[5] += 0.6517241;
                      } else {
                        if (sample[0] <45) {
                          sum[5] += -0.102439024;
                        } else {
                          sum[5] += 0.403485239;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <9) {
                  if (sample[2] <155) {
                    if (sample[0] <75) {
                      if (sample[1] <93) {
                        if (sample[0] <70) {
                          sum[5] += 0.184210509;
                        } else {
                          sum[5] += 0.99999994;
                        }
                      } else {
                        if (sample[4] <129) {
                          sum[5] += 0.0642201751;
                        } else {
                          sum[5] += 0.531645536;
                        }
                      }
                    } else {
                      if (sample[1] <97) {
                        if (sample[1] <92) {
                          sum[5] += 0.0642201751;
                        } else {
                          sum[5] += -0.25207755;
                        }
                      } else {
                        if (sample[4] <129) {
                          sum[5] += -0.17355372;
                        } else {
                          sum[5] += 0.231404945;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <95) {
                      sum[5] += 1.47093475;
                    } else {
                      if (sample[2] <157) {
                        sum[5] += 0.144827574;
                      } else {
                        sum[5] += 1.04132223;
                      }
                    }
                  }
                } else {
                  if (sample[0] <53) {
                    if (sample[2] <151) {
                      if (sample[0] <50) {
                        sum[5] += -0.16055046;
                      } else {
                        sum[5] += 0.433884293;
                      }
                    } else {
                      if (sample[0] <45) {
                        sum[5] += 0.111464955;
                      } else {
                        if (sample[2] <156) {
                          sum[5] += -0.169203222;
                        } else {
                          sum[5] += -0.283041626;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <137) {
                      if (sample[1] <93) {
                        if (sample[0] <70) {
                          sum[5] += 0.731903434;
                        } else {
                          sum[5] += 0.0289256144;
                        }
                      } else {
                        if (sample[2] <138) {
                          sum[5] += 0.579617798;
                        } else {
                          sum[5] += -0.0811983123;
                        }
                      }
                    } else {
                      if (sample[2] <157) {
                        if (sample[3] <11) {
                          sum[5] += 0.659977257;
                        } else {
                          sum[5] += 0.277659833;
                        }
                      } else {
                        if (sample[3] <10) {
                          sum[5] += 0.564516127;
                        } else {
                          sum[5] += 1.2404325;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[1] <120) {
                sum[5] += 1.74556839;
              } else {
                sum[5] += 0.288990825;
              }
            }
          } else {
            if (sample[4] <202) {
              if (sample[1] <88) {
                if (sample[3] <15) {
                  if (sample[2] <147) {
                    if (sample[3] <14) {
                      if (sample[4] <178) {
                        sum[5] += 1.077371;
                      } else {
                        sum[5] += 1.65875852;
                      }
                    } else {
                      if (sample[2] <144) {
                        sum[5] += 1.13486362;
                      } else {
                        sum[5] += 0.288990825;
                      }
                    }
                  } else {
                    if (sample[2] <153) {
                      if (sample[2] <149) {
                        sum[5] += 1.00122249;
                      } else {
                        if (sample[1] <84) {
                          sum[5] += 0.623145342;
                        } else {
                          sum[5] += 0.115087025;
                        }
                      }
                    } else {
                      if (sample[4] <196) {
                        sum[5] += -0.184210524;
                      } else {
                        if (sample[1] <85) {
                          sum[5] += 1.63849151;
                        } else {
                          sum[5] += 0.873307467;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[1] <84) {
                    if (sample[4] <199) {
                      sum[5] += 1.04132223;
                    } else {
                      sum[5] += 0.288990825;
                    }
                  } else {
                    if (sample[1] <87) {
                      if (sample[0] <36) {
                        if (sample[4] <200) {
                          sum[5] += -0.250716329;
                        } else {
                          sum[5] += 0.0289256144;
                        }
                      } else {
                        sum[5] += 0.231404945;
                      }
                    } else {
                      if (sample[3] <16) {
                        if (sample[0] <35) {
                          sum[5] += -0.184210524;
                        } else {
                          sum[5] += -5.48990142e-09;
                        }
                      } else {
                        if (sample[2] <137) {
                          sum[5] += 0.184210509;
                        } else {
                          sum[5] += 0.552631557;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <99) {
                  if (sample[2] <150) {
                    if (sample[1] <90) {
                      if (sample[0] <44) {
                        if (sample[2] <147) {
                          sum[5] += 0.0990016535;
                        } else {
                          sum[5] += 0.513761461;
                        }
                      } else {
                        sum[5] += 1.06032169;
                      }
                    } else {
                      if (sample[0] <47) {
                        if (sample[3] <16) {
                          sum[5] += -0.124932401;
                        } else {
                          sum[5] += 0.126301169;
                        }
                      } else {
                        if (sample[4] <169) {
                          sum[5] += 0.135173932;
                        } else {
                          sum[5] += 0.5090909;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <160) {
                      if (sample[4] <169) {
                        sum[5] += 0.372781038;
                      } else {
                        if (sample[1] <97) {
                          sum[5] += -0.229323298;
                        } else {
                          sum[5] += 0.163212419;
                        }
                      }
                    } else {
                      if (sample[2] <162) {
                        sum[5] += 0.375609726;
                      } else {
                        sum[5] += 1.24260354;
                      }
                    }
                  }
                } else {
                  if (sample[2] <154) {
                    if (sample[4] <133) {
                      if (sample[0] <68) {
                        sum[5] += 0.368421048;
                      } else {
                        if (sample[1] <106) {
                          sum[5] += -0.242214531;
                        } else {
                          sum[5] += 0.0252707507;
                        }
                      }
                    } else {
                      if (sample[0] <55) {
                        if (sample[2] <151) {
                          sum[5] += 0.352348953;
                        } else {
                          sum[5] += -0.151624545;
                        }
                      } else {
                        if (sample[0] <61) {
                          sum[5] += 0.646522164;
                        } else {
                          sum[5] += 0.434623778;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <125) {
                      if (sample[2] <156) {
                        sum[5] += 0.821299613;
                      } else {
                        sum[5] += 1.49853361;
                      }
                    } else {
                      if (sample[0] <73) {
                        sum[5] += 1.04132223;
                      } else {
                        if (sample[2] <172) {
                          sum[5] += 0.513761461;
                        } else {
                          sum[5] += -0.196821511;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[4] <248) {
                if (sample[3] <15) {
                  if (sample[2] <156) {
                    if (sample[1] <79) {
                      if (sample[1] <72) {
                        sum[5] += 1.70793653;
                      } else {
                        if (sample[3] <14) {
                          sum[5] += 1.67942059;
                        } else {
                          sum[5] += 1.46945167;
                        }
                      }
                    } else {
                      if (sample[0] <18) {
                        if (sample[0] <14) {
                          sum[5] += 0.735668778;
                        } else {
                          sum[5] += -0.221951216;
                        }
                      } else {
                        if (sample[1] <87) {
                          sum[5] += 1.42665315;
                        } else {
                          sum[5] += 0.345849782;
                        }
                      }
                    }
                  } else {
                    sum[5] += 1.74148083;
                  }
                } else {
                  if (sample[0] <26) {
                    if (sample[2] <142) {
                      if (sample[1] <84) {
                        sum[5] += 1.55269539;
                      } else {
                        if (sample[0] <23) {
                          sum[5] += -7.58604557e-09;
                        } else {
                          sum[5] += 0.690311372;
                        }
                      }
                    } else {
                      if (sample[4] <231) {
                        if (sample[0] <18) {
                          sum[5] += 0.282396078;
                        } else {
                          sum[5] += 1.18092906;
                        }
                      } else {
                        if (sample[0] <11) {
                          sum[5] += 1.00135207;
                        } else {
                          sum[5] += 1.42750478;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <84) {
                      if (sample[2] <136) {
                        sum[5] += 0.231404945;
                      } else {
                        sum[5] += 1.24260354;
                      }
                    } else {
                      if (sample[4] <204) {
                        if (sample[4] <203) {
                          sum[5] += -5.48990142e-09;
                        } else {
                          sum[5] += 0.579617798;
                        }
                      } else {
                        if (sample[4] <210) {
                          sum[5] += -0.197622582;
                        } else {
                          sum[5] += 0.231404945;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <81) {
                  if (sample[2] <139) {
                    if (sample[0] <1) {
                      if (sample[1] <73) {
                        if (sample[1] <68) {
                          sum[5] += 0.921052575;
                        } else {
                          sum[5] += 0.145367399;
                        }
                      } else {
                        sum[5] += 1.37554574;
                      }
                    } else {
                      sum[5] += 1.59725678;
                    }
                  } else {
                    sum[5] += 1.73746049;
                  }
                } else {
                  sum[5] += -0.184210524;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if (sample[3] <19) {
      if (sample[4] <229) {
        if (sample[4] <187) {
          if (sample[4] <134) {
            if (sample[4] <79) {
              sum[5] += -0.291513681;
            } else {
              if (sample[2] <145) {
                if (sample[2] <100) {
                  sum[5] += -0.291324317;
                } else {
                  if (sample[2] <133) {
                    if (sample[4] <109) {
                      sum[5] += -0.282140374;
                    } else {
                      if (sample[2] <130) {
                        if (sample[2] <113) {
                          sum[5] += -0.273017019;
                        } else {
                          sum[5] += -0.243832424;
                        }
                      } else {
                        if (sample[4] <120) {
                          sum[5] += 0.136585355;
                        } else {
                          sum[5] += -0.207100585;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <115) {
                      if (sample[0] <83) {
                        if (sample[0] <79) {
                          sum[5] += -0.0495575294;
                        } else {
                          sum[5] += -0.223008841;
                        }
                      } else {
                        if (sample[0] <84) {
                          sum[5] += 0.288990825;
                        } else {
                          sum[5] += -0.130705401;
                        }
                      }
                    } else {
                      sum[5] += -0.275639385;
                    }
                  }
                }
              } else {
                if (sample[0] <81) {
                  sum[5] += 0.372781038;
                } else {
                  if (sample[2] <172) {
                    if (sample[2] <148) {
                      if (sample[4] <90) {
                        sum[5] += -0.200636938;
                      } else {
                        if (sample[0] <90) {
                          sum[5] += -0.184210524;
                        } else {
                          sum[5] += 0.433884293;
                        }
                      }
                    } else {
                      sum[5] += -0.277990431;
                    }
                  } else {
                    sum[5] += 0.144827574;
                  }
                }
              }
            }
          } else {
            if (sample[2] <141) {
              if (sample[2] <106) {
                if (sample[2] <99) {
                  sum[5] += -0.283293754;
                } else {
                  if (sample[4] <172) {
                    if (sample[4] <164) {
                      if (sample[1] <83) {
                        sum[5] += -0.281576812;
                      } else {
                        sum[5] += -0.0906735808;
                      }
                    } else {
                      if (sample[4] <166) {
                        if (sample[1] <75) {
                          sum[5] += -0.17355372;
                        } else {
                          sum[5] += 0.111464955;
                        }
                      } else {
                        sum[5] += -0.231895223;
                      }
                    }
                  } else {
                    if (sample[2] <100) {
                      sum[5] += 0.328729272;
                    } else {
                      if (sample[4] <181) {
                        if (sample[1] <75) {
                          sum[5] += 0.0612691343;
                        } else {
                          sum[5] += -0.127272725;
                        }
                      } else {
                        sum[5] += -0.260393858;
                      }
                    }
                  }
                }
              } else {
                if (sample[0] <34) {
                  if (sample[2] <113) {
                    if (sample[0] <32) {
                      if (sample[4] <181) {
                        sum[5] += 0.0289256144;
                      } else {
                        if (sample[4] <185) {
                          sum[5] += -0.193103448;
                        } else {
                          sum[5] += 0.0289256144;
                        }
                      }
                    } else {
                      if (sample[2] <110) {
                        sum[5] += -0.0445859917;
                      } else {
                        sum[5] += 0.552631557;
                      }
                    }
                  } else {
                    if (sample[2] <117) {
                      sum[5] += -0.200636938;
                    } else {
                      sum[5] += -5.48990142e-09;
                    }
                  }
                } else {
                  if (sample[1] <102) {
                    if (sample[0] <51) {
                      if (sample[4] <136) {
                        sum[5] += 0.0828402266;
                      } else {
                        if (sample[1] <84) {
                          sum[5] += -0.245343715;
                        } else {
                          sum[5] += -0.15335831;
                        }
                      }
                    } else {
                      sum[5] += -0.276279241;
                    }
                  } else {
                    if (sample[2] <136) {
                      if (sample[1] <106) {
                        if (sample[1] <104) {
                          sum[5] += -0.0415019803;
                        } else {
                          sum[5] += 0.313793093;
                        }
                      } else {
                        sum[5] += -0.17355372;
                      }
                    } else {
                      if (sample[0] <48) {
                        sum[5] += 0.0642201751;
                      } else {
                        sum[5] += -0.25207755;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[0] <48) {
                if (sample[2] <143) {
                  sum[5] += 0.0642201751;
                } else {
                  if (sample[2] <148) {
                    sum[5] += -0.221951216;
                  } else {
                    sum[5] += 0.0642201751;
                  }
                }
              } else {
                if (sample[0] <59) {
                  sum[5] += 0.830039501;
                } else {
                  if (sample[0] <70) {
                    if (sample[1] <112) {
                      sum[5] += 0.433884293;
                    } else {
                      if (sample[1] <119) {
                        sum[5] += -0.221951216;
                      } else {
                        sum[5] += 0.184210509;
                      }
                    }
                  } else {
                    if (sample[0] <73) {
                      sum[5] += 0.963302732;
                    } else {
                      sum[5] += 0.144827574;
                    }
                  }
                }
              }
            }
          }
        } else {
          if (sample[2] <97) {
            if (sample[2] <92) {
              if (sample[4] <225) {
                sum[5] += -0.275707662;
              } else {
                if (sample[2] <85) {
                  sum[5] += -0.263366342;
                } else {
                  if (sample[2] <88) {
                    sum[5] += 0.288990825;
                  } else {
                    sum[5] += 0.0289256144;
                  }
                }
              }
            } else {
              if (sample[0] <18) {
                if (sample[2] <94) {
                  sum[5] += 0.417098433;
                } else {
                  if (sample[4] <210) {
                    sum[5] += 0.144827574;
                  } else {
                    if (sample[0] <11) {
                      sum[5] += 0.0289256144;
                    } else {
                      sum[5] += -0.225806445;
                    }
                  }
                }
              } else {
                if (sample[4] <195) {
                  if (sample[1] <68) {
                    sum[5] += -0.263366342;
                  } else {
                    sum[5] += -0.062130183;
                  }
                } else {
                  if (sample[2] <95) {
                    if (sample[4] <198) {
                      sum[5] += 0.227810636;
                    } else {
                      if (sample[2] <94) {
                        sum[5] += -0.200636938;
                      } else {
                        sum[5] += 0.0289256144;
                      }
                    }
                  } else {
                    sum[5] += -0.229257643;
                  }
                }
              }
            }
          } else {
            if (sample[4] <206) {
              if (sample[0] <31) {
                if (sample[1] <69) {
                  if (sample[1] <68) {
                    sum[5] += -0.246006384;
                  } else {
                    if (sample[2] <100) {
                      if (sample[0] <22) {
                        sum[5] += 0.184210509;
                      } else {
                        if (sample[0] <25) {
                          sum[5] += -5.48990142e-09;
                        } else {
                          sum[5] += -0.184210524;
                        }
                      }
                    } else {
                      sum[5] += -0.207100585;
                    }
                  }
                } else {
                  if (sample[2] <111) {
                    if (sample[2] <108) {
                      if (sample[4] <189) {
                        if (sample[1] <70) {
                          sum[5] += 0.513761461;
                        } else {
                          sum[5] += 0.0170731638;
                        }
                      } else {
                        if (sample[1] <71) {
                          sum[5] += -0.199524939;
                        } else {
                          sum[5] += 0.0990016535;
                        }
                      }
                    } else {
                      if (sample[2] <110) {
                        sum[5] += 0.870165706;
                      } else {
                        sum[5] += 0.0289256144;
                      }
                    }
                  } else {
                    if (sample[1] <94) {
                      if (sample[1] <82) {
                        if (sample[2] <114) {
                          sum[5] += -0.246006384;
                        } else {
                          sum[5] += 0.275933594;
                        }
                      } else {
                        if (sample[2] <125) {
                          sum[5] += -0.257719696;
                        } else {
                          sum[5] += -0.122270741;
                        }
                      }
                    } else {
                      sum[5] += 0.288990825;
                    }
                  }
                }
              } else {
                if (sample[2] <121) {
                  sum[5] += -0.0241379365;
                } else {
                  if (sample[2] <125) {
                    sum[5] += 0.838842928;
                  } else {
                    if (sample[0] <35) {
                      if (sample[2] <135) {
                        sum[5] += -0.200636938;
                      } else {
                        sum[5] += 0.111464955;
                      }
                    } else {
                      sum[5] += 0.599447489;
                    }
                  }
                }
              }
            } else {
              if (sample[1] <80) {
                if (sample[1] <68) {
                  if (sample[0] <13) {
                    if (sample[1] <67) {
                      sum[5] += -0.0241379365;
                    } else {
                      sum[5] += 0.288990825;
                    }
                  } else {
                    if (sample[2] <102) {
                      if (sample[2] <101) {
                        if (sample[1] <66) {
                          sum[5] += 0.734806597;
                        } else {
                          sum[5] += 0.338709652;
                        }
                      } else {
                        sum[5] += 0.0289256144;
                      }
                    } else {
                      sum[5] += 0.989655137;
                    }
                  }
                } else {
                  if (sample[2] <115) {
                    if (sample[2] <102) {
                      sum[5] += -0.184210524;
                    } else {
                      if (sample[2] <105) {
                        if (sample[0] <17) {
                          sum[5] += 0.636363626;
                        } else {
                          sum[5] += 0.184210509;
                        }
                      } else {
                        if (sample[1] <73) {
                          sum[5] += -0.172307685;
                        } else {
                          sum[5] += 0.25057736;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <20) {
                      if (sample[0] <18) {
                        sum[5] += 0.579617798;
                      } else {
                        if (sample[1] <79) {
                          sum[5] += -0.16055046;
                        } else {
                          sum[5] += 0.0642201751;
                        }
                      }
                    } else {
                      sum[5] += 0.989655137;
                    }
                  }
                }
              } else {
                if (sample[1] <89) {
                  if (sample[1] <87) {
                    sum[5] += -0.257719696;
                  } else {
                    sum[5] += -0.0445859917;
                  }
                } else {
                  if (sample[0] <25) {
                    sum[5] += 0.513761461;
                  } else {
                    sum[5] += 0.0642201751;
                  }
                }
              }
            }
          }
        }
      } else {
        if (sample[2] <84) {
          if (sample[2] <72) {
            if (sample[2] <71) {
              sum[5] += -0.289311588;
            } else {
              if (sample[1] <43) {
                sum[5] += -0.227121457;
              } else {
                sum[5] += 0.0252707507;
              }
            }
          } else {
            if (sample[2] <83) {
              if (sample[1] <43) {
                sum[5] += 0.169902891;
              } else {
                if (sample[2] <77) {
                  if (sample[4] <235) {
                    sum[5] += 0.0642201751;
                  } else {
                    if (sample[2] <73) {
                      sum[5] += -0.228184551;
                    } else {
                      if (sample[2] <74) {
                        if (sample[1] <44) {
                          sum[5] += -0.151624545;
                        } else {
                          sum[5] += -0.0336000063;
                        }
                      } else {
                        sum[5] += -0.195026964;
                      }
                    }
                  }
                } else {
                  if (sample[0] <1) {
                    if (sample[2] <79) {
                      if (sample[2] <78) {
                        if (sample[1] <46) {
                          sum[5] += 0.111464955;
                        } else {
                          sum[5] += -0.00881612767;
                        }
                      } else {
                        if (sample[1] <48) {
                          sum[5] += 0.412663728;
                        } else {
                          sum[5] += 0.0580110401;
                        }
                      }
                    } else {
                      if (sample[2] <80) {
                        sum[5] += -0.200636938;
                      } else {
                        if (sample[2] <82) {
                          sum[5] += 0.0277227629;
                        } else {
                          sum[5] += 0.12727271;
                        }
                      }
                    }
                  } else {
                    sum[5] += -0.242214531;
                  }
                }
              }
            } else {
              sum[5] += 0.498812318;
            }
          }
        } else {
          if (sample[1] <82) {
            if (sample[2] <92) {
              if (sample[1] <53) {
                if (sample[2] <86) {
                  sum[5] += 0.674113989;
                } else {
                  sum[5] += 1.07422256;
                }
              } else {
                if (sample[2] <87) {
                  if (sample[0] <5) {
                    sum[5] += -0.0241379365;
                  } else {
                    sum[5] += 0.433884293;
                  }
                } else {
                  if (sample[1] <55) {
                    sum[5] += 0.699417114;
                  } else {
                    if (sample[0] <1) {
                      if (sample[1] <56) {
                        if (sample[2] <91) {
                          sum[5] += -0.0241379365;
                        } else {
                          sum[5] += 0.144827574;
                        }
                      } else {
                        sum[5] += 0.513761461;
                      }
                    } else {
                      sum[5] += 0.580912828;
                    }
                  }
                }
              }
            } else {
              if (sample[4] <241) {
                if (sample[2] <120) {
                  if (sample[4] <232) {
                    if (sample[1] <68) {
                      sum[5] += 0.734146297;
                    } else {
                      sum[5] += 0.0642201751;
                    }
                  } else {
                    sum[5] += 1.17370319;
                  }
                } else {
                  if (sample[0] <9) {
                    sum[5] += -0.17355372;
                  } else {
                    sum[5] += 0.144827574;
                  }
                }
              } else {
                if (sample[2] <97) {
                  sum[5] += 1.4635371;
                } else {
                  sum[5] += 1.67835999;
                }
              }
            }
          } else {
            if (sample[0] <5) {
              sum[5] += -0.274673015;
            } else {
              if (sample[0] <8) {
                sum[5] += 0.0289256144;
              } else {
                sum[5] += 0.433884293;
              }
            }
          }
        }
      }
    } else {
      if (sample[3] <171) {
        if (sample[4] <67) {
          if (sample[3] <151) {
            if (sample[3] <124) {
              sum[5] += -0.291629255;
            } else {
              if (sample[4] <42) {
                if (sample[4] <32) {
                  sum[5] += -0.291426986;
                } else {
                  if (sample[1] <164) {
                    if (sample[2] <143) {
                      if (sample[3] <144) {
                        sum[5] += -0.288621217;
                      } else {
                        if (sample[1] <122) {
                          sum[5] += -0.264458537;
                        } else {
                          sum[5] += -5.48990142e-09;
                        }
                      }
                    } else {
                      if (sample[1] <132) {
                        if (sample[4] <40) {
                          sum[5] += 0.290155411;
                        } else {
                          sum[5] += -0.16055046;
                        }
                      } else {
                        if (sample[1] <143) {
                          sum[5] += -0.128834352;
                        } else {
                          sum[5] += -0.283678025;
                        }
                      }
                    }
                  } else {
                    sum[5] += 0.267515898;
                  }
                }
              } else {
                if (sample[2] <123) {
                  if (sample[4] <59) {
                    sum[5] += -0.282940716;
                  } else {
                    if (sample[2] <76) {
                      sum[5] += -0.288395494;
                    } else {
                      if (sample[2] <106) {
                        if (sample[2] <100) {
                          sum[5] += -0.189752057;
                        } else {
                          sum[5] += 0.0930635706;
                        }
                      } else {
                        if (sample[3] <148) {
                          sum[5] += -0.269537926;
                        } else {
                          sum[5] += -0.0906735808;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <149) {
                    if (sample[0] <178) {
                      if (sample[2] <145) {
                        if (sample[1] <136) {
                          sum[5] += -0.188163802;
                        } else {
                          sum[5] += 0.0580110401;
                        }
                      } else {
                        if (sample[4] <48) {
                          sum[5] += 0.279999971;
                        } else {
                          sum[5] += -0.122651093;
                        }
                      }
                    } else {
                      if (sample[2] <147) {
                        if (sample[0] <180) {
                          sum[5] += 0.736842096;
                        } else {
                          sum[5] += 0.193370149;
                        }
                      } else {
                        sum[5] += -0.221951216;
                      }
                    }
                  } else {
                    if (sample[2] <171) {
                      if (sample[1] <139) {
                        if (sample[4] <48) {
                          sum[5] += -0.150063053;
                        } else {
                          sum[5] += -0.259538084;
                        }
                      } else {
                        if (sample[3] <133) {
                          sum[5] += -0.277990431;
                        } else {
                          sum[5] += -0.0301550906;
                        }
                      }
                    } else {
                      if (sample[1] <164) {
                        sum[5] += -0.289023012;
                      } else {
                        sum[5] += 0.0642201751;
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[4] <35) {
              if (sample[3] <152) {
                sum[5] += 0.288990825;
              } else {
                if (sample[4] <30) {
                  sum[5] += -0.291077435;
                } else {
                  if (sample[1] <129) {
                    sum[5] += -0.284813643;
                  } else {
                    if (sample[3] <168) {
                      if (sample[3] <158) {
                        if (sample[0] <152) {
                          sum[5] += 0.0642201751;
                        } else {
                          sum[5] += -0.200636938;
                        }
                      } else {
                        if (sample[3] <161) {
                          sum[5] += 0.734806597;
                        } else {
                          sum[5] += 0.113718398;
                        }
                      }
                    } else {
                      if (sample[0] <137) {
                        sum[5] += 0.0642201751;
                      } else {
                        sum[5] += -0.269230753;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[1] <157) {
                if (sample[2] <127) {
                  if (sample[4] <66) {
                    if (sample[0] <120) {
                      if (sample[0] <71) {
                        sum[5] += -0.288440734;
                      } else {
                        if (sample[1] <59) {
                          sum[5] += -0.0241379365;
                        } else {
                          sum[5] += -0.263654262;
                        }
                      }
                    } else {
                      if (sample[3] <154) {
                        if (sample[4] <49) {
                          sum[5] += 0.184210509;
                        } else {
                          sum[5] += -0.17355372;
                        }
                      } else {
                        if (sample[4] <36) {
                          sum[5] += 0.0642201751;
                        } else {
                          sum[5] += -0.250716329;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <94) {
                      sum[5] += -0.267402381;
                    } else {
                      if (sample[3] <157) {
                        sum[5] += 0.231404945;
                      } else {
                        if (sample[0] <99) {
                          sum[5] += 0.0813953355;
                        } else {
                          sum[5] += -0.247692302;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <57) {
                    if (sample[0] <153) {
                      if (sample[1] <119) {
                        if (sample[4] <46) {
                          sum[5] += -0.248788357;
                        } else {
                          sum[5] += -0.0561103858;
                        }
                      } else {
                        if (sample[4] <43) {
                          sum[5] += 0.0269419067;
                        } else {
                          sum[5] += 0.370378226;
                        }
                      }
                    } else {
                      if (sample[3] <169) {
                        if (sample[2] <173) {
                          sum[5] += -0.136745244;
                        } else {
                          sum[5] += -0.267616183;
                        }
                      } else {
                        if (sample[1] <150) {
                          sum[5] += -0.138339922;
                        } else {
                          sum[5] += 0.423566848;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <148) {
                      if (sample[1] <127) {
                        if (sample[4] <64) {
                          sum[5] += -0.14973262;
                        } else {
                          sum[5] += -0.25269708;
                        }
                      } else {
                        if (sample[4] <65) {
                          sum[5] += 0.435986131;
                        } else {
                          sum[5] += -0.17355372;
                        }
                      }
                    } else {
                      if (sample[3] <162) {
                        sum[5] += -0.281073332;
                      } else {
                        if (sample[3] <164) {
                          sum[5] += -0.154222772;
                        } else {
                          sum[5] += -0.26429075;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <161) {
                  sum[5] += 0.313793093;
                } else {
                  sum[5] += 1.04132223;
                }
              }
            }
          }
        } else {
          if (sample[3] <20) {
            if (sample[4] <213) {
              if (sample[2] <185) {
                if (sample[4] <173) {
                  if (sample[2] <142) {
                    if (sample[4] <116) {
                      sum[5] += -0.289840609;
                    } else {
                      if (sample[2] <122) {
                        if (sample[1] <83) {
                          sum[5] += -0.287863523;
                        } else {
                          sum[5] += -0.270994633;
                        }
                      } else {
                        if (sample[0] <49) {
                          sum[5] += -0.119167723;
                        } else {
                          sum[5] += -0.215337053;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <124) {
                      if (sample[1] <120) {
                        if (sample[2] <144) {
                          sum[5] += 0.224528283;
                        } else {
                          sum[5] += -0.190909088;
                        }
                      } else {
                        if (sample[0] <71) {
                          sum[5] += 0.636363626;
                        } else {
                          sum[5] += 0.0670926422;
                        }
                      }
                    } else {
                      if (sample[4] <130) {
                        if (sample[0] <102) {
                          sum[5] += -0.22045809;
                        } else {
                          sum[5] += -0.289631099;
                        }
                      } else {
                        if (sample[1] <136) {
                          sum[5] += -0.16055046;
                        } else {
                          sum[5] += 0.288990825;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <98) {
                    sum[5] += -0.282801151;
                  } else {
                    if (sample[1] <75) {
                      if (sample[1] <74) {
                        if (sample[1] <73) {
                          sum[5] += -0.0561497398;
                        } else {
                          sum[5] += 0.0769230649;
                        }
                      } else {
                        if (sample[0] <28) {
                          sum[5] += 0.5090909;
                        } else {
                          sum[5] += -7.27731075e-09;
                        }
                      }
                    } else {
                      if (sample[1] <107) {
                        if (sample[2] <130) {
                          sum[5] += -0.0939000323;
                        } else {
                          sum[5] += -0.221377105;
                        }
                      } else {
                        if (sample[4] <188) {
                          sum[5] += -0.0241379365;
                        } else {
                          sum[5] += 0.738532066;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[0] <91) {
                  sum[5] += 1.10526311;
                } else {
                  sum[5] += -0.0241379365;
                }
              }
            } else {
              if (sample[2] <84) {
                if (sample[2] <78) {
                  if (sample[2] <70) {
                    sum[5] += -0.290993184;
                  } else {
                    if (sample[1] <45) {
                      if (sample[2] <71) {
                        sum[5] += -0.188417614;
                      } else {
                        sum[5] += -0.101018682;
                      }
                    } else {
                      if (sample[0] <1) {
                        if (sample[2] <72) {
                          sum[5] += -0.27844587;
                        } else {
                          sum[5] += -0.217178971;
                        }
                      } else {
                        sum[5] += -0.284408331;
                      }
                    }
                  }
                } else {
                  if (sample[0] <1) {
                    if (sample[1] <50) {
                      if (sample[2] <79) {
                        sum[5] += -0.0415019803;
                      } else {
                        sum[5] += -0.17355372;
                      }
                    } else {
                      if (sample[2] <82) {
                        if (sample[1] <52) {
                          sum[5] += 0.12589927;
                        } else {
                          sum[5] += -6.72955647e-09;
                        }
                      } else {
                        if (sample[1] <52) {
                          sum[5] += -0.0773480684;
                        } else {
                          sum[5] += 0.0303292796;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <83) {
                      sum[5] += -0.276131362;
                    } else {
                      if (sample[0] <8) {
                        sum[5] += 0.0642201751;
                      } else {
                        if (sample[0] <13) {
                          sum[5] += -0.225806445;
                        } else {
                          sum[5] += -0.0906735808;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[2] <123) {
                  if (sample[4] <228) {
                    if (sample[0] <16) {
                      if (sample[1] <68) {
                        if (sample[0] <11) {
                          sum[5] += -0.0152838491;
                        } else {
                          sum[5] += -0.213462248;
                        }
                      } else {
                        if (sample[4] <224) {
                          sum[5] += 0.22580643;
                        } else {
                          sum[5] += -0.217616573;
                        }
                      }
                    } else {
                      if (sample[1] <74) {
                        if (sample[2] <99) {
                          sum[5] += 0.313793093;
                        } else {
                          sum[5] += -0.062130183;
                        }
                      } else {
                        if (sample[1] <80) {
                          sum[5] += 0.735668778;
                        } else {
                          sum[5] += 0.0642201751;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <109) {
                      if (sample[0] <1) {
                        if (sample[2] <102) {
                          sum[5] += 0.295894563;
                        } else {
                          sum[5] += 0.544315338;
                        }
                      } else {
                        if (sample[4] <237) {
                          sum[5] += 0.233090505;
                        } else {
                          sum[5] += 1.25560534;
                        }
                      }
                    } else {
                      if (sample[0] <9) {
                        sum[5] += 1.50096798;
                      } else {
                        if (sample[4] <231) {
                          sum[5] += -5.48990142e-09;
                        } else {
                          sum[5] += 0.482758611;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <10) {
                    if (sample[2] <138) {
                      if (sample[1] <87) {
                        if (sample[2] <129) {
                          sum[5] += -0.25207755;
                        } else {
                          sum[5] += -0.113590263;
                        }
                      } else {
                        if (sample[0] <3) {
                          sum[5] += 0.184210509;
                        } else {
                          sum[5] += -0.0906735808;
                        }
                      }
                    } else {
                      if (sample[0] <3) {
                        sum[5] += -0.285859406;
                      } else {
                        if (sample[1] <91) {
                          sum[5] += -0.0241379365;
                        } else {
                          sum[5] += -0.193954661;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <128) {
                      sum[5] += -0.229257643;
                    } else {
                      if (sample[1] <92) {
                        sum[5] += 0.734146297;
                      } else {
                        if (sample[1] <101) {
                          sum[5] += 0.0828402266;
                        } else {
                          sum[5] += -0.200636938;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[3] <163) {
              if (sample[3] <22) {
                if (sample[4] <124) {
                  sum[5] += -0.289958894;
                } else {
                  if (sample[2] <159) {
                    if (sample[2] <96) {
                      if (sample[2] <78) {
                        if (sample[2] <71) {
                          sum[5] += -0.291432381;
                        } else {
                          sum[5] += -0.284427583;
                        }
                      } else {
                        if (sample[4] <237) {
                          sum[5] += -0.28502804;
                        } else {
                          sum[5] += -0.18263188;
                        }
                      }
                    } else {
                      if (sample[4] <201) {
                        if (sample[2] <135) {
                          sum[5] += -0.26797837;
                        } else {
                          sum[5] += -0.124394186;
                        }
                      } else {
                        if (sample[1] <83) {
                          sum[5] += 0.0766270682;
                        } else {
                          sum[5] += -0.132043675;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <131) {
                      sum[5] += 1.26855886;
                    } else {
                      if (sample[2] <183) {
                        if (sample[4] <152) {
                          sum[5] += -0.16008316;
                        } else {
                          sum[5] += 0.467509001;
                        }
                      } else {
                        if (sample[0] <67) {
                          sum[5] += -0.0241379365;
                        } else {
                          sum[5] += 1.21219504;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[5] <59) {
                  sum[5] += -0.2916269;
                } else {
                  if (sample[0] <11) {
                    if (sample[2] <71) {
                      if (sample[1] <59) {
                        sum[5] += -0.290247321;
                      } else {
                        if (sample[2] <52) {
                          sum[5] += -0.291266024;
                        } else {
                          sum[5] += -0.281447023;
                        }
                      }
                    } else {
                      if (sample[3] <24) {
                        if (sample[2] <96) {
                          sum[5] += -0.266452044;
                        } else {
                          sum[5] += 0.0226171147;
                        }
                      } else {
                        if (sample[1] <64) {
                          sum[5] += -0.274483234;
                        } else {
                          sum[5] += -0.287482649;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <116) {
                      if (sample[0] <98) {
                        if (sample[2] <53) {
                          sum[5] += -0.287551343;
                        } else {
                          sum[5] += -0.290783376;
                        }
                      } else {
                        sum[5] += -0.291441619;
                      }
                    } else {
                      if (sample[2] <107) {
                        if (sample[2] <94) {
                          sum[5] += -0.276611745;
                        } else {
                          sum[5] += -0.110805809;
                        }
                      } else {
                        if (sample[3] <134) {
                          sum[5] += -0.245720118;
                        } else {
                          sum[5] += -0.290273279;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[2] <153) {
                if (sample[4] <104) {
                  if (sample[1] <105) {
                    if (sample[2] <106) {
                      if (sample[2] <84) {
                        sum[5] += -0.289170295;
                      } else {
                        if (sample[1] <60) {
                          sum[5] += -0.0304347891;
                        } else {
                          sum[5] += -0.239054292;
                        }
                      }
                    } else {
                      if (sample[0] <125) {
                        if (sample[4] <70) {
                          sum[5] += -0.245531186;
                        } else {
                          sum[5] += -0.282745242;
                        }
                      } else {
                        if (sample[4] <88) {
                          sum[5] += -0.25179857;
                        } else {
                          sum[5] += -0.0290456489;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <145) {
                      sum[5] += 0.184210509;
                    } else {
                      if (sample[0] <125) {
                        if (sample[4] <72) {
                          sum[5] += -0.229257643;
                        } else {
                          sum[5] += 0.144827574;
                        }
                      } else {
                        if (sample[2] <150) {
                          sum[5] += -0.177503243;
                        } else {
                          sum[5] += -0.282145232;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[1] <52) {
                    sum[5] += -0.288621336;
                  } else {
                    if (sample[4] <105) {
                      if (sample[3] <169) {
                        sum[5] += 0.0362694226;
                      } else {
                        sum[5] += -0.212707177;
                      }
                    } else {
                      if (sample[1] <60) {
                        sum[5] += 1.30569947;
                      } else {
                        if (sample[0] <83) {
                          sum[5] += -0.0773480684;
                        } else {
                          sum[5] += 1.12903225;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[4] <91) {
                  if (sample[3] <168) {
                    if (sample[4] <89) {
                      if (sample[0] <132) {
                        if (sample[4] <73) {
                          sum[5] += -0.244186044;
                        } else {
                          sum[5] += 0.0740479454;
                        }
                      } else {
                        if (sample[4] <76) {
                          sum[5] += -0.166996285;
                        } else {
                          sum[5] += -0.280670881;
                        }
                      }
                    } else {
                      if (sample[3] <166) {
                        if (sample[1] <106) {
                          sum[5] += 0.636363626;
                        } else {
                          sum[5] += 0.0828402266;
                        }
                      } else {
                        sum[5] += -0.0445859917;
                      }
                    }
                  } else {
                    if (sample[2] <188) {
                      if (sample[4] <73) {
                        if (sample[1] <123) {
                          sum[5] += -0.24487333;
                        } else {
                          sum[5] += 0.0726140961;
                        }
                      } else {
                        if (sample[0] <143) {
                          sum[5] += 0.207157582;
                        } else {
                          sum[5] += -0.247692302;
                        }
                      }
                    } else {
                      sum[5] += 1.04777062;
                    }
                  }
                } else {
                  if (sample[3] <166) {
                    if (sample[0] <134) {
                      sum[5] += 0.921052575;
                    } else {
                      if (sample[0] <142) {
                        sum[5] += 0.0642201751;
                      } else {
                        sum[5] += -0.184210524;
                      }
                    }
                  } else {
                    if (sample[2] <154) {
                      sum[5] += -0.16055046;
                    } else {
                      if (sample[4] <116) {
                        sum[5] += 1.61505497;
                      } else {
                        sum[5] += 0.0642201751;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if (sample[4] <105) {
          if (sample[4] <43) {
            if (sample[4] <36) {
              sum[5] += -0.290714413;
            } else {
              if (sample[0] <145) {
                if (sample[0] <120) {
                  if (sample[2] <127) {
                    sum[5] += -0.288175374;
                  } else {
                    sum[5] += -0.251668453;
                  }
                } else {
                  if (sample[3] <174) {
                    if (sample[0] <122) {
                      sum[5] += -0.0445859917;
                    } else {
                      if (sample[4] <38) {
                        sum[5] += -0.16055046;
                      } else {
                        if (sample[4] <39) {
                          sum[5] += 0.433884293;
                        } else {
                          sum[5] += 0.0642201751;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <125) {
                      if (sample[2] <145) {
                        if (sample[3] <176) {
                          sum[5] += -5.48990142e-09;
                        } else {
                          sum[5] += -0.256723702;
                        }
                      } else {
                        sum[5] += 0.231404945;
                      }
                    } else {
                      sum[5] += -0.276414067;
                    }
                  }
                }
              } else {
                if (sample[1] <153) {
                  if (sample[0] <154) {
                    if (sample[4] <40) {
                      if (sample[3] <177) {
                        sum[5] += 0.372781038;
                      } else {
                        sum[5] += -0.0445859917;
                      }
                    } else {
                      sum[5] += -0.184210524;
                    }
                  } else {
                    sum[5] += 0.838842928;
                  }
                } else {
                  sum[5] += -0.246006384;
                }
              }
            }
          } else {
            if (sample[2] <158) {
              if (sample[0] <117) {
                if (sample[2] <141) {
                  if (sample[4] <77) {
                    if (sample[2] <140) {
                      if (sample[4] <55) {
                        if (sample[2] <137) {
                          sum[5] += -0.27444002;
                        } else {
                          sum[5] += 0.231404945;
                        }
                      } else {
                        if (sample[2] <120) {
                          sum[5] += -0.248526186;
                        } else {
                          sum[5] += -0.144982308;
                        }
                      }
                    } else {
                      if (sample[1] <103) {
                        if (sample[0] <110) {
                          sum[5] += 0.0642201751;
                        } else {
                          sum[5] += -0.193103448;
                        }
                      } else {
                        if (sample[1] <108) {
                          sum[5] += 0.807692289;
                        } else {
                          sum[5] += 0.0289256144;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <107) {
                      if (sample[1] <68) {
                        if (sample[2] <92) {
                          sum[5] += -0.288629115;
                        } else {
                          sum[5] += -0.219065741;
                        }
                      } else {
                        if (sample[4] <80) {
                          sum[5] += -0.253351212;
                        } else {
                          sum[5] += 0.091448918;
                        }
                      }
                    } else {
                      if (sample[1] <72) {
                        if (sample[4] <88) {
                          sum[5] += 0.0289256144;
                        } else {
                          sum[5] += -0.291242808;
                        }
                      } else {
                        if (sample[4] <102) {
                          sum[5] += -0.28145504;
                        } else {
                          sum[5] += -0.0304347891;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <99) {
                    if (sample[3] <178) {
                      if (sample[4] <73) {
                        if (sample[1] <109) {
                          sum[5] += 0.209864587;
                        } else {
                          sum[5] += -0.202078521;
                        }
                      } else {
                        if (sample[4] <98) {
                          sum[5] += -0.251460314;
                        } else {
                          sum[5] += 0.091448918;
                        }
                      }
                    } else {
                      if (sample[4] <93) {
                        if (sample[0] <110) {
                          sum[5] += 0.0927152187;
                        } else {
                          sum[5] += -0.232460245;
                        }
                      } else {
                        if (sample[1] <90) {
                          sum[5] += 0.288990825;
                        } else {
                          sum[5] += 1.27624309;
                        }
                      }
                    }
                  } else {
                    sum[5] += 1.36798334;
                  }
                }
              } else {
                if (sample[2] <150) {
                  if (sample[0] <121) {
                    if (sample[2] <143) {
                      sum[5] += -0.247692302;
                    } else {
                      if (sample[2] <147) {
                        if (sample[3] <175) {
                          sum[5] += 0.0170731638;
                        } else {
                          sum[5] += 0.513761461;
                        }
                      } else {
                        if (sample[0] <118) {
                          sum[5] += -0.11290323;
                        } else {
                          sum[5] += -0.237735853;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <173) {
                      if (sample[4] <55) {
                        sum[5] += -0.217616573;
                      } else {
                        if (sample[4] <58) {
                          sum[5] += 0.433884293;
                        } else {
                          sum[5] += 0.0170731638;
                        }
                      }
                    } else {
                      if (sample[2] <142) {
                        sum[5] += 0.0642201751;
                      } else {
                        if (sample[3] <174) {
                          sum[5] += 0.46408838;
                        } else {
                          sum[5] += 1.09763312;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <121) {
                    if (sample[1] <117) {
                      if (sample[3] <173) {
                        sum[5] += 0.482758611;
                      } else {
                        if (sample[0] <119) {
                          sum[5] += 0.0872576088;
                        } else {
                          sum[5] += -0.167731628;
                        }
                      }
                    } else {
                      if (sample[4] <61) {
                        sum[5] += -0.16055046;
                      } else {
                        sum[5] += 1.04132223;
                      }
                    }
                  } else {
                    if (sample[4] <67) {
                      if (sample[1] <126) {
                        if (sample[1] <113) {
                          sum[5] += -5.48990142e-09;
                        } else {
                          sum[5] += -0.218252152;
                        }
                      } else {
                        if (sample[0] <130) {
                          sum[5] += -0.207100585;
                        } else {
                          sum[5] += 0.144827574;
                        }
                      }
                    } else {
                      if (sample[0] <123) {
                        sum[5] += -0.200636938;
                      } else {
                        if (sample[2] <156) {
                          sum[5] += 1.04132223;
                        } else {
                          sum[5] += -0.16055046;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[4] <90) {
                if (sample[2] <164) {
                  if (sample[1] <106) {
                    sum[5] += 1.24260354;
                  } else {
                    if (sample[4] <83) {
                      if (sample[4] <81) {
                        if (sample[0] <120) {
                          sum[5] += -0.229257643;
                        } else {
                          sum[5] += 0.19923532;
                        }
                      } else {
                        if (sample[4] <82) {
                          sum[5] += 0.735668778;
                        } else {
                          sum[5] += 0.144827574;
                        }
                      }
                    } else {
                      if (sample[0] <116) {
                        sum[5] += 0.227810636;
                      } else {
                        if (sample[2] <163) {
                          sum[5] += -0.256723702;
                        } else {
                          sum[5] += 0.0917030498;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <180) {
                    if (sample[2] <170) {
                      if (sample[4] <67) {
                        if (sample[2] <166) {
                          sum[5] += 0.495121926;
                        } else {
                          sum[5] += -0.0813953504;
                        }
                      } else {
                        if (sample[1] <112) {
                          sum[5] += -5.48990142e-09;
                        } else {
                          sum[5] += 0.696050704;
                        }
                      }
                    } else {
                      if (sample[1] <136) {
                        if (sample[3] <175) {
                          sum[5] += 0.815533936;
                        } else {
                          sum[5] += 1.39097297;
                        }
                      } else {
                        if (sample[2] <176) {
                          sum[5] += 0.162790686;
                        } else {
                          sum[5] += 0.676404476;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <188) {
                      if (sample[1] <123) {
                        if (sample[0] <133) {
                          sum[5] += 0.963302732;
                        } else {
                          sum[5] += 0.231404945;
                        }
                      } else {
                        if (sample[1] <145) {
                          sum[5] += -0.157688543;
                        } else {
                          sum[5] += 0.342298269;
                        }
                      }
                    } else {
                      if (sample[1] <152) {
                        if (sample[2] <189) {
                          sum[5] += 0.313793093;
                        } else {
                          sum[5] += 1.04030216;
                        }
                      } else {
                        if (sample[0] <163) {
                          sum[5] += -0.16055046;
                        } else {
                          sum[5] += 0.0642201751;
                        }
                      }
                    }
                  }
                }
              } else {
                sum[5] += 1.68529046;
              }
            }
          }
        } else {
          if (sample[1] <78) {
            if (sample[2] <95) {
              sum[5] += -0.287697852;
            } else {
              if (sample[1] <61) {
                if (sample[3] <179) {
                  if (sample[2] <106) {
                    sum[5] += 1.24150932;
                  } else {
                    sum[5] += 0.288990825;
                  }
                } else {
                  sum[5] += 0.372781038;
                }
              } else {
                if (sample[0] <85) {
                  if (sample[2] <126) {
                    if (sample[0] <76) {
                      if (sample[4] <123) {
                        if (sample[3] <178) {
                          sum[5] += -0.0969230831;
                        } else {
                          sum[5] += -0.229257643;
                        }
                      } else {
                        sum[5] += 0.0642201751;
                      }
                    } else {
                      if (sample[4] <106) {
                        sum[5] += -0.193103448;
                      } else {
                        sum[5] += 0.6517241;
                      }
                    }
                  } else {
                    sum[5] += -0.258369088;
                  }
                } else {
                  if (sample[3] <176) {
                    if (sample[2] <133) {
                      sum[5] += 0.433884293;
                    } else {
                      sum[5] += -0.200636938;
                    }
                  } else {
                    sum[5] += 0.963302732;
                  }
                }
              }
            }
          } else {
            sum[5] += 1.69061255;
          }
        }
      }
    }
  }


  if (sample[2] <203) {
    if (sample[4] <97) {
      if (sample[4] <85) {
        if (sample[4] <68) {
          if (sample[4] <44) {
            sum[6] += -0.291578621;
          } else {
            if (sample[1] <159) {
              if (sample[1] <147) {
                if (sample[1] <133) {
                  sum[6] += -0.291460723;
                } else {
                  if (sample[0] <109) {
                    if (sample[1] <136) {
                      if (sample[0] <100) {
                        if (sample[2] <127) {
                          sum[6] += -0.258660495;
                        } else {
                          sum[6] += 0.224528283;
                        }
                      } else {
                        sum[6] += -0.272763491;
                      }
                    } else {
                      if (sample[3] <41) {
                        if (sample[2] <139) {
                          sum[6] += -0.10038241;
                        } else {
                          sum[6] += -0.238347098;
                        }
                      } else {
                        if (sample[0] <102) {
                          sum[6] += 0.0170731638;
                        } else {
                          sum[6] += -0.276812941;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <99) {
                      sum[6] += 0.184210509;
                    } else {
                      if (sample[2] <118) {
                        if (sample[1] <146) {
                          sum[6] += -0.277808547;
                        } else {
                          sum[6] += -0.161565483;
                        }
                      } else {
                        if (sample[0] <114) {
                          sum[6] += -0.283420682;
                        } else {
                          sum[6] += -0.29059425;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[0] <124) {
                  if (sample[1] <157) {
                    if (sample[0] <113) {
                      if (sample[3] <37) {
                        if (sample[5] <149) {
                          sum[6] += 0.0121107185;
                        } else {
                          sum[6] += 0.379061341;
                        }
                      } else {
                        if (sample[0] <112) {
                          sum[6] += -0.227121457;
                        } else {
                          sum[6] += -0.0793950856;
                        }
                      }
                    } else {
                      if (sample[1] <151) {
                        if (sample[2] <120) {
                          sum[6] += -0.0942472517;
                        } else {
                          sum[6] += -0.234403908;
                        }
                      } else {
                        if (sample[2] <149) {
                          sum[6] += -0.222060159;
                        } else {
                          sum[6] += -0.118726447;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <165) {
                      if (sample[2] <148) {
                        if (sample[2] <126) {
                          sum[6] += -0.062130183;
                        } else {
                          sum[6] += -0.200860828;
                        }
                      } else {
                        if (sample[2] <153) {
                          sum[6] += 0.238035247;
                        } else {
                          sum[6] += -0.0751677901;
                        }
                      }
                    } else {
                      sum[6] += 0.513761461;
                    }
                  }
                } else {
                  if (sample[5] <156) {
                    if (sample[0] <136) {
                      if (sample[3] <28) {
                        sum[6] += -0.272381216;
                      } else {
                        if (sample[2] <151) {
                          sum[6] += -0.203315243;
                        } else {
                          sum[6] += -0.0880312249;
                        }
                      }
                    } else {
                      sum[6] += -0.274131149;
                    }
                  } else {
                    if (sample[0] <128) {
                      if (sample[3] <24) {
                        sum[6] += -0.286276579;
                      } else {
                        if (sample[2] <159) {
                          sum[6] += -0.22318466;
                        } else {
                          sum[6] += 0.0504994355;
                        }
                      }
                    } else {
                      if (sample[3] <178) {
                        if (sample[3] <7) {
                          sum[6] += -0.233574748;
                        } else {
                          sum[6] += -0.289194077;
                        }
                      } else {
                        if (sample[2] <187) {
                          sum[6] += 0.0642201751;
                        } else {
                          sum[6] += -0.184210524;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[3] <55) {
                if (sample[1] <192) {
                  if (sample[3] <27) {
                    if (sample[3] <23) {
                      if (sample[4] <62) {
                        if (sample[4] <53) {
                          sum[6] += -0.289602369;
                        } else {
                          sum[6] += -0.272383839;
                        }
                      } else {
                        if (sample[3] <17) {
                          sum[6] += 0.375609726;
                        } else {
                          sum[6] += -0.24264589;
                        }
                      }
                    } else {
                      if (sample[4] <57) {
                        if (sample[4] <52) {
                          sum[6] += -0.264221489;
                        } else {
                          sum[6] += -0.188905552;
                        }
                      } else {
                        if (sample[2] <183) {
                          sum[6] += -0.146609575;
                        } else {
                          sum[6] += 0.0533079356;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <55) {
                      if (sample[1] <182) {
                        if (sample[4] <53) {
                          sum[6] += -0.195624962;
                        } else {
                          sum[6] += -0.0851944834;
                        }
                      } else {
                        if (sample[4] <49) {
                          sum[6] += -0.135093957;
                        } else {
                          sum[6] += 0.0798045471;
                        }
                      }
                    } else {
                      if (sample[1] <187) {
                        if (sample[1] <181) {
                          sum[6] += 0.00585317146;
                        } else {
                          sum[6] += 0.283866704;
                        }
                      } else {
                        if (sample[2] <170) {
                          sum[6] += -0.0906735808;
                        } else {
                          sum[6] += 1.10375142;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <49) {
                    if (sample[1] <197) {
                      if (sample[1] <194) {
                        sum[6] += -0.25207755;
                      } else {
                        sum[6] += 0.111464955;
                      }
                    } else {
                      if (sample[2] <198) {
                        sum[6] += 0.184210509;
                      } else {
                        sum[6] += 0.921052575;
                      }
                    }
                  } else {
                    if (sample[3] <28) {
                      sum[6] += -0.16055046;
                    } else {
                      if (sample[4] <53) {
                        if (sample[0] <156) {
                          sum[6] += 0.0642201751;
                        } else {
                          sum[6] += 1.08921158;
                        }
                      } else {
                        sum[6] += 1.592417;
                      }
                    }
                  }
                }
              } else {
                sum[6] += -0.290912479;
              }
            }
          }
        } else {
          if (sample[1] <169) {
            if (sample[1] <148) {
              if (sample[1] <133) {
                if (sample[1] <114) {
                  sum[6] += -0.291437745;
                } else {
                  if (sample[0] <90) {
                    if (sample[3] <26) {
                      if (sample[1] <124) {
                        sum[6] += -0.288605303;
                      } else {
                        sum[6] += -5.48990142e-09;
                      }
                    } else {
                      if (sample[2] <121) {
                        if (sample[2] <116) {
                          sum[6] += -0.267154366;
                        } else {
                          sum[6] += -0.217691973;
                        }
                      } else {
                        if (sample[1] <129) {
                          sum[6] += -0.169472784;
                        } else {
                          sum[6] += 0.131321356;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <14) {
                      if (sample[1] <126) {
                        if (sample[2] <158) {
                          sum[6] += -0.276395887;
                        } else {
                          sum[6] += -0.190400004;
                        }
                      } else {
                        if (sample[4] <79) {
                          sum[6] += -0.171723694;
                        } else {
                          sum[6] += 0.305676848;
                        }
                      }
                    } else {
                      if (sample[0] <110) {
                        if (sample[3] <24) {
                          sum[6] += -0.290171802;
                        } else {
                          sum[6] += -0.254735529;
                        }
                      } else {
                        sum[6] += -0.291264623;
                      }
                    }
                  }
                }
              } else {
                if (sample[0] <102) {
                  if (sample[2] <128) {
                    if (sample[1] <145) {
                      sum[6] += -0.271273226;
                    } else {
                      if (sample[2] <121) {
                        if (sample[2] <111) {
                          sum[6] += -0.16055046;
                        } else {
                          sum[6] += 0.193370149;
                        }
                      } else {
                        sum[6] += -0.212707177;
                      }
                    }
                  } else {
                    if (sample[0] <95) {
                      if (sample[3] <35) {
                        if (sample[5] <139) {
                          sum[6] += 0.700844347;
                        } else {
                          sum[6] += -0.0290456489;
                        }
                      } else {
                        sum[6] += -0.217616573;
                      }
                    } else {
                      if (sample[3] <25) {
                        if (sample[4] <75) {
                          sum[6] += 0.0289256144;
                        } else {
                          sum[6] += -0.272319198;
                        }
                      } else {
                        if (sample[5] <136) {
                          sum[6] += 0.230769217;
                        } else {
                          sum[6] += 0.0100556565;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <112) {
                    if (sample[3] <24) {
                      if (sample[1] <147) {
                        if (sample[3] <19) {
                          sum[6] += -0.224385858;
                        } else {
                          sum[6] += -0.279821485;
                        }
                      } else {
                        if (sample[2] <159) {
                          sum[6] += 0.288990825;
                        } else {
                          sum[6] += -0.232365146;
                        }
                      }
                    } else {
                      if (sample[2] <143) {
                        if (sample[1] <143) {
                          sum[6] += -0.260545909;
                        } else {
                          sum[6] += -0.183617115;
                        }
                      } else {
                        if (sample[3] <27) {
                          sum[6] += -0.121591337;
                        } else {
                          sum[6] += 0.254966855;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <100) {
                      if (sample[2] <179) {
                        if (sample[0] <162) {
                          sum[6] += -0.273518205;
                        } else {
                          sum[6] += -0.11290323;
                        }
                      } else {
                        if (sample[0] <127) {
                          sum[6] += 0.313793093;
                        } else {
                          sum[6] += -0.237735853;
                        }
                      }
                    } else {
                      sum[6] += -0.291504234;
                    }
                  }
                }
              }
            } else {
              if (sample[0] <119) {
                if (sample[3] <24) {
                  if (sample[1] <156) {
                    if (sample[1] <154) {
                      sum[6] += -0.267554224;
                    } else {
                      if (sample[0] <115) {
                        sum[6] += 0.184210509;
                      } else {
                        sum[6] += -0.260393858;
                      }
                    }
                  } else {
                    if (sample[0] <118) {
                      if (sample[4] <82) {
                        if (sample[2] <169) {
                          sum[6] += 0.0642201751;
                        } else {
                          sum[6] += 0.513761461;
                        }
                      } else {
                        if (sample[4] <83) {
                          sum[6] += -0.16055046;
                        } else {
                          sum[6] += 0.111464955;
                        }
                      }
                    } else {
                      sum[6] += -0.193103448;
                    }
                  }
                } else {
                  if (sample[2] <147) {
                    if (sample[4] <79) {
                      if (sample[2] <138) {
                        if (sample[0] <109) {
                          sum[6] += -0.0921835229;
                        } else {
                          sum[6] += -0.221336752;
                        }
                      } else {
                        if (sample[3] <42) {
                          sum[6] += 0.0763944909;
                        } else {
                          sum[6] += -0.145496532;
                        }
                      }
                    } else {
                      if (sample[0] <109) {
                        if (sample[0] <105) {
                          sum[6] += 0.0682670549;
                        } else {
                          sum[6] += 0.412478298;
                        }
                      } else {
                        if (sample[2] <140) {
                          sum[6] += -0.212981746;
                        } else {
                          sum[6] += 0.0968858004;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <78) {
                      if (sample[3] <37) {
                        if (sample[2] <151) {
                          sum[6] += -0.0642594919;
                        } else {
                          sum[6] += 0.197709903;
                        }
                      } else {
                        if (sample[2] <149) {
                          sum[6] += 0.0828402266;
                        } else {
                          sum[6] += 0.830039501;
                        }
                      }
                    } else {
                      if (sample[3] <25) {
                        if (sample[4] <82) {
                          sum[6] += 0.0813953355;
                        } else {
                          sum[6] += -0.130705401;
                        }
                      } else {
                        if (sample[1] <156) {
                          sum[6] += 0.652880728;
                        } else {
                          sum[6] += 0.43794623;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <77) {
                  if (sample[2] <183) {
                    if (sample[3] <23) {
                      if (sample[2] <181) {
                        if (sample[0] <129) {
                          sum[6] += -0.275945276;
                        } else {
                          sum[6] += -0.15384616;
                        }
                      } else {
                        if (sample[3] <20) {
                          sum[6] += 0.662721872;
                        } else {
                          sum[6] += -0.184210524;
                        }
                      }
                    } else {
                      if (sample[4] <71) {
                        if (sample[1] <168) {
                          sum[6] += -0.203738764;
                        } else {
                          sum[6] += 0.0538461432;
                        }
                      } else {
                        if (sample[0] <130) {
                          sum[6] += 0.0640303865;
                        } else {
                          sum[6] += -0.19414483;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <20) {
                      if (sample[1] <157) {
                        if (sample[2] <188) {
                          sum[6] += 0.423566848;
                        } else {
                          sum[6] += -0.217616573;
                        }
                      } else {
                        if (sample[3] <14) {
                          sum[6] += 0.288990825;
                        } else {
                          sum[6] += 1.05813944;
                        }
                      }
                    } else {
                      if (sample[4] <76) {
                        sum[6] += -0.225806445;
                      } else {
                        if (sample[0] <126) {
                          sum[6] += 0.0642201751;
                        } else {
                          sum[6] += 0.313793093;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <131) {
                    sum[6] += 0.0642201751;
                  } else {
                    sum[6] += -0.288906246;
                  }
                }
              }
            }
          } else {
            if (sample[3] <54) {
              if (sample[1] <180) {
                if (sample[4] <77) {
                  if (sample[2] <175) {
                    if (sample[2] <159) {
                      if (sample[0] <129) {
                        if (sample[2] <150) {
                          sum[6] += -0.121856868;
                        } else {
                          sum[6] += 0.162399977;
                        }
                      } else {
                        sum[6] += 0.482758611;
                      }
                    } else {
                      if (sample[2] <166) {
                        if (sample[4] <76) {
                          sum[6] += 0.940298438;
                        } else {
                          sum[6] += 0.184210509;
                        }
                      } else {
                        if (sample[2] <167) {
                          sum[6] += -0.184210524;
                        } else {
                          sum[6] += 0.422110528;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <172) {
                      if (sample[1] <170) {
                        if (sample[0] <132) {
                          sum[6] += 0.0968858004;
                        } else {
                          sum[6] += -0.145283014;
                        }
                      } else {
                        sum[6] += -0.275590539;
                      }
                    } else {
                      if (sample[3] <29) {
                        if (sample[1] <178) {
                          sum[6] += 0.139324471;
                        } else {
                          sum[6] += 0.564516127;
                        }
                      } else {
                        if (sample[2] <178) {
                          sum[6] += 0.114243314;
                        } else {
                          sum[6] += -0.246006384;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <43) {
                    if (sample[1] <173) {
                      if (sample[5] <170) {
                        sum[6] += 1.08921158;
                      } else {
                        if (sample[3] <25) {
                          sum[6] += 0.0813953355;
                        } else {
                          sum[6] += 0.394416213;
                        }
                      }
                    } else {
                      if (sample[2] <180) {
                        if (sample[0] <119) {
                          sum[6] += 0.883076847;
                        } else {
                          sum[6] += 0.489852995;
                        }
                      } else {
                        if (sample[0] <131) {
                          sum[6] += 1.16460168;
                        } else {
                          sum[6] += 0.231404945;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <150) {
                      if (sample[2] <141) {
                        if (sample[4] <82) {
                          sum[6] += -0.217616573;
                        } else {
                          sum[6] += 0.313793093;
                        }
                      } else {
                        if (sample[1] <176) {
                          sum[6] += 0.517751455;
                        } else {
                          sum[6] += 0.144827574;
                        }
                      }
                    } else {
                      sum[6] += -0.16055046;
                    }
                  }
                }
              } else {
                if (sample[1] <185) {
                  if (sample[0] <138) {
                    if (sample[4] <71) {
                      if (sample[2] <171) {
                        if (sample[1] <182) {
                          sum[6] += 0.0642201751;
                        } else {
                          sum[6] += 0.231404945;
                        }
                      } else {
                        sum[6] += 0.765927911;
                      }
                    } else {
                      if (sample[0] <134) {
                        if (sample[3] <42) {
                          sum[6] += 1.3664223;
                        } else {
                          sum[6] += 0.855163693;
                        }
                      } else {
                        sum[6] += 0.564516127;
                      }
                    }
                  } else {
                    if (sample[4] <70) {
                      sum[6] += -0.193103448;
                    } else {
                      if (sample[0] <141) {
                        sum[6] += -5.48990142e-09;
                      } else {
                        sum[6] += 0.0642201751;
                      }
                    }
                  }
                } else {
                  if (sample[3] <25) {
                    sum[6] += 0.184210509;
                  } else {
                    sum[6] += 1.69251728;
                  }
                }
              }
            } else {
              if (sample[3] <60) {
                if (sample[1] <181) {
                  if (sample[1] <179) {
                    if (sample[4] <78) {
                      if (sample[4] <75) {
                        sum[6] += 0.144827574;
                      } else {
                        sum[6] += -0.16055046;
                      }
                    } else {
                      if (sample[0] <120) {
                        sum[6] += 0.0642201751;
                      } else {
                        sum[6] += 0.433884293;
                      }
                    }
                  } else {
                    sum[6] += -0.16055046;
                  }
                } else {
                  sum[6] += 0.738532066;
                }
              } else {
                if (sample[0] <133) {
                  if (sample[4] <81) {
                    if (sample[1] <178) {
                      sum[6] += -0.250716329;
                    } else {
                      sum[6] += -0.0241379365;
                    }
                  } else {
                    if (sample[0] <128) {
                      sum[6] += -0.184210524;
                    } else {
                      sum[6] += 0.513761461;
                    }
                  }
                } else {
                  sum[6] += -0.291156054;
                }
              }
            }
          }
        }
      } else {
        if (sample[1] <161) {
          if (sample[1] <155) {
            if (sample[1] <128) {
              if (sample[1] <111) {
                sum[6] += -0.291428804;
              } else {
                if (sample[3] <91) {
                  if (sample[3] <24) {
                    if (sample[2] <154) {
                      if (sample[1] <122) {
                        sum[6] += -0.286266774;
                      } else {
                        if (sample[3] <21) {
                          sum[6] += -0.214285716;
                        } else {
                          sum[6] += -0.273242384;
                        }
                      }
                    } else {
                      if (sample[2] <162) {
                        if (sample[2] <160) {
                          sum[6] += -0.0638945252;
                        } else {
                          sum[6] += 0.662721872;
                        }
                      } else {
                        if (sample[1] <127) {
                          sum[6] += -0.280333072;
                        } else {
                          sum[6] += 0.0642201751;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <123) {
                      if (sample[2] <113) {
                        if (sample[3] <89) {
                          sum[6] += -0.269018143;
                        } else {
                          sum[6] += -0.0987306088;
                        }
                      } else {
                        if (sample[0] <77) {
                          sum[6] += -0.121139899;
                        } else {
                          sum[6] += -0.24166289;
                        }
                      }
                    } else {
                      if (sample[4] <96) {
                        if (sample[4] <88) {
                          sum[6] += -0.195239857;
                        } else {
                          sum[6] += -0.098261185;
                        }
                      } else {
                        if (sample[3] <25) {
                          sum[6] += -0.11290323;
                        } else {
                          sum[6] += 0.332344204;
                        }
                      }
                    }
                  }
                } else {
                  sum[6] += -0.291289896;
                }
              }
            } else {
              if (sample[3] <49) {
                if (sample[3] <26) {
                  if (sample[2] <182) {
                    if (sample[3] <23) {
                      if (sample[3] <19) {
                        if (sample[4] <91) {
                          sum[6] += -0.226618707;
                        } else {
                          sum[6] += 0.310888231;
                        }
                      } else {
                        if (sample[4] <96) {
                          sum[6] += -0.249966174;
                        } else {
                          sum[6] += -0.0995623693;
                        }
                      }
                    } else {
                      if (sample[2] <155) {
                        if (sample[2] <137) {
                          sum[6] += 0.163212419;
                        } else {
                          sum[6] += -0.202518076;
                        }
                      } else {
                        if (sample[0] <99) {
                          sum[6] += 0.963302732;
                        } else {
                          sum[6] += 0.0682019368;
                        }
                      }
                    }
                  } else {
                    if (sample[3] <12) {
                      sum[6] += -0.200636938;
                    } else {
                      sum[6] += 1.04132223;
                    }
                  }
                } else {
                  if (sample[3] <33) {
                    if (sample[3] <27) {
                      if (sample[4] <93) {
                        if (sample[2] <140) {
                          sum[6] += -0.206783369;
                        } else {
                          sum[6] += 0.0676982477;
                        }
                      } else {
                        if (sample[0] <90) {
                          sum[6] += 0.361460924;
                        } else {
                          sum[6] += -0.0631769001;
                        }
                      }
                    } else {
                      if (sample[0] <99) {
                        if (sample[5] <136) {
                          sum[6] += 0.43343246;
                        } else {
                          sum[6] += 0.181900889;
                        }
                      } else {
                        if (sample[2] <152) {
                          sum[6] += 0.906175733;
                        } else {
                          sum[6] += 0.367160738;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <107) {
                      if (sample[2] <103) {
                        sum[6] += -0.221951216;
                      } else {
                        if (sample[4] <96) {
                          sum[6] += 0.459687889;
                        } else {
                          sum[6] += -0.17355372;
                        }
                      }
                    } else {
                      if (sample[2] <129) {
                        if (sample[3] <47) {
                          sum[6] += -0.222358197;
                        } else {
                          sum[6] += -0.0537772141;
                        }
                      } else {
                        if (sample[1] <151) {
                          sum[6] += -0.048818294;
                        } else {
                          sum[6] += 0.164468244;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <57) {
                  if (sample[0] <95) {
                    if (sample[3] <55) {
                      sum[6] += -0.2722027;
                    } else {
                      if (sample[4] <91) {
                        sum[6] += -0.246006384;
                      } else {
                        if (sample[0] <89) {
                          sum[6] += 0.136585355;
                        } else {
                          sum[6] += -0.193103448;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <87) {
                      sum[6] += 0.482758611;
                    } else {
                      if (sample[4] <93) {
                        if (sample[0] <99) {
                          sum[6] += -0.221951216;
                        } else {
                          sum[6] += 0.0642201751;
                        }
                      } else {
                        sum[6] += 0.231404945;
                      }
                    }
                  }
                } else {
                  if (sample[3] <71) {
                    if (sample[0] <111) {
                      if (sample[4] <86) {
                        if (sample[3] <63) {
                          sum[6] += -0.193103448;
                        } else {
                          sum[6] += 0.111464955;
                        }
                      } else {
                        if (sample[0] <108) {
                          sum[6] += -0.2863518;
                        } else {
                          sum[6] += -0.062130183;
                        }
                      }
                    } else {
                      sum[6] += 0.231404945;
                    }
                  } else {
                    sum[6] += -0.290522099;
                  }
                }
              }
            }
          } else {
            if (sample[2] <148) {
              if (sample[0] <135) {
                if (sample[0] <105) {
                  if (sample[1] <156) {
                    if (sample[2] <143) {
                      if (sample[3] <41) {
                        sum[6] += 0.552631557;
                      } else {
                        if (sample[3] <44) {
                          sum[6] += -0.17355372;
                        } else {
                          sum[6] += 0.0828402266;
                        }
                      }
                    } else {
                      sum[6] += -0.184210524;
                    }
                  } else {
                    if (sample[2] <120) {
                      if (sample[0] <102) {
                        sum[6] += -0.184210524;
                      } else {
                        sum[6] += 0.184210509;
                      }
                    } else {
                      if (sample[2] <137) {
                        if (sample[2] <132) {
                          sum[6] += -0.232365146;
                        } else {
                          sum[6] += -6.72955647e-09;
                        }
                      } else {
                        sum[6] += -0.260393858;
                      }
                    }
                  }
                } else {
                  if (sample[2] <102) {
                    if (sample[0] <115) {
                      sum[6] += 0.0642201751;
                    } else {
                      sum[6] += -0.184210524;
                    }
                  } else {
                    if (sample[0] <128) {
                      if (sample[2] <129) {
                        sum[6] += 0.636363626;
                      } else {
                        sum[6] += 0.184210509;
                      }
                    } else {
                      sum[6] += 0.0642201751;
                    }
                  }
                }
              } else {
                sum[6] += -0.289477706;
              }
            } else {
              if (sample[0] <107) {
                if (sample[0] <101) {
                  if (sample[2] <156) {
                    if (sample[4] <93) {
                      sum[6] += 0.0289256144;
                    } else {
                      sum[6] += -0.23517786;
                    }
                  } else {
                    if (sample[3] <30) {
                      sum[6] += 0.184210509;
                    } else {
                      sum[6] += 0.921052575;
                    }
                  }
                } else {
                  if (sample[2] <165) {
                    if (sample[5] <158) {
                      if (sample[2] <151) {
                        sum[6] += -5.48990142e-09;
                      } else {
                        if (sample[2] <157) {
                          sum[6] += 0.784232318;
                        } else {
                          sum[6] += 0.0642201751;
                        }
                      }
                    } else {
                      sum[6] += 0.818609655;
                    }
                  } else {
                    if (sample[2] <167) {
                      sum[6] += -5.48990142e-09;
                    } else {
                      sum[6] += 0.579617798;
                    }
                  }
                }
              } else {
                if (sample[2] <181) {
                  if (sample[0] <113) {
                    if (sample[1] <158) {
                      if (sample[0] <111) {
                        sum[6] += -0.244186044;
                      } else {
                        if (sample[1] <156) {
                          sum[6] += 0.0289256144;
                        } else {
                          sum[6] += 0.231404945;
                        }
                      }
                    } else {
                      if (sample[0] <112) {
                        if (sample[0] <111) {
                          sum[6] += 0.145367399;
                        } else {
                          sum[6] += 0.552631557;
                        }
                      } else {
                        sum[6] += -0.0445859917;
                      }
                    }
                  } else {
                    if (sample[4] <92) {
                      if (sample[3] <24) {
                        sum[6] += -0.271162122;
                      } else {
                        if (sample[1] <159) {
                          sum[6] += -0.16055046;
                        } else {
                          sum[6] += 0.0642201751;
                        }
                      }
                    } else {
                      sum[6] += 0.0642201751;
                    }
                  }
                } else {
                  sum[6] += 1.04777062;
                }
              }
            }
          }
        } else {
          if (sample[3] <71) {
            if (sample[5] <182) {
              if (sample[1] <169) {
                if (sample[3] <23) {
                  sum[6] += -0.240072206;
                } else {
                  if (sample[3] <47) {
                    if (sample[4] <91) {
                      if (sample[0] <115) {
                        if (sample[3] <27) {
                          sum[6] += 0.928954363;
                        } else {
                          sum[6] += 0.460942507;
                        }
                      } else {
                        if (sample[1] <164) {
                          sum[6] += -0.200636938;
                        } else {
                          sum[6] += 0.351211041;
                        }
                      }
                    } else {
                      sum[6] += 0.783605039;
                    }
                  } else {
                    if (sample[2] <111) {
                      sum[6] += 1.05181348;
                    } else {
                      sum[6] += -0.250716329;
                    }
                  }
                }
              } else {
                if (sample[2] <153) {
                  if (sample[4] <86) {
                    if (sample[2] <136) {
                      sum[6] += 0.184210509;
                    } else {
                      sum[6] += -0.207100585;
                    }
                  } else {
                    if (sample[4] <95) {
                      if (sample[2] <152) {
                        if (sample[4] <90) {
                          sum[6] += 0.332344204;
                        } else {
                          sum[6] += 0.65488559;
                        }
                      } else {
                        sum[6] += 0.0289256144;
                      }
                    } else {
                      if (sample[0] <112) {
                        sum[6] += 0.368421048;
                      } else {
                        sum[6] += -0.17355372;
                      }
                    }
                  }
                } else {
                  if (sample[4] <92) {
                    if (sample[3] <35) {
                      if (sample[0] <117) {
                        if (sample[2] <177) {
                          sum[6] += 0.729918897;
                        } else {
                          sum[6] += 0.0362694226;
                        }
                      } else {
                        sum[6] += 1.09971297;
                      }
                    } else {
                      sum[6] += 1.23239434;
                    }
                  } else {
                    sum[6] += 1.32318771;
                  }
                }
              }
            } else {
              if (sample[1] <166) {
                if (sample[2] <183) {
                  sum[6] += 0.0289256144;
                } else {
                  sum[6] += 0.891719699;
                }
              } else {
                sum[6] += 1.72407007;
              }
            }
          } else {
            if (sample[0] <136) {
              sum[6] += 0.513761461;
            } else {
              sum[6] += -0.291135937;
            }
          }
        }
      }
    } else {
      if (sample[1] <165) {
        if (sample[2] <115) {
          if (sample[2] <104) {
            if (sample[2] <96) {
              if (sample[2] <85) {
                if (sample[2] <72) {
                  sum[6] += -0.291606545;
                } else {
                  if (sample[0] <1) {
                    if (sample[1] <71) {
                      if (sample[1] <69) {
                        if (sample[3] <26) {
                          sum[6] += -0.291204244;
                        } else {
                          sum[6] += -0.251142859;
                        }
                      } else {
                        if (sample[2] <79) {
                          sum[6] += -0.145283014;
                        } else {
                          sum[6] += -0.222880408;
                        }
                      }
                    } else {
                      if (sample[2] <79) {
                        if (sample[3] <29) {
                          sum[6] += -8.45741521e-09;
                        } else {
                          sum[6] += -0.179646015;
                        }
                      } else {
                        if (sample[1] <75) {
                          sum[6] += -0.0699494407;
                        } else {
                          sum[6] += 0.274585605;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <105) {
                      sum[6] += -0.291492164;
                    } else {
                      if (sample[0] <51) {
                        if (sample[2] <75) {
                          sum[6] += 1.18461537;
                        } else {
                          sum[6] += 0.44094485;
                        }
                      } else {
                        if (sample[0] <65) {
                          sum[6] += -0.167228177;
                        } else {
                          sum[6] += -0.290946931;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[0] <1) {
                  if (sample[1] <80) {
                    if (sample[3] <27) {
                      if (sample[3] <26) {
                        if (sample[1] <79) {
                          sum[6] += -0.290399969;
                        } else {
                          sum[6] += -0.122270741;
                        }
                      } else {
                        if (sample[1] <77) {
                          sum[6] += -0.19844456;
                        } else {
                          sum[6] += 0.0800548792;
                        }
                      }
                    } else {
                      if (sample[2] <88) {
                        if (sample[2] <86) {
                          sum[6] += 0.648322105;
                        } else {
                          sum[6] += 0.167041853;
                        }
                      } else {
                        sum[6] += 0.883076847;
                      }
                    }
                  } else {
                    if (sample[3] <27) {
                      if (sample[1] <81) {
                        if (sample[2] <93) {
                          sum[6] += 0.259643912;
                        } else {
                          sum[6] += -0.16008316;
                        }
                      } else {
                        if (sample[1] <83) {
                          sum[6] += 0.530995071;
                        } else {
                          sum[6] += 0.926877439;
                        }
                      }
                    } else {
                      if (sample[3] <29) {
                        if (sample[2] <89) {
                          sum[6] += 0.941624284;
                        } else {
                          sum[6] += 1.47468781;
                        }
                      } else {
                        if (sample[1] <95) {
                          sum[6] += 0.806948245;
                        } else {
                          sum[6] += -0.0773480684;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <28) {
                    sum[6] += -0.291392326;
                  } else {
                    if (sample[4] <212) {
                      if (sample[4] <168) {
                        if (sample[4] <144) {
                          sum[6] += -0.289446652;
                        } else {
                          sum[6] += -0.265767485;
                        }
                      } else {
                        if (sample[3] <39) {
                          sum[6] += -0.227647185;
                        } else {
                          sum[6] += 1.10526311;
                        }
                      }
                    } else {
                      if (sample[2] <90) {
                        if (sample[1] <105) {
                          sum[6] += -0.26535809;
                        } else {
                          sum[6] += 0.288990825;
                        }
                      } else {
                        if (sample[3] <30) {
                          sum[6] += 0.702602208;
                        } else {
                          sum[6] += -0.0757701993;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[4] <166) {
                if (sample[3] <27) {
                  sum[6] += -0.291263372;
                } else {
                  if (sample[4] <147) {
                    if (sample[3] <67) {
                      if (sample[1] <112) {
                        if (sample[4] <127) {
                          sum[6] += -0.285536975;
                        } else {
                          sum[6] += -0.237933993;
                        }
                      } else {
                        if (sample[4] <124) {
                          sum[6] += -0.190364912;
                        } else {
                          sum[6] += 0.0890554041;
                        }
                      }
                    } else {
                      sum[6] += -0.291633099;
                    }
                  } else {
                    if (sample[0] <44) {
                      if (sample[1] <95) {
                        sum[6] += -0.269230753;
                      } else {
                        if (sample[0] <37) {
                          sum[6] += 0.240687653;
                        } else {
                          sum[6] += -0.167914808;
                        }
                      }
                    } else {
                      if (sample[1] <117) {
                        if (sample[0] <46) {
                          sum[6] += 0.0451936759;
                        } else {
                          sum[6] += 0.669717073;
                        }
                      } else {
                        if (sample[4] <155) {
                          sum[6] += -0.275144517;
                        } else {
                          sum[6] += 0.136585355;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <26) {
                  if (sample[3] <25) {
                    if (sample[1] <89) {
                      sum[6] += -0.2906335;
                    } else {
                      if (sample[0] <35) {
                        sum[6] += -0.212707177;
                      } else {
                        sum[6] += 0.0642201751;
                      }
                    }
                  } else {
                    if (sample[4] <203) {
                      sum[6] += -0.275926381;
                    } else {
                      if (sample[1] <87) {
                        if (sample[0] <1) {
                          sum[6] += -0.11290323;
                        } else {
                          sum[6] += -0.250790298;
                        }
                      } else {
                        if (sample[1] <88) {
                          sum[6] += -5.48990142e-09;
                        } else {
                          sum[6] += 0.267515898;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <19) {
                    if (sample[3] <30) {
                      if (sample[4] <232) {
                        if (sample[1] <92) {
                          sum[6] += 0.573623538;
                        } else {
                          sum[6] += 1.42091751;
                        }
                      } else {
                        if (sample[1] <84) {
                          sum[6] += 0.267515898;
                        } else {
                          sum[6] += 1.65932572;
                        }
                      }
                    } else {
                      if (sample[4] <248) {
                        if (sample[3] <31) {
                          sum[6] += 0.139767036;
                        } else {
                          sum[6] += -0.158850223;
                        }
                      } else {
                        if (sample[1] <104) {
                          sum[6] += 0.204615369;
                        } else {
                          sum[6] += 0.963302732;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <100) {
                      if (sample[4] <206) {
                        if (sample[1] <95) {
                          sum[6] += -0.174836904;
                        } else {
                          sum[6] += -0.00170524605;
                        }
                      } else {
                        if (sample[1] <97) {
                          sum[6] += 1.08921158;
                        } else {
                          sum[6] += -0.207100585;
                        }
                      }
                    } else {
                      if (sample[1] <101) {
                        if (sample[3] <28) {
                          sum[6] += 0.0995886028;
                        } else {
                          sum[6] += 1.34332824;
                        }
                      } else {
                        if (sample[1] <104) {
                          sum[6] += 0.0582928397;
                        } else {
                          sum[6] += -0.197243497;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (sample[4] <172) {
              if (sample[0] <53) {
                if (sample[3] <27) {
                  if (sample[3] <25) {
                    if (sample[1] <100) {
                      sum[6] += -0.289527386;
                    } else {
                      if (sample[2] <113) {
                        sum[6] += 0.0580110401;
                      } else {
                        sum[6] += -0.265249521;
                      }
                    }
                  } else {
                    if (sample[4] <153) {
                      if (sample[0] <49) {
                        if (sample[4] <152) {
                          sum[6] += -0.275010735;
                        } else {
                          sum[6] += -0.145283014;
                        }
                      } else {
                        if (sample[4] <138) {
                          sum[6] += -0.229317039;
                        } else {
                          sum[6] += -0.0751677901;
                        }
                      }
                    } else {
                      if (sample[2] <108) {
                        if (sample[4] <154) {
                          sum[6] += 0.0289256144;
                        } else {
                          sum[6] += -0.234389141;
                        }
                      } else {
                        if (sample[2] <111) {
                          sum[6] += 0.145654812;
                        } else {
                          sum[6] += -0.0785997435;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[2] <111) {
                    if (sample[0] <37) {
                      if (sample[1] <106) {
                        if (sample[1] <100) {
                          sum[6] += 0.231404945;
                        } else {
                          sum[6] += 1.18461537;
                        }
                      } else {
                        sum[6] += 0.267515898;
                      }
                    } else {
                      if (sample[2] <109) {
                        if (sample[1] <114) {
                          sum[6] += 0.0450444371;
                        } else {
                          sum[6] += -0.103920437;
                        }
                      } else {
                        if (sample[1] <115) {
                          sum[6] += 0.407452464;
                        } else {
                          sum[6] += -0.165710181;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <118) {
                      if (sample[3] <28) {
                        if (sample[1] <108) {
                          sum[6] += 0.297345102;
                        } else {
                          sum[6] += 0.952662706;
                        }
                      } else {
                        if (sample[2] <113) {
                          sum[6] += 0.994823456;
                        } else {
                          sum[6] += 1.35391772;
                        }
                      }
                    } else {
                      if (sample[1] <127) {
                        if (sample[1] <119) {
                          sum[6] += 0.184210509;
                        } else {
                          sum[6] += -0.174676523;
                        }
                      } else {
                        sum[6] += 0.288990825;
                      }
                    }
                  }
                }
              } else {
                if (sample[0] <57) {
                  if (sample[1] <105) {
                    if (sample[1] <104) {
                      sum[6] += -0.290310115;
                    } else {
                      if (sample[4] <134) {
                        if (sample[4] <124) {
                          sum[6] += -0.0241379365;
                        } else {
                          sum[6] += -0.244186044;
                        }
                      } else {
                        sum[6] += 0.0642201751;
                      }
                    }
                  } else {
                    if (sample[3] <29) {
                      if (sample[1] <109) {
                        if (sample[4] <130) {
                          sum[6] += 0.656923056;
                        } else {
                          sum[6] += -0.097053729;
                        }
                      } else {
                        if (sample[0] <55) {
                          sum[6] += 0.313793093;
                        } else {
                          sum[6] += 1.09268284;
                        }
                      }
                    } else {
                      if (sample[2] <111) {
                        if (sample[2] <105) {
                          sum[6] += 0.102689475;
                        } else {
                          sum[6] += -0.195171714;
                        }
                      } else {
                        if (sample[1] <117) {
                          sum[6] += 0.494459808;
                        } else {
                          sum[6] += -0.264023215;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <52) {
                    if (sample[1] <107) {
                      if (sample[3] <26) {
                        sum[6] += -0.291421026;
                      } else {
                        if (sample[4] <125) {
                          sum[6] += -0.270809263;
                        } else {
                          sum[6] += 0.0642201751;
                        }
                      }
                    } else {
                      if (sample[4] <141) {
                        if (sample[2] <114) {
                          sum[6] += -0.238235742;
                        } else {
                          sum[6] += -0.122720897;
                        }
                      } else {
                        sum[6] += 0.513761461;
                      }
                    }
                  } else {
                    sum[6] += -0.291647673;
                  }
                }
              }
            } else {
              if (sample[3] <26) {
                if (sample[3] <25) {
                  if (sample[1] <97) {
                    if (sample[3] <23) {
                      sum[6] += -0.29134348;
                    } else {
                      if (sample[4] <189) {
                        sum[6] += -0.283731252;
                      } else {
                        if (sample[1] <92) {
                          sum[6] += -0.18672739;
                        } else {
                          sum[6] += 0.266435981;
                        }
                      }
                    }
                  } else {
                    sum[6] += 0.368421048;
                  }
                } else {
                  if (sample[4] <195) {
                    if (sample[1] <98) {
                      if (sample[0] <32) {
                        if (sample[1] <95) {
                          sum[6] += -0.0943820253;
                        } else {
                          sum[6] += 0.152173907;
                        }
                      } else {
                        sum[6] += -0.259550571;
                      }
                    } else {
                      if (sample[4] <178) {
                        sum[6] += -0.16055046;
                      } else {
                        if (sample[0] <33) {
                          sum[6] += 0.807692289;
                        } else {
                          sum[6] += 0.231404945;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <107) {
                      if (sample[0] <19) {
                        sum[6] += 0.0642201751;
                      } else {
                        sum[6] += -5.48990142e-09;
                      }
                    } else {
                      if (sample[4] <244) {
                        sum[6] += 1.16486895;
                      } else {
                        sum[6] += 0.368421048;
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <30) {
                  if (sample[3] <29) {
                    if (sample[4] <179) {
                      if (sample[1] <102) {
                        if (sample[1] <101) {
                          sum[6] += 0.494197249;
                        } else {
                          sum[6] += -0.0773480684;
                        }
                      } else {
                        if (sample[0] <34) {
                          sum[6] += 0.417098433;
                        } else {
                          sum[6] += 1.46252835;
                        }
                      }
                    } else {
                      sum[6] += 1.6889466;
                    }
                  } else {
                    if (sample[0] <23) {
                      if (sample[2] <109) {
                        if (sample[0] <14) {
                          sum[6] += 1.02941167;
                        } else {
                          sum[6] += 0.0963733941;
                        }
                      } else {
                        if (sample[2] <110) {
                          sum[6] += 0.881418049;
                        } else {
                          sum[6] += 1.47460437;
                        }
                      }
                    } else {
                      if (sample[0] <31) {
                        if (sample[1] <110) {
                          sum[6] += 1.52761316;
                        } else {
                          sum[6] += 0.677419305;
                        }
                      } else {
                        if (sample[1] <110) {
                          sum[6] += 0.971098185;
                        } else {
                          sum[6] += 0.193370149;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <16) {
                    sum[6] += 1.27744806;
                  } else {
                    if (sample[5] <111) {
                      if (sample[2] <106) {
                        if (sample[4] <186) {
                          sum[6] += -0.0401146188;
                        } else {
                          sum[6] += -0.258022547;
                        }
                      } else {
                        if (sample[4] <192) {
                          sum[6] += 0.242634296;
                        } else {
                          sum[6] += -0.0998810977;
                        }
                      }
                    } else {
                      if (sample[3] <31) {
                        if (sample[0] <27) {
                          sum[6] += 0.597374141;
                        } else {
                          sum[6] += 0.2317487;
                        }
                      } else {
                        if (sample[1] <116) {
                          sum[6] += 0.0748662949;
                        } else {
                          sum[6] += 0.470796436;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          if (sample[3] <25) {
            if (sample[1] <122) {
              if (sample[3] <24) {
                if (sample[1] <112) {
                  if (sample[1] <103) {
                    if (sample[3] <18) {
                      sum[6] += -0.291435361;
                    } else {
                      if (sample[4] <141) {
                        sum[6] += -0.288496733;
                      } else {
                        if (sample[2] <120) {
                          sum[6] += -0.192922249;
                        } else {
                          sum[6] += -0.271961868;
                        }
                      }
                    }
                  } else {
                    if (sample[4] <148) {
                      if (sample[4] <138) {
                        if (sample[0] <57) {
                          sum[6] += -0.172307685;
                        } else {
                          sum[6] += -0.288710624;
                        }
                      } else {
                        if (sample[1] <105) {
                          sum[6] += -0.127649084;
                        } else {
                          sum[6] += -0.278740406;
                        }
                      }
                    } else {
                      if (sample[2] <126) {
                        if (sample[0] <40) {
                          sum[6] += -5.48990142e-09;
                        } else {
                          sum[6] += -0.229257643;
                        }
                      } else {
                        if (sample[1] <106) {
                          sum[6] += 0.150584415;
                        } else {
                          sum[6] += -0.0898446366;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[0] <49) {
                    if (sample[4] <187) {
                      if (sample[1] <114) {
                        if (sample[2] <141) {
                          sum[6] += 0.513761461;
                        } else {
                          sum[6] += 0.0642201751;
                        }
                      } else {
                        if (sample[0] <48) {
                          sum[6] += 1.31324267;
                        } else {
                          sum[6] += 0.423566848;
                        }
                      }
                    } else {
                      if (sample[2] <143) {
                        sum[6] += -0.17355372;
                      } else {
                        sum[6] += 0.579617798;
                      }
                    }
                  } else {
                    if (sample[4] <145) {
                      if (sample[4] <138) {
                        if (sample[1] <117) {
                          sum[6] += -0.277753979;
                        } else {
                          sum[6] += -0.230124757;
                        }
                      } else {
                        if (sample[4] <141) {
                          sum[6] += -0.0141987903;
                        } else {
                          sum[6] += -0.229599997;
                        }
                      }
                    } else {
                      if (sample[1] <115) {
                        if (sample[2] <159) {
                          sum[6] += 0.412432402;
                        } else {
                          sum[6] += -0.23517786;
                        }
                      } else {
                        if (sample[4] <167) {
                          sum[6] += -0.140090376;
                        } else {
                          sum[6] += 0.338709652;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[4] <176) {
                  if (sample[2] <129) {
                    if (sample[1] <116) {
                      if (sample[4] <163) {
                        sum[6] += -0.267201006;
                      } else {
                        if (sample[1] <109) {
                          sum[6] += -0.223346293;
                        } else {
                          sum[6] += 0.0300859511;
                        }
                      }
                    } else {
                      if (sample[4] <99) {
                        sum[6] += -0.221951216;
                      } else {
                        if (sample[4] <102) {
                          sum[6] += 0.552631557;
                        } else {
                          sum[6] += -0.0831353962;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <65) {
                      if (sample[4] <164) {
                        if (sample[1] <116) {
                          sum[6] += -0.116343491;
                        } else {
                          sum[6] += 0.498738945;
                        }
                      } else {
                        sum[6] += 0.733201563;
                      }
                    } else {
                      if (sample[1] <121) {
                        if (sample[4] <110) {
                          sum[6] += 0.244186029;
                        } else {
                          sum[6] += -0.0495575294;
                        }
                      } else {
                        sum[6] += -0.229257643;
                      }
                    }
                  }
                } else {
                  if (sample[1] <109) {
                    if (sample[4] <194) {
                      if (sample[2] <123) {
                        if (sample[0] <32) {
                          sum[6] += -0.16055046;
                        } else {
                          sum[6] += 0.0642201751;
                        }
                      } else {
                        if (sample[4] <179) {
                          sum[6] += 0.0289256144;
                        } else {
                          sum[6] += 0.517751455;
                        }
                      }
                    } else {
                      if (sample[0] <20) {
                        sum[6] += 0.111464955;
                      } else {
                        if (sample[2] <117) {
                          sum[6] += 0.0642201751;
                        } else {
                          sum[6] += 1.26353788;
                        }
                      }
                    }
                  } else {
                    sum[6] += 1.55994344;
                  }
                }
              }
            } else {
              if (sample[4] <133) {
                if (sample[2] <167) {
                  if (sample[3] <23) {
                    if (sample[2] <153) {
                      if (sample[3] <18) {
                        sum[6] += 0.111464955;
                      } else {
                        if (sample[4] <122) {
                          sum[6] += -0.215645343;
                        } else {
                          sum[6] += -0.114802361;
                        }
                      }
                    } else {
                      if (sample[2] <157) {
                        if (sample[4] <107) {
                          sum[6] += 0.1897856;
                        } else {
                          sum[6] += -0.0173124559;
                        }
                      } else {
                        if (sample[3] <20) {
                          sum[6] += -0.0384615436;
                        } else {
                          sum[6] += -0.19706744;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <155) {
                      if (sample[2] <144) {
                        if (sample[1] <129) {
                          sum[6] += 0.013883871;
                        } else {
                          sum[6] += 0.397125542;
                        }
                      } else {
                        if (sample[3] <24) {
                          sum[6] += -0.0809810311;
                        } else {
                          sum[6] += -0.191184416;
                        }
                      }
                    } else {
                      if (sample[0] <95) {
                        if (sample[4] <120) {
                          sum[6] += 0.286577165;
                        } else {
                          sum[6] += 0.734806597;
                        }
                      } else {
                        if (sample[4] <100) {
                          sum[6] += -0.244186044;
                        } else {
                          sum[6] += -7.58604557e-09;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <13) {
                    sum[6] += -0.253351212;
                  } else {
                    if (sample[2] <182) {
                      if (sample[2] <175) {
                        if (sample[1] <149) {
                          sum[6] += 0.661625683;
                        } else {
                          sum[6] += 0.306486458;
                        }
                      } else {
                        if (sample[4] <98) {
                          sum[6] += 0.288990825;
                        } else {
                          sum[6] += 1.20909083;
                        }
                      }
                    } else {
                      if (sample[1] <155) {
                        sum[6] += -0.212707177;
                      } else {
                        sum[6] += 0.288990825;
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <133) {
                  if (sample[0] <75) {
                    if (sample[0] <52) {
                      if (sample[3] <22) {
                        sum[6] += 0.288990825;
                      } else {
                        sum[6] += 1.38372087;
                      }
                    } else {
                      if (sample[3] <23) {
                        if (sample[1] <132) {
                          sum[6] += -0.121707059;
                        } else {
                          sum[6] += 0.482758611;
                        }
                      } else {
                        if (sample[0] <60) {
                          sum[6] += 1.26353788;
                        } else {
                          sum[6] += 0.257002234;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <172) {
                      sum[6] += 0.267515898;
                    } else {
                      sum[6] += 1.50429797;
                    }
                  }
                } else {
                  if (sample[4] <144) {
                    if (sample[2] <154) {
                      if (sample[2] <152) {
                        sum[6] += 0.288990825;
                      } else {
                        sum[6] += -0.184210524;
                      }
                    } else {
                      if (sample[1] <139) {
                        sum[6] += 1.17107749;
                      } else {
                        if (sample[0] <77) {
                          sum[6] += 0.0726140961;
                        } else {
                          sum[6] += 0.605536282;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <190) {
                      sum[6] += 1.35104108;
                    } else {
                      sum[6] += -0.16055046;
                    }
                  }
                }
              }
            }
          } else {
            if (sample[3] <31) {
              if (sample[4] <114) {
                if (sample[1] <129) {
                  if (sample[2] <125) {
                    if (sample[3] <27) {
                      if (sample[2] <122) {
                        if (sample[0] <66) {
                          sum[6] += -0.0415019803;
                        } else {
                          sum[6] += -0.278313249;
                        }
                      } else {
                        if (sample[4] <106) {
                          sum[6] += -0.200860828;
                        } else {
                          sum[6] += -0.0249406248;
                        }
                      }
                    } else {
                      if (sample[4] <110) {
                        if (sample[1] <120) {
                          sum[6] += -0.120367624;
                        } else {
                          sum[6] += -0.26879999;
                        }
                      } else {
                        if (sample[1] <116) {
                          sum[6] += -0.132241815;
                        } else {
                          sum[6] += 0.147952422;
                        }
                      }
                    }
                  } else {
                    if (sample[1] <118) {
                      if (sample[0] <71) {
                        sum[6] += 0.231404945;
                      } else {
                        sum[6] += 0.775086462;
                      }
                    } else {
                      if (sample[3] <30) {
                        if (sample[1] <121) {
                          sum[6] += 0.169716358;
                        } else {
                          sum[6] += -0.0434079319;
                        }
                      } else {
                        if (sample[4] <106) {
                          sum[6] += 0.144827574;
                        } else {
                          sum[6] += 0.735668778;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <107) {
                    if (sample[5] <159) {
                      if (sample[0] <86) {
                        if (sample[1] <130) {
                          sum[6] += 0.176322401;
                        } else {
                          sum[6] += 0.586547792;
                        }
                      } else {
                        if (sample[1] <147) {
                          sum[6] += 0.124336451;
                        } else {
                          sum[6] += 0.467238188;
                        }
                      }
                    } else {
                      if (sample[2] <171) {
                        if (sample[2] <161) {
                          sum[6] += 1.05161786;
                        } else {
                          sum[6] += 0.675610662;
                        }
                      } else {
                        if (sample[4] <101) {
                          sum[6] += 0.144827574;
                        } else {
                          sum[6] += 1.42172062;
                        }
                      }
                    }
                  } else {
                    if (sample[5] <160) {
                      if (sample[0] <76) {
                        sum[6] += 1.53671455;
                      } else {
                        if (sample[1] <138) {
                          sum[6] += 1.03303409;
                        } else {
                          sum[6] += 0.735629201;
                        }
                      }
                    } else {
                      if (sample[4] <110) {
                        if (sample[1] <154) {
                          sum[6] += 0.417098433;
                        } else {
                          sum[6] += 1.17342496;
                        }
                      } else {
                        sum[6] += 1.50249708;
                      }
                    }
                  }
                }
              } else {
                if (sample[1] <134) {
                  if (sample[4] <134) {
                    if (sample[2] <130) {
                      if (sample[1] <117) {
                        if (sample[3] <28) {
                          sum[6] += -0.0962861106;
                        } else {
                          sum[6] += 0.112089656;
                        }
                      } else {
                        if (sample[4] <128) {
                          sum[6] += 0.248486087;
                        } else {
                          sum[6] += 0.985858142;
                        }
                      }
                    } else {
                      if (sample[3] <29) {
                        if (sample[2] <135) {
                          sum[6] += 0.541398108;
                        } else {
                          sum[6] += 1.085729;
                        }
                      } else {
                        if (sample[2] <131) {
                          sum[6] += 1.26379466;
                        } else {
                          sum[6] += 1.65593112;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <43) {
                      if (sample[2] <136) {
                        if (sample[3] <29) {
                          sum[6] += 1.67707825;
                        } else {
                          sum[6] += 1.2712456;
                        }
                      } else {
                        if (sample[3] <27) {
                          sum[6] += 0.794627309;
                        } else {
                          sum[6] += 0.175879374;
                        }
                      }
                    } else {
                      if (sample[3] <26) {
                        if (sample[1] <116) {
                          sum[6] += 0.318396717;
                        } else {
                          sum[6] += 1.39769232;
                        }
                      } else {
                        if (sample[4] <173) {
                          sum[6] += 1.51730812;
                        } else {
                          sum[6] += 0.744742215;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[4] <123) {
                    if (sample[3] <26) {
                      if (sample[2] <156) {
                        if (sample[2] <146) {
                          sum[6] += 0.288990825;
                        } else {
                          sum[6] += -0.162790701;
                        }
                      } else {
                        if (sample[2] <166) {
                          sum[6] += 0.871698081;
                        } else {
                          sum[6] += 0.412663728;
                        }
                      }
                    } else {
                      if (sample[5] <157) {
                        if (sample[0] <75) {
                          sum[6] += 1.65146446;
                        } else {
                          sum[6] += 1.13135815;
                        }
                      } else {
                        sum[6] += 1.67422271;
                      }
                    }
                  } else {
                    if (sample[0] <44) {
                      if (sample[2] <147) {
                        if (sample[3] <28) {
                          sum[6] += -0.145283014;
                        } else {
                          sum[6] += 1.00552487;
                        }
                      } else {
                        sum[6] += 1.57606483;
                      }
                    } else {
                      if (sample[2] <181) {
                        sum[6] += 1.71383703;
                      } else {
                        sum[6] += 0.513761461;
                      }
                    }
                  }
                }
              }
            } else {
              if (sample[3] <32) {
                if (sample[2] <129) {
                  if (sample[0] <58) {
                    if (sample[4] <190) {
                      if (sample[0] <38) {
                        if (sample[4] <185) {
                          sum[6] += -0.17355372;
                        } else {
                          sum[6] += 0.0642201751;
                        }
                      } else {
                        if (sample[4] <135) {
                          sum[6] += 0.0642201751;
                        } else {
                          sum[6] += 0.608695626;
                        }
                      }
                    } else {
                      sum[6] += 1.33538449;
                    }
                  } else {
                    if (sample[0] <75) {
                      if (sample[1] <127) {
                        if (sample[4] <114) {
                          sum[6] += -0.16730918;
                        } else {
                          sum[6] += -0.0258302651;
                        }
                      } else {
                        if (sample[2] <128) {
                          sum[6] += -0.264056921;
                        } else {
                          sum[6] += -0.0943820253;
                        }
                      }
                    } else {
                      if (sample[4] <104) {
                        if (sample[0] <78) {
                          sum[6] += -0.0111821154;
                        } else {
                          sum[6] += 0.328729272;
                        }
                      } else {
                        sum[6] += 0.807692289;
                      }
                    }
                  }
                } else {
                  if (sample[4] <127) {
                    if (sample[4] <116) {
                      if (sample[0] <78) {
                        if (sample[1] <139) {
                          sum[6] += 1.11743474;
                        } else {
                          sum[6] += 0.368421048;
                        }
                      } else {
                        if (sample[1] <159) {
                          sum[6] += 0.279478282;
                        } else {
                          sum[6] += 0.929561138;
                        }
                      }
                    } else {
                      if (sample[2] <132) {
                        if (sample[0] <69) {
                          sum[6] += -0.0894568712;
                        } else {
                          sum[6] += -0.224436745;
                        }
                      } else {
                        if (sample[1] <139) {
                          sum[6] += 0.664887905;
                        } else {
                          sum[6] += -0.0060085915;
                        }
                      }
                    }
                  } else {
                    if (sample[2] <130) {
                      if (sample[0] <60) {
                        sum[6] += 0.231404945;
                      } else {
                        sum[6] += -0.207100585;
                      }
                    } else {
                      if (sample[2] <134) {
                        if (sample[0] <64) {
                          sum[6] += 0.930668771;
                        } else {
                          sum[6] += 0.346067399;
                        }
                      } else {
                        if (sample[4] <151) {
                          sum[6] += 1.33453226;
                        } else {
                          sum[6] += 0.227810636;
                        }
                      }
                    }
                  }
                }
              } else {
                if (sample[3] <44) {
                  if (sample[2] <143) {
                    if (sample[4] <147) {
                      if (sample[1] <147) {
                        if (sample[4] <106) {
                          sum[6] += -0.148780495;
                        } else {
                          sum[6] += -0.221425727;
                        }
                      } else {
                        if (sample[4] <124) {
                          sum[6] += 0.0540012233;
                        } else {
                          sum[6] += 0.5090909;
                        }
                      }
                    } else {
                      if (sample[4] <186) {
                        if (sample[1] <150) {
                          sum[6] += 0.271024138;
                        } else {
                          sum[6] += 1.04132223;
                        }
                      } else {
                        sum[6] += 1.29253101;
                      }
                    }
                  } else {
                    if (sample[1] <160) {
                      if (sample[4] <117) {
                        if (sample[4] <104) {
                          sum[6] += 0.443191648;
                        } else {
                          sum[6] += 0.153816476;
                        }
                      } else {
                        if (sample[1] <155) {
                          sum[6] += 0.290858716;
                        } else {
                          sum[6] += 0.986143112;
                        }
                      }
                    } else {
                      if (sample[4] <108) {
                        if (sample[4] <98) {
                          sum[6] += 0.368421048;
                        } else {
                          sum[6] += 1.17370319;
                        }
                      } else {
                        if (sample[4] <121) {
                          sum[6] += 0.348439783;
                        } else {
                          sum[6] += 1.19087136;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[3] <47) {
                    if (sample[1] <149) {
                      if (sample[1] <146) {
                        sum[6] += -0.23517786;
                      } else {
                        if (sample[2] <118) {
                          sum[6] += -0.0241379365;
                        } else {
                          sum[6] += 0.267515898;
                        }
                      }
                    } else {
                      if (sample[1] <163) {
                        sum[6] += -0.279524207;
                      } else {
                        if (sample[0] <93) {
                          sum[6] += 0.0642201751;
                        } else {
                          sum[6] += -0.212707177;
                        }
                      }
                    }
                  } else {
                    sum[6] += -0.29165113;
                  }
                }
              }
            }
          }
        }
      } else {
        if (sample[2] <158) {
          if (sample[3] <58) {
            if (sample[1] <180) {
              if (sample[3] <42) {
                if (sample[4] <127) {
                  if (sample[0] <97) {
                    if (sample[2] <150) {
                      if (sample[0] <91) {
                        sum[6] += -0.184210524;
                      } else {
                        if (sample[3] <39) {
                          sum[6] += -0.0773480684;
                        } else {
                          sum[6] += 0.328729272;
                        }
                      }
                    } else {
                      if (sample[4] <112) {
                        if (sample[4] <109) {
                          sum[6] += 0.433884293;
                        } else {
                          sum[6] += -0.17355372;
                        }
                      } else {
                        if (sample[2] <156) {
                          sum[6] += 0.318181783;
                        } else {
                          sum[6] += 0.90322578;
                        }
                      }
                    }
                  } else {
                    if (sample[0] <104) {
                      sum[6] += 1.07405603;
                    } else {
                      if (sample[4] <102) {
                        sum[6] += 0.690311372;
                      } else {
                        sum[6] += 0.0642201751;
                      }
                    }
                  }
                } else {
                  sum[6] += 1.44043314;
                }
              } else {
                if (sample[0] <98) {
                  if (sample[0] <88) {
                    sum[6] += 0.517751455;
                  } else {
                    if (sample[2] <107) {
                      sum[6] += 0.0642201751;
                    } else {
                      if (sample[1] <166) {
                        if (sample[2] <131) {
                          sum[6] += -0.184210524;
                        } else {
                          sum[6] += 0.0642201751;
                        }
                      } else {
                        sum[6] += -0.254114211;
                      }
                    }
                  }
                } else {
                  if (sample[2] <137) {
                    if (sample[1] <168) {
                      sum[6] += -0.207100585;
                    } else {
                      if (sample[1] <170) {
                        sum[6] += 0.482758611;
                      } else {
                        if (sample[1] <174) {
                          sum[6] += -0.193103448;
                        } else {
                          sum[6] += 0.198689938;
                        }
                      }
                    }
                  } else {
                    sum[6] += 0.594339609;
                  }
                }
              }
            } else {
              if (sample[1] <182) {
                if (sample[0] <100) {
                  if (sample[3] <48) {
                    sum[6] += 0.552631557;
                  } else {
                    sum[6] += 0.0642201751;
                  }
                } else {
                  sum[6] += 1.12903225;
                }
              } else {
                sum[6] += 1.56841493;
              }
            }
          } else {
            if (sample[3] <73) {
              if (sample[2] <97) {
                sum[6] += -0.277502477;
              } else {
                if (sample[3] <61) {
                  if (sample[1] <173) {
                    sum[6] += -0.17355372;
                  } else {
                    sum[6] += 0.0642201751;
                  }
                } else {
                  if (sample[0] <130) {
                    sum[6] += 0.919037163;
                  } else {
                    sum[6] += 0.0642201751;
                  }
                }
              }
            } else {
              sum[6] += -0.290984958;
            }
          }
        } else {
          if (sample[2] <166) {
            if (sample[1] <179) {
              if (sample[3] <34) {
                if (sample[4] <99) {
                  sum[6] += 0.368421048;
                } else {
                  sum[6] += 1.3266288;
                }
              } else {
                if (sample[0] <98) {
                  if (sample[1] <171) {
                    sum[6] += -0.17355372;
                  } else {
                    if (sample[1] <173) {
                      if (sample[1] <172) {
                        sum[6] += 0.288990825;
                      } else {
                        sum[6] += 0.0289256144;
                      }
                    } else {
                      if (sample[4] <119) {
                        sum[6] += 0.797927439;
                      } else {
                        if (sample[0] <92) {
                          sum[6] += 0.513761461;
                        } else {
                          sum[6] += -0.16055046;
                        }
                      }
                    }
                  }
                } else {
                  if (sample[1] <168) {
                    sum[6] += 0.288990825;
                  } else {
                    sum[6] += 1.14060903;
                  }
                }
              }
            } else {
              sum[6] += 1.56330585;
            }
          } else {
            sum[6] += 1.74419713;
          }
        }
      }
    }
  } else {
    if (sample[4] <52) {
      if (sample[4] <45) {
        if (sample[4] <42) {
          sum[6] += -0.291151643;
        } else {
          if (sample[1] <196) {
            sum[6] += -0.240072206;
          } else {
            sum[6] += 0.313793093;
          }
        }
      } else {
        if (sample[1] <197) {
          sum[6] += -0.237735853;
        } else {
          sum[6] += 1.1586206;
        }
      }
    } else {
      if (sample[3] <24) {
        if (sample[0] <121) {
          sum[6] += 0.807692289;
        } else {
          sum[6] += -0.237735853;
        }
      } else {
        sum[6] += 1.74989963;
      }
    }
  }


  return sum;
}
}
