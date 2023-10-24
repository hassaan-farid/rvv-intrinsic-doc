/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat16mf4_t test_vfrdiv_vf_f16mf4_tu(vfloat16mf4_t vd, vfloat16mf4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16mf4_tu(vd, vs2, rs1, vl);
}

vfloat16mf2_t test_vfrdiv_vf_f16mf2_tu(vfloat16mf2_t vd, vfloat16mf2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16mf2_tu(vd, vs2, rs1, vl);
}

vfloat16m1_t test_vfrdiv_vf_f16m1_tu(vfloat16m1_t vd, vfloat16m1_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m1_tu(vd, vs2, rs1, vl);
}

vfloat16m2_t test_vfrdiv_vf_f16m2_tu(vfloat16m2_t vd, vfloat16m2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m2_tu(vd, vs2, rs1, vl);
}

vfloat16m4_t test_vfrdiv_vf_f16m4_tu(vfloat16m4_t vd, vfloat16m4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m4_tu(vd, vs2, rs1, vl);
}

vfloat16m8_t test_vfrdiv_vf_f16m8_tu(vfloat16m8_t vd, vfloat16m8_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m8_tu(vd, vs2, rs1, vl);
}

vfloat32mf2_t test_vfrdiv_vf_f32mf2_tu(vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32mf2_tu(vd, vs2, rs1, vl);
}

vfloat32m1_t test_vfrdiv_vf_f32m1_tu(vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m1_tu(vd, vs2, rs1, vl);
}

vfloat32m2_t test_vfrdiv_vf_f32m2_tu(vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m2_tu(vd, vs2, rs1, vl);
}

vfloat32m4_t test_vfrdiv_vf_f32m4_tu(vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m4_tu(vd, vs2, rs1, vl);
}

vfloat32m8_t test_vfrdiv_vf_f32m8_tu(vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m8_tu(vd, vs2, rs1, vl);
}

vfloat64m1_t test_vfrdiv_vf_f64m1_tu(vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m1_tu(vd, vs2, rs1, vl);
}

vfloat64m2_t test_vfrdiv_vf_f64m2_tu(vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m2_tu(vd, vs2, rs1, vl);
}

vfloat64m4_t test_vfrdiv_vf_f64m4_tu(vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m4_tu(vd, vs2, rs1, vl);
}

vfloat64m8_t test_vfrdiv_vf_f64m8_tu(vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m8_tu(vd, vs2, rs1, vl);
}

vfloat16mf4_t test_vfrdiv_vf_f16mf4_tum(vbool64_t vm, vfloat16mf4_t vd, vfloat16mf4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16mf4_tum(vm, vd, vs2, rs1, vl);
}

vfloat16mf2_t test_vfrdiv_vf_f16mf2_tum(vbool32_t vm, vfloat16mf2_t vd, vfloat16mf2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16mf2_tum(vm, vd, vs2, rs1, vl);
}

vfloat16m1_t test_vfrdiv_vf_f16m1_tum(vbool16_t vm, vfloat16m1_t vd, vfloat16m1_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m1_tum(vm, vd, vs2, rs1, vl);
}

vfloat16m2_t test_vfrdiv_vf_f16m2_tum(vbool8_t vm, vfloat16m2_t vd, vfloat16m2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m2_tum(vm, vd, vs2, rs1, vl);
}

vfloat16m4_t test_vfrdiv_vf_f16m4_tum(vbool4_t vm, vfloat16m4_t vd, vfloat16m4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m4_tum(vm, vd, vs2, rs1, vl);
}

vfloat16m8_t test_vfrdiv_vf_f16m8_tum(vbool2_t vm, vfloat16m8_t vd, vfloat16m8_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m8_tum(vm, vd, vs2, rs1, vl);
}

vfloat32mf2_t test_vfrdiv_vf_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32mf2_tum(vm, vd, vs2, rs1, vl);
}

vfloat32m1_t test_vfrdiv_vf_f32m1_tum(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m1_tum(vm, vd, vs2, rs1, vl);
}

vfloat32m2_t test_vfrdiv_vf_f32m2_tum(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m2_tum(vm, vd, vs2, rs1, vl);
}

