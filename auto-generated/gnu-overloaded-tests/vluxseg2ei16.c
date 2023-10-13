/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4x2_t test_vluxseg2ei16_v_f16mf4x2(const float16_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vfloat16mf2x2_t test_vluxseg2ei16_v_f16mf2x2(const float16_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vfloat16m1x2_t test_vluxseg2ei16_v_f16m1x2(const float16_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vfloat16m2x2_t test_vluxseg2ei16_v_f16m2x2(const float16_t *rs1, vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vfloat16m4x2_t test_vluxseg2ei16_v_f16m4x2(const float16_t *rs1, vuint16m4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vfloat32mf2x2_t test_vluxseg2ei16_v_f32mf2x2(const float32_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vfloat32m1x2_t test_vluxseg2ei16_v_f32m1x2(const float32_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vfloat32m2x2_t test_vluxseg2ei16_v_f32m2x2(const float32_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vfloat32m4x2_t test_vluxseg2ei16_v_f32m4x2(const float32_t *rs1, vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vfloat64m1x2_t test_vluxseg2ei16_v_f64m1x2(const float64_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vfloat64m2x2_t test_vluxseg2ei16_v_f64m2x2(const float64_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vfloat64m4x2_t test_vluxseg2ei16_v_f64m4x2(const float64_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint8mf8x2_t test_vluxseg2ei16_v_i8mf8x2(const int8_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint8mf4x2_t test_vluxseg2ei16_v_i8mf4x2(const int8_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint8mf2x2_t test_vluxseg2ei16_v_i8mf2x2(const int8_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint8m1x2_t test_vluxseg2ei16_v_i8m1x2(const int8_t *rs1, vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint8m2x2_t test_vluxseg2ei16_v_i8m2x2(const int8_t *rs1, vuint16m4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint8m4x2_t test_vluxseg2ei16_v_i8m4x2(const int8_t *rs1, vuint16m8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint16mf4x2_t test_vluxseg2ei16_v_i16mf4x2(const int16_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint16mf2x2_t test_vluxseg2ei16_v_i16mf2x2(const int16_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint16m1x2_t test_vluxseg2ei16_v_i16m1x2(const int16_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint16m2x2_t test_vluxseg2ei16_v_i16m2x2(const int16_t *rs1, vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint16m4x2_t test_vluxseg2ei16_v_i16m4x2(const int16_t *rs1, vuint16m4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint32mf2x2_t test_vluxseg2ei16_v_i32mf2x2(const int32_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint32m1x2_t test_vluxseg2ei16_v_i32m1x2(const int32_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint32m2x2_t test_vluxseg2ei16_v_i32m2x2(const int32_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint32m4x2_t test_vluxseg2ei16_v_i32m4x2(const int32_t *rs1, vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint64m1x2_t test_vluxseg2ei16_v_i64m1x2(const int64_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint64m2x2_t test_vluxseg2ei16_v_i64m2x2(const int64_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vint64m4x2_t test_vluxseg2ei16_v_i64m4x2(const int64_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint8mf8x2_t test_vluxseg2ei16_v_u8mf8x2(const uint8_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint8mf4x2_t test_vluxseg2ei16_v_u8mf4x2(const uint8_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint8mf2x2_t test_vluxseg2ei16_v_u8mf2x2(const uint8_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint8m1x2_t test_vluxseg2ei16_v_u8m1x2(const uint8_t *rs1, vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint8m2x2_t test_vluxseg2ei16_v_u8m2x2(const uint8_t *rs1, vuint16m4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint8m4x2_t test_vluxseg2ei16_v_u8m4x2(const uint8_t *rs1, vuint16m8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint16mf4x2_t test_vluxseg2ei16_v_u16mf4x2(const uint16_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint16mf2x2_t test_vluxseg2ei16_v_u16mf2x2(const uint16_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint16m1x2_t test_vluxseg2ei16_v_u16m1x2(const uint16_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint16m2x2_t test_vluxseg2ei16_v_u16m2x2(const uint16_t *rs1, vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint16m4x2_t test_vluxseg2ei16_v_u16m4x2(const uint16_t *rs1, vuint16m4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint32mf2x2_t test_vluxseg2ei16_v_u32mf2x2(const uint32_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint32m1x2_t test_vluxseg2ei16_v_u32m1x2(const uint32_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint32m2x2_t test_vluxseg2ei16_v_u32m2x2(const uint32_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint32m4x2_t test_vluxseg2ei16_v_u32m4x2(const uint32_t *rs1, vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint64m1x2_t test_vluxseg2ei16_v_u64m1x2(const uint64_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint64m2x2_t test_vluxseg2ei16_v_u64m2x2(const uint64_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vuint64m4x2_t test_vluxseg2ei16_v_u64m4x2(const uint64_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(rs1, rs2, vl);
}

vfloat16mf4x2_t test_vluxseg2ei16_v_f16mf4x2_m(vbool64_t vm, const float16_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vfloat16mf2x2_t test_vluxseg2ei16_v_f16mf2x2_m(vbool32_t vm, const float16_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vfloat16m1x2_t test_vluxseg2ei16_v_f16m1x2_m(vbool16_t vm, const float16_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vfloat16m2x2_t test_vluxseg2ei16_v_f16m2x2_m(vbool8_t vm, const float16_t *rs1, vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vfloat16m4x2_t test_vluxseg2ei16_v_f16m4x2_m(vbool4_t vm, const float16_t *rs1, vuint16m4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vfloat32mf2x2_t test_vluxseg2ei16_v_f32mf2x2_m(vbool64_t vm, const float32_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vfloat32m1x2_t test_vluxseg2ei16_v_f32m1x2_m(vbool32_t vm, const float32_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vfloat32m2x2_t test_vluxseg2ei16_v_f32m2x2_m(vbool16_t vm, const float32_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vfloat32m4x2_t test_vluxseg2ei16_v_f32m4x2_m(vbool8_t vm, const float32_t *rs1, vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vfloat64m1x2_t test_vluxseg2ei16_v_f64m1x2_m(vbool64_t vm, const float64_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vfloat64m2x2_t test_vluxseg2ei16_v_f64m2x2_m(vbool32_t vm, const float64_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vfloat64m4x2_t test_vluxseg2ei16_v_f64m4x2_m(vbool16_t vm, const float64_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint8mf8x2_t test_vluxseg2ei16_v_i8mf8x2_m(vbool64_t vm, const int8_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint8mf4x2_t test_vluxseg2ei16_v_i8mf4x2_m(vbool32_t vm, const int8_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint8mf2x2_t test_vluxseg2ei16_v_i8mf2x2_m(vbool16_t vm, const int8_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint8m1x2_t test_vluxseg2ei16_v_i8m1x2_m(vbool8_t vm, const int8_t *rs1, vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint8m2x2_t test_vluxseg2ei16_v_i8m2x2_m(vbool4_t vm, const int8_t *rs1, vuint16m4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint8m4x2_t test_vluxseg2ei16_v_i8m4x2_m(vbool2_t vm, const int8_t *rs1, vuint16m8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint16mf4x2_t test_vluxseg2ei16_v_i16mf4x2_m(vbool64_t vm, const int16_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint16mf2x2_t test_vluxseg2ei16_v_i16mf2x2_m(vbool32_t vm, const int16_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint16m1x2_t test_vluxseg2ei16_v_i16m1x2_m(vbool16_t vm, const int16_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint16m2x2_t test_vluxseg2ei16_v_i16m2x2_m(vbool8_t vm, const int16_t *rs1, vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint16m4x2_t test_vluxseg2ei16_v_i16m4x2_m(vbool4_t vm, const int16_t *rs1, vuint16m4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint32mf2x2_t test_vluxseg2ei16_v_i32mf2x2_m(vbool64_t vm, const int32_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint32m1x2_t test_vluxseg2ei16_v_i32m1x2_m(vbool32_t vm, const int32_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint32m2x2_t test_vluxseg2ei16_v_i32m2x2_m(vbool16_t vm, const int32_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint32m4x2_t test_vluxseg2ei16_v_i32m4x2_m(vbool8_t vm, const int32_t *rs1, vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint64m1x2_t test_vluxseg2ei16_v_i64m1x2_m(vbool64_t vm, const int64_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint64m2x2_t test_vluxseg2ei16_v_i64m2x2_m(vbool32_t vm, const int64_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vint64m4x2_t test_vluxseg2ei16_v_i64m4x2_m(vbool16_t vm, const int64_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint8mf8x2_t test_vluxseg2ei16_v_u8mf8x2_m(vbool64_t vm, const uint8_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint8mf4x2_t test_vluxseg2ei16_v_u8mf4x2_m(vbool32_t vm, const uint8_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint8mf2x2_t test_vluxseg2ei16_v_u8mf2x2_m(vbool16_t vm, const uint8_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint8m1x2_t test_vluxseg2ei16_v_u8m1x2_m(vbool8_t vm, const uint8_t *rs1, vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint8m2x2_t test_vluxseg2ei16_v_u8m2x2_m(vbool4_t vm, const uint8_t *rs1, vuint16m4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint8m4x2_t test_vluxseg2ei16_v_u8m4x2_m(vbool2_t vm, const uint8_t *rs1, vuint16m8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint16mf4x2_t test_vluxseg2ei16_v_u16mf4x2_m(vbool64_t vm, const uint16_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint16mf2x2_t test_vluxseg2ei16_v_u16mf2x2_m(vbool32_t vm, const uint16_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint16m1x2_t test_vluxseg2ei16_v_u16m1x2_m(vbool16_t vm, const uint16_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint16m2x2_t test_vluxseg2ei16_v_u16m2x2_m(vbool8_t vm, const uint16_t *rs1, vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint16m4x2_t test_vluxseg2ei16_v_u16m4x2_m(vbool4_t vm, const uint16_t *rs1, vuint16m4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint32mf2x2_t test_vluxseg2ei16_v_u32mf2x2_m(vbool64_t vm, const uint32_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint32m1x2_t test_vluxseg2ei16_v_u32m1x2_m(vbool32_t vm, const uint32_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint32m2x2_t test_vluxseg2ei16_v_u32m2x2_m(vbool16_t vm, const uint32_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint32m4x2_t test_vluxseg2ei16_v_u32m4x2_m(vbool8_t vm, const uint32_t *rs1, vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint64m1x2_t test_vluxseg2ei16_v_u64m1x2_m(vbool64_t vm, const uint64_t *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint64m2x2_t test_vluxseg2ei16_v_u64m2x2_m(vbool32_t vm, const uint64_t *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

vuint64m4x2_t test_vluxseg2ei16_v_u64m4x2_m(vbool16_t vm, const uint64_t *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16(vm, rs1, rs2, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vluxseg2ei16\.[ivxfswum.]+\s+} 96 } } */
