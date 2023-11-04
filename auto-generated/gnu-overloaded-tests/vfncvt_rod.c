/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4(vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vs2, vl);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2(vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vs2, vl);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1(vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vs2, vl);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2(vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vs2, vl);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4(vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vs2, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2(vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vs2, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1(vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vs2, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2(vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vs2, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4(vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vs2, vl);
}

vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4_m(vbool64_t vm, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vm, vs2, vl);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2_m(vbool32_t vm, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vm, vs2, vl);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1_m(vbool16_t vm, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vm, vs2, vl);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2_m(vbool8_t vm, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vm, vs2, vl);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4_m(vbool4_t vm, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vm, vs2, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_m(vbool64_t vm, vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vm, vs2, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_m(vbool32_t vm, vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vm, vs2, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_m(vbool16_t vm, vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vm, vs2, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_m(vbool8_t vm, vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f(vm, vs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfncvt\.rod[ivxfswum.]*\s+} 18 } } */
