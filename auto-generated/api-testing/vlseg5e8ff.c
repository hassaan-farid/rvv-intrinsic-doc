#include <riscv_vector.h>
#include <stdint.h>

vint8mf8x5_t test_vlseg5e8ff_v_i8mf8x5(const int8_t *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf8x5(rs1, new_vl, vl);
}

vint8mf4x5_t test_vlseg5e8ff_v_i8mf4x5(const int8_t *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf4x5(rs1, new_vl, vl);
}

vint8mf2x5_t test_vlseg5e8ff_v_i8mf2x5(const int8_t *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf2x5(rs1, new_vl, vl);
}

vint8m1x5_t test_vlseg5e8ff_v_i8m1x5(const int8_t *rs1, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vlseg5e8ff_v_i8m1x5(rs1, new_vl, vl);
}

vuint8mf8x5_t test_vlseg5e8ff_v_u8mf8x5(const uint8_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf8x5(rs1, new_vl, vl);
}

vuint8mf4x5_t test_vlseg5e8ff_v_u8mf4x5(const uint8_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf4x5(rs1, new_vl, vl);
}

vuint8mf2x5_t test_vlseg5e8ff_v_u8mf2x5(const uint8_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf2x5(rs1, new_vl, vl);
}

vuint8m1x5_t test_vlseg5e8ff_v_u8m1x5(const uint8_t *rs1, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vlseg5e8ff_v_u8m1x5(rs1, new_vl, vl);
}

vint8mf8x5_t test_vlseg5e8ff_v_i8mf8x5_m(vbool64_t vm, const int8_t *rs1,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf8x5_m(vm, rs1, new_vl, vl);
}

vint8mf4x5_t test_vlseg5e8ff_v_i8mf4x5_m(vbool32_t vm, const int8_t *rs1,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf4x5_m(vm, rs1, new_vl, vl);
}

vint8mf2x5_t test_vlseg5e8ff_v_i8mf2x5_m(vbool16_t vm, const int8_t *rs1,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf2x5_m(vm, rs1, new_vl, vl);
}

vint8m1x5_t test_vlseg5e8ff_v_i8m1x5_m(vbool8_t vm, const int8_t *rs1,
                                       size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8m1x5_m(vm, rs1, new_vl, vl);
}

vuint8mf8x5_t test_vlseg5e8ff_v_u8mf8x5_m(vbool64_t vm, const uint8_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf8x5_m(vm, rs1, new_vl, vl);
}

vuint8mf4x5_t test_vlseg5e8ff_v_u8mf4x5_m(vbool32_t vm, const uint8_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf4x5_m(vm, rs1, new_vl, vl);
}

vuint8mf2x5_t test_vlseg5e8ff_v_u8mf2x5_m(vbool16_t vm, const uint8_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf2x5_m(vm, rs1, new_vl, vl);
}

vuint8m1x5_t test_vlseg5e8ff_v_u8m1x5_m(vbool8_t vm, const uint8_t *rs1,
                                        size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8m1x5_m(vm, rs1, new_vl, vl);
}
