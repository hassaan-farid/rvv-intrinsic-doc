#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat16mf4x3_t test_vlseg3e16_v_f16mf4x3_m(vbool64_t vm, const float16_t *rs1,
                                            size_t vl) {
  return __riscv_vlseg3e16(vm, rs1, vl);
}

vfloat16mf2x3_t test_vlseg3e16_v_f16mf2x3_m(vbool32_t vm, const float16_t *rs1,
                                            size_t vl) {
  return __riscv_vlseg3e16(vm, rs1, vl);
}

vfloat16m1x3_t test_vlseg3e16_v_f16m1x3_m(vbool16_t vm, const float16_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg3e16(vm, rs1, vl);
}

vfloat16m2x3_t test_vlseg3e16_v_f16m2x3_m(vbool8_t vm, const float16_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg3e16(vm, rs1, vl);
}

vint16mf4x3_t test_vlseg3e16_v_i16mf4x3_m(vbool64_t vm, const int16_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg3e16(vm, rs1, vl);
}

vint16mf2x3_t test_vlseg3e16_v_i16mf2x3_m(vbool32_t vm, const int16_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg3e16(vm, rs1, vl);
}

vint16m1x3_t test_vlseg3e16_v_i16m1x3_m(vbool16_t vm, const int16_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg3e16(vm, rs1, vl);
}

vint16m2x3_t test_vlseg3e16_v_i16m2x3_m(vbool8_t vm, const int16_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg3e16(vm, rs1, vl);
}

vuint16mf4x3_t test_vlseg3e16_v_u16mf4x3_m(vbool64_t vm, const uint16_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg3e16(vm, rs1, vl);
}

vuint16mf2x3_t test_vlseg3e16_v_u16mf2x3_m(vbool32_t vm, const uint16_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg3e16(vm, rs1, vl);
}

vuint16m1x3_t test_vlseg3e16_v_u16m1x3_m(vbool16_t vm, const uint16_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg3e16(vm, rs1, vl);
}

vuint16m2x3_t test_vlseg3e16_v_u16m2x3_m(vbool8_t vm, const uint16_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg3e16(vm, rs1, vl);
}
