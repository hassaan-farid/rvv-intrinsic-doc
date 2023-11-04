#include <riscv_vector.h>
#include <stdint.h>

vfloat32mf2x6_t test_vlseg6e32_v_f32mf2x6(const float *rs1, size_t vl) {
  return __riscv_vlseg6e32_v_f32mf2x6(rs1, vl);
}

vfloat32m1x6_t test_vlseg6e32_v_f32m1x6(const float *rs1, size_t vl) {
  return __riscv_vlseg6e32_v_f32m1x6(rs1, vl);
}

vint32mf2x6_t test_vlseg6e32_v_i32mf2x6(const int32_t *rs1, size_t vl) {
  return __riscv_vlseg6e32_v_i32mf2x6(rs1, vl);
}

vint32m1x6_t test_vlseg6e32_v_i32m1x6(const int32_t *rs1, size_t vl) {
  return __riscv_vlseg6e32_v_i32m1x6(rs1, vl);
}

vuint32mf2x6_t test_vlseg6e32_v_u32mf2x6(const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg6e32_v_u32mf2x6(rs1, vl);
}

vuint32m1x6_t test_vlseg6e32_v_u32m1x6(const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg6e32_v_u32m1x6(rs1, vl);
}

vfloat32mf2x6_t test_vlseg6e32_v_f32mf2x6_m(vbool64_t vm, const float *rs1,
                                            size_t vl) {
  return __riscv_vlseg6e32_v_f32mf2x6_m(vm, rs1, vl);
}

vfloat32m1x6_t test_vlseg6e32_v_f32m1x6_m(vbool32_t vm, const float *rs1,
                                          size_t vl) {
  return __riscv_vlseg6e32_v_f32m1x6_m(vm, rs1, vl);
}

vint32mf2x6_t test_vlseg6e32_v_i32mf2x6_m(vbool64_t vm, const int32_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg6e32_v_i32mf2x6_m(vm, rs1, vl);
}

vint32m1x6_t test_vlseg6e32_v_i32m1x6_m(vbool32_t vm, const int32_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg6e32_v_i32m1x6_m(vm, rs1, vl);
}

vuint32mf2x6_t test_vlseg6e32_v_u32mf2x6_m(vbool64_t vm, const uint32_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg6e32_v_u32mf2x6_m(vm, rs1, vl);
}

vuint32m1x6_t test_vlseg6e32_v_u32m1x6_m(vbool32_t vm, const uint32_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg6e32_v_u32m1x6_m(vm, rs1, vl);
}