vfloat32m4_t test_vfrdiv_vf_f32m4_tum(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m4_tum(vm, vd, vs2, rs1, vl);
}

vfloat32m8_t test_vfrdiv_vf_f32m8_tum(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m8_tum(vm, vd, vs2, rs1, vl);
}

vfloat64m1_t test_vfrdiv_vf_f64m1_tum(vbool64_t vm, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m1_tum(vm, vd, vs2, rs1, vl);
}

vfloat64m2_t test_vfrdiv_vf_f64m2_tum(vbool32_t vm, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m2_tum(vm, vd, vs2, rs1, vl);
}

vfloat64m4_t test_vfrdiv_vf_f64m4_tum(vbool16_t vm, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m4_tum(vm, vd, vs2, rs1, vl);
}

vfloat64m8_t test_vfrdiv_vf_f64m8_tum(vbool8_t vm, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m8_tum(vm, vd, vs2, rs1, vl);
}

vfloat16mf4_t test_vfrdiv_vf_f16mf4_tumu(vbool64_t vm, vfloat16mf4_t vd, vfloat16mf4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16mf4_tumu(vm, vd, vs2, rs1, vl);
}

vfloat16mf2_t test_vfrdiv_vf_f16mf2_tumu(vbool32_t vm, vfloat16mf2_t vd, vfloat16mf2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16mf2_tumu(vm, vd, vs2, rs1, vl);
}

vfloat16m1_t test_vfrdiv_vf_f16m1_tumu(vbool16_t vm, vfloat16m1_t vd, vfloat16m1_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m1_tumu(vm, vd, vs2, rs1, vl);
}

vfloat16m2_t test_vfrdiv_vf_f16m2_tumu(vbool8_t vm, vfloat16m2_t vd, vfloat16m2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m2_tumu(vm, vd, vs2, rs1, vl);
}

vfloat16m4_t test_vfrdiv_vf_f16m4_tumu(vbool4_t vm, vfloat16m4_t vd, vfloat16m4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m4_tumu(vm, vd, vs2, rs1, vl);
}

vfloat16m8_t test_vfrdiv_vf_f16m8_tumu(vbool2_t vm, vfloat16m8_t vd, vfloat16m8_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m8_tumu(vm, vd, vs2, rs1, vl);
}

vfloat32mf2_t test_vfrdiv_vf_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32mf2_tumu(vm, vd, vs2, rs1, vl);
}

vfloat32m1_t test_vfrdiv_vf_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m1_tumu(vm, vd, vs2, rs1, vl);
}

vfloat32m2_t test_vfrdiv_vf_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m2_tumu(vm, vd, vs2, rs1, vl);
}

vfloat32m4_t test_vfrdiv_vf_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m4_tumu(vm, vd, vs2, rs1, vl);
}

vfloat32m8_t test_vfrdiv_vf_f32m8_tumu(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m8_tumu(vm, vd, vs2, rs1, vl);
}

vfloat64m1_t test_vfrdiv_vf_f64m1_tumu(vbool64_t vm, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m1_tumu(vm, vd, vs2, rs1, vl);
}

vfloat64m2_t test_vfrdiv_vf_f64m2_tumu(vbool32_t vm, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m2_tumu(vm, vd, vs2, rs1, vl);
}

vfloat64m4_t test_vfrdiv_vf_f64m4_tumu(vbool16_t vm, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m4_tumu(vm, vd, vs2, rs1, vl);
}

vfloat64m8_t test_vfrdiv_vf_f64m8_tumu(vbool8_t vm, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m8_tumu(vm, vd, vs2, rs1, vl);
}

vfloat16mf4_t test_vfrdiv_vf_f16mf4_mu(vbool64_t vm, vfloat16mf4_t vd, vfloat16mf4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16mf4_mu(vm, vd, vs2, rs1, vl);
}

vfloat16mf2_t test_vfrdiv_vf_f16mf2_mu(vbool32_t vm, vfloat16mf2_t vd, vfloat16mf2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16mf2_mu(vm, vd, vs2, rs1, vl);
}

vfloat16m1_t test_vfrdiv_vf_f16m1_mu(vbool16_t vm, vfloat16m1_t vd, vfloat16m1_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m1_mu(vm, vd, vs2, rs1, vl);
}

