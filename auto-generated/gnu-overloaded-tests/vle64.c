/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat64m1_t test_vle64_v_f64m1_m(vbool64_t vm, const double *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vfloat64m2_t test_vle64_v_f64m2_m(vbool32_t vm, const double *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vfloat64m4_t test_vle64_v_f64m4_m(vbool16_t vm, const double *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vfloat64m8_t test_vle64_v_f64m8_m(vbool8_t vm, const double *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vint64m1_t test_vle64_v_i64m1_m(vbool64_t vm, const int64_t *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vint64m2_t test_vle64_v_i64m2_m(vbool32_t vm, const int64_t *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vint64m4_t test_vle64_v_i64m4_m(vbool16_t vm, const int64_t *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vint64m8_t test_vle64_v_i64m8_m(vbool8_t vm, const int64_t *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vuint64m1_t test_vle64_v_u64m1_m(vbool64_t vm, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vuint64m2_t test_vle64_v_u64m2_m(vbool32_t vm, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vuint64m4_t test_vle64_v_u64m4_m(vbool16_t vm, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vuint64m8_t test_vle64_v_u64m8_m(vbool8_t vm, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vle64\.[ivxfswum.]+\s+} 12 } } */
