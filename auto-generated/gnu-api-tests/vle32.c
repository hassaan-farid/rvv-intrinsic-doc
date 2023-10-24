/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat32mf2_t test_vle32_v_f32mf2(const float32_t *rs1, size_t vl) {
  return __riscv_vle32_v_f32mf2(rs1, vl);
}

vfloat32m1_t test_vle32_v_f32m1(const float32_t *rs1, size_t vl) {
  return __riscv_vle32_v_f32m1(rs1, vl);
}

vfloat32m2_t test_vle32_v_f32m2(const float32_t *rs1, size_t vl) {
  return __riscv_vle32_v_f32m2(rs1, vl);
}

vfloat32m4_t test_vle32_v_f32m4(const float32_t *rs1, size_t vl) {
  return __riscv_vle32_v_f32m4(rs1, vl);
}

vfloat32m8_t test_vle32_v_f32m8(const float32_t *rs1, size_t vl) {
  return __riscv_vle32_v_f32m8(rs1, vl);
}

vint32mf2_t test_vle32_v_i32mf2(const int32_t *rs1, size_t vl) {
  return __riscv_vle32_v_i32mf2(rs1, vl);
}

vint32m1_t test_vle32_v_i32m1(const int32_t *rs1, size_t vl) {
  return __riscv_vle32_v_i32m1(rs1, vl);
}

vint32m2_t test_vle32_v_i32m2(const int32_t *rs1, size_t vl) {
  return __riscv_vle32_v_i32m2(rs1, vl);
}

vint32m4_t test_vle32_v_i32m4(const int32_t *rs1, size_t vl) {
  return __riscv_vle32_v_i32m4(rs1, vl);
}

vint32m8_t test_vle32_v_i32m8(const int32_t *rs1, size_t vl) {
  return __riscv_vle32_v_i32m8(rs1, vl);
}

vuint32mf2_t test_vle32_v_u32mf2(const uint32_t *rs1, size_t vl) {
  return __riscv_vle32_v_u32mf2(rs1, vl);
}

vuint32m1_t test_vle32_v_u32m1(const uint32_t *rs1, size_t vl) {
  return __riscv_vle32_v_u32m1(rs1, vl);
}

vuint32m2_t test_vle32_v_u32m2(const uint32_t *rs1, size_t vl) {
  return __riscv_vle32_v_u32m2(rs1, vl);
}

vuint32m4_t test_vle32_v_u32m4(const uint32_t *rs1, size_t vl) {
  return __riscv_vle32_v_u32m4(rs1, vl);
}

vuint32m8_t test_vle32_v_u32m8(const uint32_t *rs1, size_t vl) {
  return __riscv_vle32_v_u32m8(rs1, vl);
}

vfloat32mf2_t test_vle32_v_f32mf2_m(vbool64_t vm, const float32_t *rs1, size_t vl) {
  return __riscv_vle32_v_f32mf2_m(vm, rs1, vl);
}

vfloat32m1_t test_vle32_v_f32m1_m(vbool32_t vm, const float32_t *rs1, size_t vl) {
  return __riscv_vle32_v_f32m1_m(vm, rs1, vl);
}

vfloat32m2_t test_vle32_v_f32m2_m(vbool16_t vm, const float32_t *rs1, size_t vl) {
  return __riscv_vle32_v_f32m2_m(vm, rs1, vl);
}

vfloat32m4_t test_vle32_v_f32m4_m(vbool8_t vm, const float32_t *rs1, size_t vl) {
  return __riscv_vle32_v_f32m4_m(vm, rs1, vl);
}

vfloat32m8_t test_vle32_v_f32m8_m(vbool4_t vm, const float32_t *rs1, size_t vl) {
  return __riscv_vle32_v_f32m8_m(vm, rs1, vl);
}

vint32mf2_t test_vle32_v_i32mf2_m(vbool64_t vm, const int32_t *rs1, size_t vl) {
  return __riscv_vle32_v_i32mf2_m(vm, rs1, vl);
}

vint32m1_t test_vle32_v_i32m1_m(vbool32_t vm, const int32_t *rs1, size_t vl) {
  return __riscv_vle32_v_i32m1_m(vm, rs1, vl);
}

vint32m2_t test_vle32_v_i32m2_m(vbool16_t vm, const int32_t *rs1, size_t vl) {
  return __riscv_vle32_v_i32m2_m(vm, rs1, vl);
}

vint32m4_t test_vle32_v_i32m4_m(vbool8_t vm, const int32_t *rs1, size_t vl) {
  return __riscv_vle32_v_i32m4_m(vm, rs1, vl);
}

vint32m8_t test_vle32_v_i32m8_m(vbool4_t vm, const int32_t *rs1, size_t vl) {
  return __riscv_vle32_v_i32m8_m(vm, rs1, vl);
}

vuint32mf2_t test_vle32_v_u32mf2_m(vbool64_t vm, const uint32_t *rs1, size_t vl) {
  return __riscv_vle32_v_u32mf2_m(vm, rs1, vl);
}

vuint32m1_t test_vle32_v_u32m1_m(vbool32_t vm, const uint32_t *rs1, size_t vl) {
  return __riscv_vle32_v_u32m1_m(vm, rs1, vl);
}

vuint32m2_t test_vle32_v_u32m2_m(vbool16_t vm, const uint32_t *rs1, size_t vl) {
  return __riscv_vle32_v_u32m2_m(vm, rs1, vl);
}

vuint32m4_t test_vle32_v_u32m4_m(vbool8_t vm, const uint32_t *rs1, size_t vl) {
  return __riscv_vle32_v_u32m4_m(vm, rs1, vl);
}

vuint32m8_t test_vle32_v_u32m8_m(vbool4_t vm, const uint32_t *rs1, size_t vl) {
  return __riscv_vle32_v_u32m8_m(vm, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vle32\.[ivxfswum.]+\s+} 30 } } */