vfloat16m2_t test_vfrdiv_vf_f16m2_mu(vbool8_t vm, vfloat16m2_t vd, vfloat16m2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m2_mu(vm, vd, vs2, rs1, vl);
}

vfloat16m4_t test_vfrdiv_vf_f16m4_mu(vbool4_t vm, vfloat16m4_t vd, vfloat16m4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m4_mu(vm, vd, vs2, rs1, vl);
}

vfloat16m8_t test_vfrdiv_vf_f16m8_mu(vbool2_t vm, vfloat16m8_t vd, vfloat16m8_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m8_mu(vm, vd, vs2, rs1, vl);
}

vfloat32mf2_t test_vfrdiv_vf_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32mf2_mu(vm, vd, vs2, rs1, vl);
}

vfloat32m1_t test_vfrdiv_vf_f32m1_mu(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m1_mu(vm, vd, vs2, rs1, vl);
}

vfloat32m2_t test_vfrdiv_vf_f32m2_mu(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m2_mu(vm, vd, vs2, rs1, vl);
}

vfloat32m4_t test_vfrdiv_vf_f32m4_mu(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m4_mu(vm, vd, vs2, rs1, vl);
}

vfloat32m8_t test_vfrdiv_vf_f32m8_mu(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m8_mu(vm, vd, vs2, rs1, vl);
}

vfloat64m1_t test_vfrdiv_vf_f64m1_mu(vbool64_t vm, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m1_mu(vm, vd, vs2, rs1, vl);
}

vfloat64m2_t test_vfrdiv_vf_f64m2_mu(vbool32_t vm, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m2_mu(vm, vd, vs2, rs1, vl);
}

vfloat64m4_t test_vfrdiv_vf_f64m4_mu(vbool16_t vm, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m4_mu(vm, vd, vs2, rs1, vl);
}

vfloat64m8_t test_vfrdiv_vf_f64m8_mu(vbool8_t vm, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m8_mu(vm, vd, vs2, rs1, vl);
}

