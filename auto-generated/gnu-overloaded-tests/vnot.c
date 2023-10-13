/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8_t test_vnot_v_i8mf8(vint8mf8_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint8mf4_t test_vnot_v_i8mf4(vint8mf4_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint8mf2_t test_vnot_v_i8mf2(vint8mf2_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint8m1_t test_vnot_v_i8m1(vint8m1_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint8m2_t test_vnot_v_i8m2(vint8m2_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint8m4_t test_vnot_v_i8m4(vint8m4_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint8m8_t test_vnot_v_i8m8(vint8m8_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint16mf4_t test_vnot_v_i16mf4(vint16mf4_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint16mf2_t test_vnot_v_i16mf2(vint16mf2_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint16m1_t test_vnot_v_i16m1(vint16m1_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint16m2_t test_vnot_v_i16m2(vint16m2_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint16m4_t test_vnot_v_i16m4(vint16m4_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint16m8_t test_vnot_v_i16m8(vint16m8_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint32mf2_t test_vnot_v_i32mf2(vint32mf2_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint32m1_t test_vnot_v_i32m1(vint32m1_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint32m2_t test_vnot_v_i32m2(vint32m2_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint32m4_t test_vnot_v_i32m4(vint32m4_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint32m8_t test_vnot_v_i32m8(vint32m8_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint64m1_t test_vnot_v_i64m1(vint64m1_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint64m2_t test_vnot_v_i64m2(vint64m2_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint64m4_t test_vnot_v_i64m4(vint64m4_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint64m8_t test_vnot_v_i64m8(vint64m8_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint8mf8_t test_vnot_v_u8mf8(vuint8mf8_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint8mf4_t test_vnot_v_u8mf4(vuint8mf4_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint8mf2_t test_vnot_v_u8mf2(vuint8mf2_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint8m1_t test_vnot_v_u8m1(vuint8m1_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint8m2_t test_vnot_v_u8m2(vuint8m2_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint8m4_t test_vnot_v_u8m4(vuint8m4_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint8m8_t test_vnot_v_u8m8(vuint8m8_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint16mf4_t test_vnot_v_u16mf4(vuint16mf4_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint16mf2_t test_vnot_v_u16mf2(vuint16mf2_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint16m1_t test_vnot_v_u16m1(vuint16m1_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint16m2_t test_vnot_v_u16m2(vuint16m2_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint16m4_t test_vnot_v_u16m4(vuint16m4_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint16m8_t test_vnot_v_u16m8(vuint16m8_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint32mf2_t test_vnot_v_u32mf2(vuint32mf2_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint32m1_t test_vnot_v_u32m1(vuint32m1_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint32m2_t test_vnot_v_u32m2(vuint32m2_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint32m4_t test_vnot_v_u32m4(vuint32m4_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint32m8_t test_vnot_v_u32m8(vuint32m8_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint64m1_t test_vnot_v_u64m1(vuint64m1_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint64m2_t test_vnot_v_u64m2(vuint64m2_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint64m4_t test_vnot_v_u64m4(vuint64m4_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vuint64m8_t test_vnot_v_u64m8(vuint64m8_t vs, size_t vl) {
  return __riscv_vnot(vs, vl);
}

vint8mf8_t test_vnot_v_i8mf8_m(vbool64_t vm, vint8mf8_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint8mf4_t test_vnot_v_i8mf4_m(vbool32_t vm, vint8mf4_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint8mf2_t test_vnot_v_i8mf2_m(vbool16_t vm, vint8mf2_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint8m1_t test_vnot_v_i8m1_m(vbool8_t vm, vint8m1_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint8m2_t test_vnot_v_i8m2_m(vbool4_t vm, vint8m2_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint8m4_t test_vnot_v_i8m4_m(vbool2_t vm, vint8m4_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint8m8_t test_vnot_v_i8m8_m(vbool1_t vm, vint8m8_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint16mf4_t test_vnot_v_i16mf4_m(vbool64_t vm, vint16mf4_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint16mf2_t test_vnot_v_i16mf2_m(vbool32_t vm, vint16mf2_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint16m1_t test_vnot_v_i16m1_m(vbool16_t vm, vint16m1_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint16m2_t test_vnot_v_i16m2_m(vbool8_t vm, vint16m2_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint16m4_t test_vnot_v_i16m4_m(vbool4_t vm, vint16m4_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint16m8_t test_vnot_v_i16m8_m(vbool2_t vm, vint16m8_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint32mf2_t test_vnot_v_i32mf2_m(vbool64_t vm, vint32mf2_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint32m1_t test_vnot_v_i32m1_m(vbool32_t vm, vint32m1_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint32m2_t test_vnot_v_i32m2_m(vbool16_t vm, vint32m2_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint32m4_t test_vnot_v_i32m4_m(vbool8_t vm, vint32m4_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint32m8_t test_vnot_v_i32m8_m(vbool4_t vm, vint32m8_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint64m1_t test_vnot_v_i64m1_m(vbool64_t vm, vint64m1_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint64m2_t test_vnot_v_i64m2_m(vbool32_t vm, vint64m2_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint64m4_t test_vnot_v_i64m4_m(vbool16_t vm, vint64m4_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vint64m8_t test_vnot_v_i64m8_m(vbool8_t vm, vint64m8_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint8mf8_t test_vnot_v_u8mf8_m(vbool64_t vm, vuint8mf8_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint8mf4_t test_vnot_v_u8mf4_m(vbool32_t vm, vuint8mf4_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint8mf2_t test_vnot_v_u8mf2_m(vbool16_t vm, vuint8mf2_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint8m1_t test_vnot_v_u8m1_m(vbool8_t vm, vuint8m1_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint8m2_t test_vnot_v_u8m2_m(vbool4_t vm, vuint8m2_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint8m4_t test_vnot_v_u8m4_m(vbool2_t vm, vuint8m4_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint8m8_t test_vnot_v_u8m8_m(vbool1_t vm, vuint8m8_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint16mf4_t test_vnot_v_u16mf4_m(vbool64_t vm, vuint16mf4_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint16mf2_t test_vnot_v_u16mf2_m(vbool32_t vm, vuint16mf2_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint16m1_t test_vnot_v_u16m1_m(vbool16_t vm, vuint16m1_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint16m2_t test_vnot_v_u16m2_m(vbool8_t vm, vuint16m2_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint16m4_t test_vnot_v_u16m4_m(vbool4_t vm, vuint16m4_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint16m8_t test_vnot_v_u16m8_m(vbool2_t vm, vuint16m8_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint32mf2_t test_vnot_v_u32mf2_m(vbool64_t vm, vuint32mf2_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint32m1_t test_vnot_v_u32m1_m(vbool32_t vm, vuint32m1_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint32m2_t test_vnot_v_u32m2_m(vbool16_t vm, vuint32m2_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint32m4_t test_vnot_v_u32m4_m(vbool8_t vm, vuint32m4_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint32m8_t test_vnot_v_u32m8_m(vbool4_t vm, vuint32m8_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint64m1_t test_vnot_v_u64m1_m(vbool64_t vm, vuint64m1_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint64m2_t test_vnot_v_u64m2_m(vbool32_t vm, vuint64m2_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint64m4_t test_vnot_v_u64m4_m(vbool16_t vm, vuint64m4_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

vuint64m8_t test_vnot_v_u64m8_m(vbool8_t vm, vuint64m8_t vs, size_t vl) {
  return __riscv_vnot(vm, vs, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vnot\.[ivxfswum.]+\s+} 88 } } */
