/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vlse32_v_f32mf2_tu(vfloat32mf2_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32mf2_tu(vd, rs1, rs2, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_tu(vfloat32m1_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32m1_tu(vd, rs1, rs2, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_tu(vfloat32m2_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32m2_tu(vd, rs1, rs2, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_tu(vfloat32m4_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32m4_tu(vd, rs1, rs2, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_tu(vfloat32m8_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32m8_tu(vd, rs1, rs2, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_tu(vint32mf2_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32mf2_tu(vd, rs1, rs2, vl);
}

vint32m1_t test_vlse32_v_i32m1_tu(vint32m1_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32m1_tu(vd, rs1, rs2, vl);
}

vint32m2_t test_vlse32_v_i32m2_tu(vint32m2_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32m2_tu(vd, rs1, rs2, vl);
}

vint32m4_t test_vlse32_v_i32m4_tu(vint32m4_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32m4_tu(vd, rs1, rs2, vl);
}

vint32m8_t test_vlse32_v_i32m8_tu(vint32m8_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32m8_tu(vd, rs1, rs2, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_tu(vuint32mf2_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32mf2_tu(vd, rs1, rs2, vl);
}

vuint32m1_t test_vlse32_v_u32m1_tu(vuint32m1_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32m1_tu(vd, rs1, rs2, vl);
}

vuint32m2_t test_vlse32_v_u32m2_tu(vuint32m2_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32m2_tu(vd, rs1, rs2, vl);
}

vuint32m4_t test_vlse32_v_u32m4_tu(vuint32m4_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32m4_tu(vd, rs1, rs2, vl);
}

vuint32m8_t test_vlse32_v_u32m8_tu(vuint32m8_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32m8_tu(vd, rs1, rs2, vl);
}

vfloat32mf2_t test_vlse32_v_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32mf2_tum(vm, vd, rs1, rs2, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_tum(vbool32_t vm, vfloat32m1_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32m1_tum(vm, vd, rs1, rs2, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_tum(vbool16_t vm, vfloat32m2_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32m2_tum(vm, vd, rs1, rs2, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_tum(vbool8_t vm, vfloat32m4_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32m4_tum(vm, vd, rs1, rs2, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_tum(vbool4_t vm, vfloat32m8_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32m8_tum(vm, vd, rs1, rs2, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_tum(vbool64_t vm, vint32mf2_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32mf2_tum(vm, vd, rs1, rs2, vl);
}

vint32m1_t test_vlse32_v_i32m1_tum(vbool32_t vm, vint32m1_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32m1_tum(vm, vd, rs1, rs2, vl);
}

vint32m2_t test_vlse32_v_i32m2_tum(vbool16_t vm, vint32m2_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32m2_tum(vm, vd, rs1, rs2, vl);
}

vint32m4_t test_vlse32_v_i32m4_tum(vbool8_t vm, vint32m4_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32m4_tum(vm, vd, rs1, rs2, vl);
}

vint32m8_t test_vlse32_v_i32m8_tum(vbool4_t vm, vint32m8_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32m8_tum(vm, vd, rs1, rs2, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_tum(vbool64_t vm, vuint32mf2_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32mf2_tum(vm, vd, rs1, rs2, vl);
}

vuint32m1_t test_vlse32_v_u32m1_tum(vbool32_t vm, vuint32m1_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32m1_tum(vm, vd, rs1, rs2, vl);
}

vuint32m2_t test_vlse32_v_u32m2_tum(vbool16_t vm, vuint32m2_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32m2_tum(vm, vd, rs1, rs2, vl);
}

vuint32m4_t test_vlse32_v_u32m4_tum(vbool8_t vm, vuint32m4_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32m4_tum(vm, vd, rs1, rs2, vl);
}

vuint32m8_t test_vlse32_v_u32m8_tum(vbool4_t vm, vuint32m8_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32m8_tum(vm, vd, rs1, rs2, vl);
}

vfloat32mf2_t test_vlse32_v_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32mf2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32m1_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32m2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32m4_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_tumu(vbool4_t vm, vfloat32m8_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32m8_tumu(vm, vd, rs1, rs2, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_tumu(vbool64_t vm, vint32mf2_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32mf2_tumu(vm, vd, rs1, rs2, vl);
}

vint32m1_t test_vlse32_v_i32m1_tumu(vbool32_t vm, vint32m1_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32m1_tumu(vm, vd, rs1, rs2, vl);
}

vint32m2_t test_vlse32_v_i32m2_tumu(vbool16_t vm, vint32m2_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32m2_tumu(vm, vd, rs1, rs2, vl);
}

vint32m4_t test_vlse32_v_i32m4_tumu(vbool8_t vm, vint32m4_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32m4_tumu(vm, vd, rs1, rs2, vl);
}

vint32m8_t test_vlse32_v_i32m8_tumu(vbool4_t vm, vint32m8_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32m8_tumu(vm, vd, rs1, rs2, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_tumu(vbool64_t vm, vuint32mf2_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32mf2_tumu(vm, vd, rs1, rs2, vl);
}

vuint32m1_t test_vlse32_v_u32m1_tumu(vbool32_t vm, vuint32m1_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32m1_tumu(vm, vd, rs1, rs2, vl);
}

vuint32m2_t test_vlse32_v_u32m2_tumu(vbool16_t vm, vuint32m2_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32m2_tumu(vm, vd, rs1, rs2, vl);
}

vuint32m4_t test_vlse32_v_u32m4_tumu(vbool8_t vm, vuint32m4_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32m4_tumu(vm, vd, rs1, rs2, vl);
}

vuint32m8_t test_vlse32_v_u32m8_tumu(vbool4_t vm, vuint32m8_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32m8_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32mf2_t test_vlse32_v_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32mf2_mu(vm, vd, rs1, rs2, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_mu(vbool32_t vm, vfloat32m1_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32m1_mu(vm, vd, rs1, rs2, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_mu(vbool16_t vm, vfloat32m2_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32m2_mu(vm, vd, rs1, rs2, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_mu(vbool8_t vm, vfloat32m4_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32m4_mu(vm, vd, rs1, rs2, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_mu(vbool4_t vm, vfloat32m8_t vd, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_f32m8_mu(vm, vd, rs1, rs2, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_mu(vbool64_t vm, vint32mf2_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32mf2_mu(vm, vd, rs1, rs2, vl);
}

vint32m1_t test_vlse32_v_i32m1_mu(vbool32_t vm, vint32m1_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32m1_mu(vm, vd, rs1, rs2, vl);
}

vint32m2_t test_vlse32_v_i32m2_mu(vbool16_t vm, vint32m2_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32m2_mu(vm, vd, rs1, rs2, vl);
}

vint32m4_t test_vlse32_v_i32m4_mu(vbool8_t vm, vint32m4_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32m4_mu(vm, vd, rs1, rs2, vl);
}

vint32m8_t test_vlse32_v_i32m8_mu(vbool4_t vm, vint32m8_t vd, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_i32m8_mu(vm, vd, rs1, rs2, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_mu(vbool64_t vm, vuint32mf2_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32mf2_mu(vm, vd, rs1, rs2, vl);
}

vuint32m1_t test_vlse32_v_u32m1_mu(vbool32_t vm, vuint32m1_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32m1_mu(vm, vd, rs1, rs2, vl);
}

vuint32m2_t test_vlse32_v_u32m2_mu(vbool16_t vm, vuint32m2_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32m2_mu(vm, vd, rs1, rs2, vl);
}

vuint32m4_t test_vlse32_v_u32m4_mu(vbool8_t vm, vuint32m4_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32m4_mu(vm, vd, rs1, rs2, vl);
}

vuint32m8_t test_vlse32_v_u32m8_mu(vbool4_t vm, vuint32m8_t vd, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32_v_u32m8_mu(vm, vd, rs1, rs2, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlse32\.[ivxfswum.]+\s+} 60 } } */