vfloat16mf4_t test_vfrdiv_vf_f16mf4_rm_tu(vfloat16mf4_t vd, vfloat16mf4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16mf4_rm_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfrdiv_vf_f16mf2_rm_tu(vfloat16mf2_t vd, vfloat16mf2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16mf2_rm_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfrdiv_vf_f16m1_rm_tu(vfloat16m1_t vd, vfloat16m1_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m1_rm_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfrdiv_vf_f16m2_rm_tu(vfloat16m2_t vd, vfloat16m2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m2_rm_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfrdiv_vf_f16m4_rm_tu(vfloat16m4_t vd, vfloat16m4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m4_rm_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfrdiv_vf_f16m8_rm_tu(vfloat16m8_t vd, vfloat16m8_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m8_rm_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfrdiv_vf_f32mf2_rm_tu(vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32mf2_rm_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfrdiv_vf_f32m1_rm_tu(vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m1_rm_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfrdiv_vf_f32m2_rm_tu(vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m2_rm_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfrdiv_vf_f32m4_rm_tu(vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m4_rm_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfrdiv_vf_f32m8_rm_tu(vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m8_rm_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfrdiv_vf_f64m1_rm_tu(vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m1_rm_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfrdiv_vf_f64m2_rm_tu(vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m2_rm_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfrdiv_vf_f64m4_rm_tu(vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m4_rm_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfrdiv_vf_f64m8_rm_tu(vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m8_rm_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfrdiv_vf_f16mf4_rm_tum(vbool64_t vm, vfloat16mf4_t vd, vfloat16mf4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16mf4_rm_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfrdiv_vf_f16mf2_rm_tum(vbool32_t vm, vfloat16mf2_t vd, vfloat16mf2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16mf2_rm_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfrdiv_vf_f16m1_rm_tum(vbool16_t vm, vfloat16m1_t vd, vfloat16m1_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m1_rm_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfrdiv_vf_f16m2_rm_tum(vbool8_t vm, vfloat16m2_t vd, vfloat16m2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m2_rm_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfrdiv_vf_f16m4_rm_tum(vbool4_t vm, vfloat16m4_t vd, vfloat16m4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m4_rm_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfrdiv_vf_f16m8_rm_tum(vbool2_t vm, vfloat16m8_t vd, vfloat16m8_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m8_rm_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfrdiv_vf_f32mf2_rm_tum(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32mf2_rm_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfrdiv_vf_f32m1_rm_tum(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m1_rm_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfrdiv_vf_f32m2_rm_tum(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m2_rm_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfrdiv_vf_f32m4_rm_tum(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m4_rm_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfrdiv_vf_f32m8_rm_tum(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m8_rm_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfrdiv_vf_f64m1_rm_tum(vbool64_t vm, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m1_rm_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfrdiv_vf_f64m2_rm_tum(vbool32_t vm, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m2_rm_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfrdiv_vf_f64m4_rm_tum(vbool16_t vm, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m4_rm_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfrdiv_vf_f64m8_rm_tum(vbool8_t vm, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m8_rm_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfrdiv_vf_f16mf4_rm_tumu(vbool64_t vm, vfloat16mf4_t vd, vfloat16mf4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16mf4_rm_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfrdiv_vf_f16mf2_rm_tumu(vbool32_t vm, vfloat16mf2_t vd, vfloat16mf2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16mf2_rm_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfrdiv_vf_f16m1_rm_tumu(vbool16_t vm, vfloat16m1_t vd, vfloat16m1_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m1_rm_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfrdiv_vf_f16m2_rm_tumu(vbool8_t vm, vfloat16m2_t vd, vfloat16m2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m2_rm_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfrdiv_vf_f16m4_rm_tumu(vbool4_t vm, vfloat16m4_t vd, vfloat16m4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m4_rm_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfrdiv_vf_f16m8_rm_tumu(vbool2_t vm, vfloat16m8_t vd, vfloat16m8_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m8_rm_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfrdiv_vf_f32mf2_rm_tumu(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32mf2_rm_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfrdiv_vf_f32m1_rm_tumu(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m1_rm_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfrdiv_vf_f32m2_rm_tumu(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m2_rm_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfrdiv_vf_f32m4_rm_tumu(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m4_rm_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfrdiv_vf_f32m8_rm_tumu(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m8_rm_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfrdiv_vf_f64m1_rm_tumu(vbool64_t vm, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m1_rm_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfrdiv_vf_f64m2_rm_tumu(vbool32_t vm, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m2_rm_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfrdiv_vf_f64m4_rm_tumu(vbool16_t vm, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m4_rm_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfrdiv_vf_f64m8_rm_tumu(vbool8_t vm, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m8_rm_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfrdiv_vf_f16mf4_rm_mu(vbool64_t vm, vfloat16mf4_t vd, vfloat16mf4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16mf4_rm_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfrdiv_vf_f16mf2_rm_mu(vbool32_t vm, vfloat16mf2_t vd, vfloat16mf2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16mf2_rm_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfrdiv_vf_f16m1_rm_mu(vbool16_t vm, vfloat16m1_t vd, vfloat16m1_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m1_rm_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfrdiv_vf_f16m2_rm_mu(vbool8_t vm, vfloat16m2_t vd, vfloat16m2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m2_rm_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfrdiv_vf_f16m4_rm_mu(vbool4_t vm, vfloat16m4_t vd, vfloat16m4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m4_rm_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfrdiv_vf_f16m8_rm_mu(vbool2_t vm, vfloat16m8_t vd, vfloat16m8_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f16m8_rm_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfrdiv_vf_f32mf2_rm_mu(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32mf2_rm_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfrdiv_vf_f32m1_rm_mu(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m1_rm_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfrdiv_vf_f32m2_rm_mu(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m2_rm_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfrdiv_vf_f32m4_rm_mu(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m4_rm_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfrdiv_vf_f32m8_rm_mu(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f32m8_rm_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfrdiv_vf_f64m1_rm_mu(vbool64_t vm, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m1_rm_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfrdiv_vf_f64m2_rm_mu(vbool32_t vm, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m2_rm_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfrdiv_vf_f64m4_rm_mu(vbool16_t vm, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m4_rm_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfrdiv_vf_f64m8_rm_mu(vbool8_t vm, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vfrdiv_vf_f64m8_rm_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfrdiv\.[ivxfswum.]+\s+} 120 } } */
