#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint8mf8_t test_vnclipu_wv_u8mf8_tu(vuint8mf8_t maskedoff, vuint16mf4_t op1,
                                     vuint8mf8_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wx_u8mf8_tu(vuint8mf8_t maskedoff, vuint16mf4_t op1,
                                     size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wv_u8mf4_tu(vuint8mf4_t maskedoff, vuint16mf2_t op1,
                                     vuint8mf4_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wx_u8mf4_tu(vuint8mf4_t maskedoff, vuint16mf2_t op1,
                                     size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wv_u8mf2_tu(vuint8mf2_t maskedoff, vuint16m1_t op1,
                                     vuint8mf2_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wx_u8mf2_tu(vuint8mf2_t maskedoff, vuint16m1_t op1,
                                     size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wv_u8m1_tu(vuint8m1_t maskedoff, vuint16m2_t op1,
                                   vuint8m1_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wx_u8m1_tu(vuint8m1_t maskedoff, vuint16m2_t op1,
                                   size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wv_u8m2_tu(vuint8m2_t maskedoff, vuint16m4_t op1,
                                   vuint8m2_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wx_u8m2_tu(vuint8m2_t maskedoff, vuint16m4_t op1,
                                   size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wv_u8m4_tu(vuint8m4_t maskedoff, vuint16m8_t op1,
                                   vuint8m4_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wx_u8m4_tu(vuint8m4_t maskedoff, vuint16m8_t op1,
                                   size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wv_u16mf4_tu(vuint16mf4_t maskedoff, vuint32mf2_t op1,
                                       vuint16mf4_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wx_u16mf4_tu(vuint16mf4_t maskedoff, vuint32mf2_t op1,
                                       size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wv_u16mf2_tu(vuint16mf2_t maskedoff, vuint32m1_t op1,
                                       vuint16mf2_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wx_u16mf2_tu(vuint16mf2_t maskedoff, vuint32m1_t op1,
                                       size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wv_u16m1_tu(vuint16m1_t maskedoff, vuint32m2_t op1,
                                     vuint16m1_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wx_u16m1_tu(vuint16m1_t maskedoff, vuint32m2_t op1,
                                     size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wv_u16m2_tu(vuint16m2_t maskedoff, vuint32m4_t op1,
                                     vuint16m2_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wx_u16m2_tu(vuint16m2_t maskedoff, vuint32m4_t op1,
                                     size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wv_u16m4_tu(vuint16m4_t maskedoff, vuint32m8_t op1,
                                     vuint16m4_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wx_u16m4_tu(vuint16m4_t maskedoff, vuint32m8_t op1,
                                     size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wv_u32mf2_tu(vuint32mf2_t maskedoff, vuint64m1_t op1,
                                       vuint32mf2_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wx_u32mf2_tu(vuint32mf2_t maskedoff, vuint64m1_t op1,
                                       size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wv_u32m1_tu(vuint32m1_t maskedoff, vuint64m2_t op1,
                                     vuint32m1_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wx_u32m1_tu(vuint32m1_t maskedoff, vuint64m2_t op1,
                                     size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wv_u32m2_tu(vuint32m2_t maskedoff, vuint64m4_t op1,
                                     vuint32m2_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wx_u32m2_tu(vuint32m2_t maskedoff, vuint64m4_t op1,
                                     size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wv_u32m4_tu(vuint32m4_t maskedoff, vuint64m8_t op1,
                                     vuint32m4_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wx_u32m4_tu(vuint32m4_t maskedoff, vuint64m8_t op1,
                                     size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wv_u8mf8_tum(vbool64_t mask, vuint8mf8_t maskedoff,
                                      vuint16mf4_t op1, vuint8mf8_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wx_u8mf8_tum(vbool64_t mask, vuint8mf8_t maskedoff,
                                      vuint16mf4_t op1, size_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wv_u8mf4_tum(vbool32_t mask, vuint8mf4_t maskedoff,
                                      vuint16mf2_t op1, vuint8mf4_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wx_u8mf4_tum(vbool32_t mask, vuint8mf4_t maskedoff,
                                      vuint16mf2_t op1, size_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wv_u8mf2_tum(vbool16_t mask, vuint8mf2_t maskedoff,
                                      vuint16m1_t op1, vuint8mf2_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wx_u8mf2_tum(vbool16_t mask, vuint8mf2_t maskedoff,
                                      vuint16m1_t op1, size_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wv_u8m1_tum(vbool8_t mask, vuint8m1_t maskedoff,
                                    vuint16m2_t op1, vuint8m1_t shift,
                                    size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wx_u8m1_tum(vbool8_t mask, vuint8m1_t maskedoff,
                                    vuint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wv_u8m2_tum(vbool4_t mask, vuint8m2_t maskedoff,
                                    vuint16m4_t op1, vuint8m2_t shift,
                                    size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wx_u8m2_tum(vbool4_t mask, vuint8m2_t maskedoff,
                                    vuint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wv_u8m4_tum(vbool2_t mask, vuint8m4_t maskedoff,
                                    vuint16m8_t op1, vuint8m4_t shift,
                                    size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wx_u8m4_tum(vbool2_t mask, vuint8m4_t maskedoff,
                                    vuint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wv_u16mf4_tum(vbool64_t mask, vuint16mf4_t maskedoff,
                                        vuint32mf2_t op1, vuint16mf4_t shift,
                                        size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wx_u16mf4_tum(vbool64_t mask, vuint16mf4_t maskedoff,
                                        vuint32mf2_t op1, size_t shift,
                                        size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wv_u16mf2_tum(vbool32_t mask, vuint16mf2_t maskedoff,
                                        vuint32m1_t op1, vuint16mf2_t shift,
                                        size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wx_u16mf2_tum(vbool32_t mask, vuint16mf2_t maskedoff,
                                        vuint32m1_t op1, size_t shift,
                                        size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wv_u16m1_tum(vbool16_t mask, vuint16m1_t maskedoff,
                                      vuint32m2_t op1, vuint16m1_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wx_u16m1_tum(vbool16_t mask, vuint16m1_t maskedoff,
                                      vuint32m2_t op1, size_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wv_u16m2_tum(vbool8_t mask, vuint16m2_t maskedoff,
                                      vuint32m4_t op1, vuint16m2_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wx_u16m2_tum(vbool8_t mask, vuint16m2_t maskedoff,
                                      vuint32m4_t op1, size_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wv_u16m4_tum(vbool4_t mask, vuint16m4_t maskedoff,
                                      vuint32m8_t op1, vuint16m4_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wx_u16m4_tum(vbool4_t mask, vuint16m4_t maskedoff,
                                      vuint32m8_t op1, size_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wv_u32mf2_tum(vbool64_t mask, vuint32mf2_t maskedoff,
                                        vuint64m1_t op1, vuint32mf2_t shift,
                                        size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wx_u32mf2_tum(vbool64_t mask, vuint32mf2_t maskedoff,
                                        vuint64m1_t op1, size_t shift,
                                        size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wv_u32m1_tum(vbool32_t mask, vuint32m1_t maskedoff,
                                      vuint64m2_t op1, vuint32m1_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wx_u32m1_tum(vbool32_t mask, vuint32m1_t maskedoff,
                                      vuint64m2_t op1, size_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wv_u32m2_tum(vbool16_t mask, vuint32m2_t maskedoff,
                                      vuint64m4_t op1, vuint32m2_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wx_u32m2_tum(vbool16_t mask, vuint32m2_t maskedoff,
                                      vuint64m4_t op1, size_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wv_u32m4_tum(vbool8_t mask, vuint32m4_t maskedoff,
                                      vuint64m8_t op1, vuint32m4_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wx_u32m4_tum(vbool8_t mask, vuint32m4_t maskedoff,
                                      vuint64m8_t op1, size_t shift,
                                      size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wv_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff,
                                       vuint16mf4_t op1, vuint8mf8_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint8mf8_t test_vnclipu_wx_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff,
                                       vuint16mf4_t op1, size_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint8mf4_t test_vnclipu_wv_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff,
                                       vuint16mf2_t op1, vuint8mf4_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint8mf4_t test_vnclipu_wx_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff,
                                       vuint16mf2_t op1, size_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint8mf2_t test_vnclipu_wv_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff,
                                       vuint16m1_t op1, vuint8mf2_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint8mf2_t test_vnclipu_wx_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff,
                                       vuint16m1_t op1, size_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint8m1_t test_vnclipu_wv_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff,
                                     vuint16m2_t op1, vuint8m1_t shift,
                                     size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint8m1_t test_vnclipu_wx_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff,
                                     vuint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint8m2_t test_vnclipu_wv_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff,
                                     vuint16m4_t op1, vuint8m2_t shift,
                                     size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint8m2_t test_vnclipu_wx_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff,
                                     vuint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint8m4_t test_vnclipu_wv_u8m4_tumu(vbool2_t mask, vuint8m4_t maskedoff,
                                     vuint16m8_t op1, vuint8m4_t shift,
                                     size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint8m4_t test_vnclipu_wx_u8m4_tumu(vbool2_t mask, vuint8m4_t maskedoff,
                                     vuint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint16mf4_t test_vnclipu_wv_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff,
                                         vuint32mf2_t op1, vuint16mf4_t shift,
                                         size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint16mf4_t test_vnclipu_wx_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff,
                                         vuint32mf2_t op1, size_t shift,
                                         size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint16mf2_t test_vnclipu_wv_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff,
                                         vuint32m1_t op1, vuint16mf2_t shift,
                                         size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint16mf2_t test_vnclipu_wx_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff,
                                         vuint32m1_t op1, size_t shift,
                                         size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint16m1_t test_vnclipu_wv_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff,
                                       vuint32m2_t op1, vuint16m1_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint16m1_t test_vnclipu_wx_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff,
                                       vuint32m2_t op1, size_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint16m2_t test_vnclipu_wv_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff,
                                       vuint32m4_t op1, vuint16m2_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint16m2_t test_vnclipu_wx_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff,
                                       vuint32m4_t op1, size_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint16m4_t test_vnclipu_wv_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff,
                                       vuint32m8_t op1, vuint16m4_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint16m4_t test_vnclipu_wx_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff,
                                       vuint32m8_t op1, size_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint32mf2_t test_vnclipu_wv_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff,
                                         vuint64m1_t op1, vuint32mf2_t shift,
                                         size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint32mf2_t test_vnclipu_wx_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff,
                                         vuint64m1_t op1, size_t shift,
                                         size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint32m1_t test_vnclipu_wv_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff,
                                       vuint64m2_t op1, vuint32m1_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint32m1_t test_vnclipu_wx_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff,
                                       vuint64m2_t op1, size_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint32m2_t test_vnclipu_wv_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff,
                                       vuint64m4_t op1, vuint32m2_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint32m2_t test_vnclipu_wx_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff,
                                       vuint64m4_t op1, size_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint32m4_t test_vnclipu_wv_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff,
                                       vuint64m8_t op1, vuint32m4_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint32m4_t test_vnclipu_wx_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff,
                                       vuint64m8_t op1, size_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU,
                              vl);
}

vuint8mf8_t test_vnclipu_wv_u8mf8_mu(vbool64_t mask, vuint8mf8_t maskedoff,
                                     vuint16mf4_t op1, vuint8mf8_t shift,
                                     size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wx_u8mf8_mu(vbool64_t mask, vuint8mf8_t maskedoff,
                                     vuint16mf4_t op1, size_t shift,
                                     size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wv_u8mf4_mu(vbool32_t mask, vuint8mf4_t maskedoff,
                                     vuint16mf2_t op1, vuint8mf4_t shift,
                                     size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wx_u8mf4_mu(vbool32_t mask, vuint8mf4_t maskedoff,
                                     vuint16mf2_t op1, size_t shift,
                                     size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wv_u8mf2_mu(vbool16_t mask, vuint8mf2_t maskedoff,
                                     vuint16m1_t op1, vuint8mf2_t shift,
                                     size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wx_u8mf2_mu(vbool16_t mask, vuint8mf2_t maskedoff,
                                     vuint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wv_u8m1_mu(vbool8_t mask, vuint8m1_t maskedoff,
                                   vuint16m2_t op1, vuint8m1_t shift,
                                   size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wx_u8m1_mu(vbool8_t mask, vuint8m1_t maskedoff,
                                   vuint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wv_u8m2_mu(vbool4_t mask, vuint8m2_t maskedoff,
                                   vuint16m4_t op1, vuint8m2_t shift,
                                   size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wx_u8m2_mu(vbool4_t mask, vuint8m2_t maskedoff,
                                   vuint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wv_u8m4_mu(vbool2_t mask, vuint8m4_t maskedoff,
                                   vuint16m8_t op1, vuint8m4_t shift,
                                   size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wx_u8m4_mu(vbool2_t mask, vuint8m4_t maskedoff,
                                   vuint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wv_u16mf4_mu(vbool64_t mask, vuint16mf4_t maskedoff,
                                       vuint32mf2_t op1, vuint16mf4_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wx_u16mf4_mu(vbool64_t mask, vuint16mf4_t maskedoff,
                                       vuint32mf2_t op1, size_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wv_u16mf2_mu(vbool32_t mask, vuint16mf2_t maskedoff,
                                       vuint32m1_t op1, vuint16mf2_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wx_u16mf2_mu(vbool32_t mask, vuint16mf2_t maskedoff,
                                       vuint32m1_t op1, size_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wv_u16m1_mu(vbool16_t mask, vuint16m1_t maskedoff,
                                     vuint32m2_t op1, vuint16m1_t shift,
                                     size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wx_u16m1_mu(vbool16_t mask, vuint16m1_t maskedoff,
                                     vuint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wv_u16m2_mu(vbool8_t mask, vuint16m2_t maskedoff,
                                     vuint32m4_t op1, vuint16m2_t shift,
                                     size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wx_u16m2_mu(vbool8_t mask, vuint16m2_t maskedoff,
                                     vuint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wv_u16m4_mu(vbool4_t mask, vuint16m4_t maskedoff,
                                     vuint32m8_t op1, vuint16m4_t shift,
                                     size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wx_u16m4_mu(vbool4_t mask, vuint16m4_t maskedoff,
                                     vuint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wv_u32mf2_mu(vbool64_t mask, vuint32mf2_t maskedoff,
                                       vuint64m1_t op1, vuint32mf2_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wx_u32mf2_mu(vbool64_t mask, vuint32mf2_t maskedoff,
                                       vuint64m1_t op1, size_t shift,
                                       size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wv_u32m1_mu(vbool32_t mask, vuint32m1_t maskedoff,
                                     vuint64m2_t op1, vuint32m1_t shift,
                                     size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wx_u32m1_mu(vbool32_t mask, vuint32m1_t maskedoff,
                                     vuint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wv_u32m2_mu(vbool16_t mask, vuint32m2_t maskedoff,
                                     vuint64m4_t op1, vuint32m2_t shift,
                                     size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wx_u32m2_mu(vbool16_t mask, vuint32m2_t maskedoff,
                                     vuint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wv_u32m4_mu(vbool8_t mask, vuint32m4_t maskedoff,
                                     vuint64m8_t op1, vuint32m4_t shift,
                                     size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wx_u32m4_mu(vbool8_t mask, vuint32m4_t maskedoff,
                                     vuint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}
