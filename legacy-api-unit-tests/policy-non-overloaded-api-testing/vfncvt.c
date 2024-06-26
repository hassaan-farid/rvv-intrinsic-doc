#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8_t test_vfncvt_x_f_w_i8mf8_tu(vint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf8_tu(maskedoff, src, vl);
}

vint8mf8_t test_vfncvt_rtz_x_f_w_i8mf8_tu(vint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf8_tu(maskedoff, src, vl);
}

vint8mf4_t test_vfncvt_x_f_w_i8mf4_tu(vint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf4_tu(maskedoff, src, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_i8mf4_tu(vint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf4_tu(maskedoff, src, vl);
}

vint8mf2_t test_vfncvt_x_f_w_i8mf2_tu(vint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf2_tu(maskedoff, src, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_i8mf2_tu(vint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf2_tu(maskedoff, src, vl);
}

vint8m1_t test_vfncvt_x_f_w_i8m1_tu(vint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfncvt_x_f_w_i8m1_tu(maskedoff, src, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_i8m1_tu(vint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m1_tu(maskedoff, src, vl);
}

vint8m2_t test_vfncvt_x_f_w_i8m2_tu(vint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfncvt_x_f_w_i8m2_tu(maskedoff, src, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_i8m2_tu(vint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m2_tu(maskedoff, src, vl);
}

vint8m4_t test_vfncvt_x_f_w_i8m4_tu(vint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfncvt_x_f_w_i8m4_tu(maskedoff, src, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_i8m4_tu(vint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m4_tu(maskedoff, src, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_u8mf8_tu(vuint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf8_tu(maskedoff, src, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_u8mf8_tu(vuint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf8_tu(maskedoff, src, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_u8mf4_tu(vuint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf4_tu(maskedoff, src, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_u8mf4_tu(vuint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf4_tu(maskedoff, src, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_u8mf2_tu(vuint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf2_tu(maskedoff, src, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_u8mf2_tu(vuint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf2_tu(maskedoff, src, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_u8m1_tu(vuint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m1_tu(maskedoff, src, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_u8m1_tu(vuint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m1_tu(maskedoff, src, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_u8m2_tu(vuint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m2_tu(maskedoff, src, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_u8m2_tu(vuint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m2_tu(maskedoff, src, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_u8m4_tu(vuint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m4_tu(maskedoff, src, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_u8m4_tu(vuint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m4_tu(maskedoff, src, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_tu(vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_x_f_w_i16mf4_tu(maskedoff, src, vl);
}

vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4_tu(vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16mf4_tu(maskedoff, src, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_tu(vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_x_f_w_i16mf2_tu(maskedoff, src, vl);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2_tu(vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16mf2_tu(maskedoff, src, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_tu(vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_x_f_w_i16m1_tu(maskedoff, src, vl);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1_tu(vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m1_tu(maskedoff, src, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_tu(vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_x_f_w_i16m2_tu(maskedoff, src, vl);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2_tu(vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m2_tu(maskedoff, src, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_tu(vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_x_f_w_i16m4_tu(maskedoff, src, vl);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4_tu(vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m4_tu(maskedoff, src, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_tu(vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_xu_f_w_u16mf4_tu(maskedoff, src, vl);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4_tu(vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16mf4_tu(maskedoff, src, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_tu(vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u16mf2_tu(maskedoff, src, vl);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2_tu(vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16mf2_tu(maskedoff, src, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_tu(vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m1_tu(maskedoff, src, vl);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1_tu(vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m1_tu(maskedoff, src, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_tu(vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m2_tu(maskedoff, src, vl);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2_tu(vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m2_tu(maskedoff, src, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_tu(vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m4_tu(maskedoff, src, vl);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4_tu(vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m4_tu(maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_x_w_f16mf4_tu(vfloat16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return vfncvt_f_x_w_f16mf4_tu(maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_x_w_f16mf2_tu(vfloat16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return vfncvt_f_x_w_f16mf2_tu(maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_x_w_f16m1_tu(vfloat16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return vfncvt_f_x_w_f16m1_tu(maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_x_w_f16m2_tu(vfloat16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return vfncvt_f_x_w_f16m2_tu(maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_x_w_f16m4_tu(vfloat16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return vfncvt_f_x_w_f16m4_tu(maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_xu_w_f16mf4_tu(vfloat16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vfncvt_f_xu_w_f16mf4_tu(maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_xu_w_f16mf2_tu(vfloat16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return vfncvt_f_xu_w_f16mf2_tu(maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_xu_w_f16m1_tu(vfloat16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m1_tu(maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_xu_w_f16m2_tu(vfloat16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m2_tu(maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_xu_w_f16m4_tu(vfloat16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m4_tu(maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_tu(vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_f_f_w_f16mf4_tu(maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4_tu(vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16mf4_tu(maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_tu(vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_f_f_w_f16mf2_tu(maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2_tu(vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16mf2_tu(maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_tu(vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_f_f_w_f16m1_tu(maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1_tu(vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m1_tu(maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_tu(vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_f_f_w_f16m2_tu(maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2_tu(vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m2_tu(maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_tu(vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_f_f_w_f16m4_tu(maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4_tu(vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m4_tu(maskedoff, src, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_tu(vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_x_f_w_i32mf2_tu(maskedoff, src, vl);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2_tu(vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32mf2_tu(maskedoff, src, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_tu(vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_x_f_w_i32m1_tu(maskedoff, src, vl);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1_tu(vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m1_tu(maskedoff, src, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_tu(vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_x_f_w_i32m2_tu(maskedoff, src, vl);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2_tu(vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m2_tu(maskedoff, src, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_tu(vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_x_f_w_i32m4_tu(maskedoff, src, vl);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4_tu(vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m4_tu(maskedoff, src, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_tu(vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u32mf2_tu(maskedoff, src, vl);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2_tu(vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32mf2_tu(maskedoff, src, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_tu(vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m1_tu(maskedoff, src, vl);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1_tu(vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m1_tu(maskedoff, src, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_tu(vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m2_tu(maskedoff, src, vl);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2_tu(vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m2_tu(maskedoff, src, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_tu(vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m4_tu(maskedoff, src, vl);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4_tu(vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m4_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_tu(vfloat32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return vfncvt_f_x_w_f32mf2_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_tu(vfloat32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return vfncvt_f_x_w_f32m1_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_tu(vfloat32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return vfncvt_f_x_w_f32m2_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_tu(vfloat32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return vfncvt_f_x_w_f32m4_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_tu(vfloat32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return vfncvt_f_xu_w_f32mf2_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_tu(vfloat32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m1_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_tu(vfloat32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m2_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_tu(vfloat32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m4_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_f_f_w_f32mf2_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32mf2_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_tu(vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_f_f_w_f32m1_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_tu(vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m1_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_tu(vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_f_f_w_f32m2_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_tu(vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m2_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_tu(vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_f_f_w_f32m4_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_tu(vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m4_tu(maskedoff, src, vl);
}

vint8mf8_t test_vfncvt_x_f_w_i8mf8_ta(vfloat16mf4_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf8_ta(src, vl);
}

vint8mf8_t test_vfncvt_rtz_x_f_w_i8mf8_ta(vfloat16mf4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf8_ta(src, vl);
}

vint8mf4_t test_vfncvt_x_f_w_i8mf4_ta(vfloat16mf2_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf4_ta(src, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_i8mf4_ta(vfloat16mf2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf4_ta(src, vl);
}

vint8mf2_t test_vfncvt_x_f_w_i8mf2_ta(vfloat16m1_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf2_ta(src, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_i8mf2_ta(vfloat16m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf2_ta(src, vl);
}

vint8m1_t test_vfncvt_x_f_w_i8m1_ta(vfloat16m2_t src, size_t vl) {
  return vfncvt_x_f_w_i8m1_ta(src, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_i8m1_ta(vfloat16m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m1_ta(src, vl);
}

vint8m2_t test_vfncvt_x_f_w_i8m2_ta(vfloat16m4_t src, size_t vl) {
  return vfncvt_x_f_w_i8m2_ta(src, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_i8m2_ta(vfloat16m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m2_ta(src, vl);
}

vint8m4_t test_vfncvt_x_f_w_i8m4_ta(vfloat16m8_t src, size_t vl) {
  return vfncvt_x_f_w_i8m4_ta(src, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_i8m4_ta(vfloat16m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m4_ta(src, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_u8mf8_ta(vfloat16mf4_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf8_ta(src, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_u8mf8_ta(vfloat16mf4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf8_ta(src, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_u8mf4_ta(vfloat16mf2_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf4_ta(src, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_u8mf4_ta(vfloat16mf2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf4_ta(src, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_u8mf2_ta(vfloat16m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf2_ta(src, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_u8mf2_ta(vfloat16m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf2_ta(src, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_u8m1_ta(vfloat16m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m1_ta(src, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_u8m1_ta(vfloat16m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m1_ta(src, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_u8m2_ta(vfloat16m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m2_ta(src, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_u8m2_ta(vfloat16m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m2_ta(src, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_u8m4_ta(vfloat16m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m4_ta(src, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_u8m4_ta(vfloat16m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m4_ta(src, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_ta(vfloat32mf2_t src, size_t vl) {
  return vfncvt_x_f_w_i16mf4_ta(src, vl);
}

vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4_ta(vfloat32mf2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16mf4_ta(src, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_ta(vfloat32m1_t src, size_t vl) {
  return vfncvt_x_f_w_i16mf2_ta(src, vl);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2_ta(vfloat32m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16mf2_ta(src, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_ta(vfloat32m2_t src, size_t vl) {
  return vfncvt_x_f_w_i16m1_ta(src, vl);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1_ta(vfloat32m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m1_ta(src, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_ta(vfloat32m4_t src, size_t vl) {
  return vfncvt_x_f_w_i16m2_ta(src, vl);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2_ta(vfloat32m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m2_ta(src, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_ta(vfloat32m8_t src, size_t vl) {
  return vfncvt_x_f_w_i16m4_ta(src, vl);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4_ta(vfloat32m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m4_ta(src, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_ta(vfloat32mf2_t src, size_t vl) {
  return vfncvt_xu_f_w_u16mf4_ta(src, vl);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4_ta(vfloat32mf2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16mf4_ta(src, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_ta(vfloat32m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u16mf2_ta(src, vl);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2_ta(vfloat32m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16mf2_ta(src, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_ta(vfloat32m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m1_ta(src, vl);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1_ta(vfloat32m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m1_ta(src, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_ta(vfloat32m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m2_ta(src, vl);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2_ta(vfloat32m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m2_ta(src, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_ta(vfloat32m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m4_ta(src, vl);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4_ta(vfloat32m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m4_ta(src, vl);
}

vfloat16mf4_t test_vfncvt_f_x_w_f16mf4_ta(vint32mf2_t src, size_t vl) {
  return vfncvt_f_x_w_f16mf4_ta(src, vl);
}

vfloat16mf2_t test_vfncvt_f_x_w_f16mf2_ta(vint32m1_t src, size_t vl) {
  return vfncvt_f_x_w_f16mf2_ta(src, vl);
}

vfloat16m1_t test_vfncvt_f_x_w_f16m1_ta(vint32m2_t src, size_t vl) {
  return vfncvt_f_x_w_f16m1_ta(src, vl);
}

vfloat16m2_t test_vfncvt_f_x_w_f16m2_ta(vint32m4_t src, size_t vl) {
  return vfncvt_f_x_w_f16m2_ta(src, vl);
}

vfloat16m4_t test_vfncvt_f_x_w_f16m4_ta(vint32m8_t src, size_t vl) {
  return vfncvt_f_x_w_f16m4_ta(src, vl);
}

vfloat16mf4_t test_vfncvt_f_xu_w_f16mf4_ta(vuint32mf2_t src, size_t vl) {
  return vfncvt_f_xu_w_f16mf4_ta(src, vl);
}

vfloat16mf2_t test_vfncvt_f_xu_w_f16mf2_ta(vuint32m1_t src, size_t vl) {
  return vfncvt_f_xu_w_f16mf2_ta(src, vl);
}

vfloat16m1_t test_vfncvt_f_xu_w_f16m1_ta(vuint32m2_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m1_ta(src, vl);
}

vfloat16m2_t test_vfncvt_f_xu_w_f16m2_ta(vuint32m4_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m2_ta(src, vl);
}

vfloat16m4_t test_vfncvt_f_xu_w_f16m4_ta(vuint32m8_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m4_ta(src, vl);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_ta(vfloat32mf2_t src, size_t vl) {
  return vfncvt_f_f_w_f16mf4_ta(src, vl);
}

vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4_ta(vfloat32mf2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16mf4_ta(src, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_ta(vfloat32m1_t src, size_t vl) {
  return vfncvt_f_f_w_f16mf2_ta(src, vl);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2_ta(vfloat32m1_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16mf2_ta(src, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_ta(vfloat32m2_t src, size_t vl) {
  return vfncvt_f_f_w_f16m1_ta(src, vl);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1_ta(vfloat32m2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m1_ta(src, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_ta(vfloat32m4_t src, size_t vl) {
  return vfncvt_f_f_w_f16m2_ta(src, vl);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2_ta(vfloat32m4_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m2_ta(src, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_ta(vfloat32m8_t src, size_t vl) {
  return vfncvt_f_f_w_f16m4_ta(src, vl);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4_ta(vfloat32m8_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m4_ta(src, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_ta(vfloat64m1_t src, size_t vl) {
  return vfncvt_x_f_w_i32mf2_ta(src, vl);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2_ta(vfloat64m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32mf2_ta(src, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_ta(vfloat64m2_t src, size_t vl) {
  return vfncvt_x_f_w_i32m1_ta(src, vl);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1_ta(vfloat64m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m1_ta(src, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_ta(vfloat64m4_t src, size_t vl) {
  return vfncvt_x_f_w_i32m2_ta(src, vl);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2_ta(vfloat64m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m2_ta(src, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_ta(vfloat64m8_t src, size_t vl) {
  return vfncvt_x_f_w_i32m4_ta(src, vl);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4_ta(vfloat64m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m4_ta(src, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_ta(vfloat64m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u32mf2_ta(src, vl);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2_ta(vfloat64m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32mf2_ta(src, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_ta(vfloat64m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m1_ta(src, vl);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1_ta(vfloat64m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m1_ta(src, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_ta(vfloat64m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m2_ta(src, vl);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2_ta(vfloat64m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m2_ta(src, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_ta(vfloat64m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m4_ta(src, vl);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4_ta(vfloat64m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m4_ta(src, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_ta(vint64m1_t src, size_t vl) {
  return vfncvt_f_x_w_f32mf2_ta(src, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_ta(vint64m2_t src, size_t vl) {
  return vfncvt_f_x_w_f32m1_ta(src, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_ta(vint64m4_t src, size_t vl) {
  return vfncvt_f_x_w_f32m2_ta(src, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_ta(vint64m8_t src, size_t vl) {
  return vfncvt_f_x_w_f32m4_ta(src, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_ta(vuint64m1_t src, size_t vl) {
  return vfncvt_f_xu_w_f32mf2_ta(src, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_ta(vuint64m2_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m1_ta(src, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_ta(vuint64m4_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m2_ta(src, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_ta(vuint64m8_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m4_ta(src, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_ta(vfloat64m1_t src, size_t vl) {
  return vfncvt_f_f_w_f32mf2_ta(src, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_ta(vfloat64m1_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32mf2_ta(src, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_ta(vfloat64m2_t src, size_t vl) {
  return vfncvt_f_f_w_f32m1_ta(src, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_ta(vfloat64m2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m1_ta(src, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_ta(vfloat64m4_t src, size_t vl) {
  return vfncvt_f_f_w_f32m2_ta(src, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_ta(vfloat64m4_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m2_ta(src, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_ta(vfloat64m8_t src, size_t vl) {
  return vfncvt_f_f_w_f32m4_ta(src, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_ta(vfloat64m8_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m4_ta(src, vl);
}

vint8mf8_t test_vfncvt_x_f_w_i8mf8_tuma(vbool64_t mask, vint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf8_tuma(mask, maskedoff, src, vl);
}

vint8mf8_t test_vfncvt_rtz_x_f_w_i8mf8_tuma(vbool64_t mask, vint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf8_tuma(mask, maskedoff, src, vl);
}

vint8mf4_t test_vfncvt_x_f_w_i8mf4_tuma(vbool32_t mask, vint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf4_tuma(mask, maskedoff, src, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_i8mf4_tuma(vbool32_t mask, vint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf4_tuma(mask, maskedoff, src, vl);
}

vint8mf2_t test_vfncvt_x_f_w_i8mf2_tuma(vbool16_t mask, vint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf2_tuma(mask, maskedoff, src, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_i8mf2_tuma(vbool16_t mask, vint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf2_tuma(mask, maskedoff, src, vl);
}

vint8m1_t test_vfncvt_x_f_w_i8m1_tuma(vbool8_t mask, vint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfncvt_x_f_w_i8m1_tuma(mask, maskedoff, src, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_i8m1_tuma(vbool8_t mask, vint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m1_tuma(mask, maskedoff, src, vl);
}

vint8m2_t test_vfncvt_x_f_w_i8m2_tuma(vbool4_t mask, vint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfncvt_x_f_w_i8m2_tuma(mask, maskedoff, src, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_i8m2_tuma(vbool4_t mask, vint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m2_tuma(mask, maskedoff, src, vl);
}

vint8m4_t test_vfncvt_x_f_w_i8m4_tuma(vbool2_t mask, vint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfncvt_x_f_w_i8m4_tuma(mask, maskedoff, src, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_i8m4_tuma(vbool2_t mask, vint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m4_tuma(mask, maskedoff, src, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_u8mf8_tuma(vbool64_t mask, vuint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf8_tuma(mask, maskedoff, src, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_u8mf8_tuma(vbool64_t mask, vuint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf8_tuma(mask, maskedoff, src, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_u8mf4_tuma(vbool32_t mask, vuint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf4_tuma(mask, maskedoff, src, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_u8mf4_tuma(vbool32_t mask, vuint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf4_tuma(mask, maskedoff, src, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_u8mf2_tuma(vbool16_t mask, vuint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf2_tuma(mask, maskedoff, src, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_u8mf2_tuma(vbool16_t mask, vuint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf2_tuma(mask, maskedoff, src, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_u8m1_tuma(vbool8_t mask, vuint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m1_tuma(mask, maskedoff, src, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_u8m1_tuma(vbool8_t mask, vuint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m1_tuma(mask, maskedoff, src, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_u8m2_tuma(vbool4_t mask, vuint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m2_tuma(mask, maskedoff, src, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_u8m2_tuma(vbool4_t mask, vuint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m2_tuma(mask, maskedoff, src, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_u8m4_tuma(vbool2_t mask, vuint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m4_tuma(mask, maskedoff, src, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_u8m4_tuma(vbool2_t mask, vuint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m4_tuma(mask, maskedoff, src, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_tuma(vbool64_t mask, vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_x_f_w_i16mf4_tuma(mask, maskedoff, src, vl);
}

vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4_tuma(vbool64_t mask, vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16mf4_tuma(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_tuma(vbool32_t mask, vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_x_f_w_i16mf2_tuma(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2_tuma(vbool32_t mask, vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16mf2_tuma(mask, maskedoff, src, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_tuma(vbool16_t mask, vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_x_f_w_i16m1_tuma(mask, maskedoff, src, vl);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1_tuma(vbool16_t mask, vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m1_tuma(mask, maskedoff, src, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_tuma(vbool8_t mask, vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_x_f_w_i16m2_tuma(mask, maskedoff, src, vl);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2_tuma(vbool8_t mask, vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m2_tuma(mask, maskedoff, src, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_tuma(vbool4_t mask, vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_x_f_w_i16m4_tuma(mask, maskedoff, src, vl);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4_tuma(vbool4_t mask, vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m4_tuma(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_xu_f_w_u16mf4_tuma(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16mf4_tuma(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u16mf2_tuma(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16mf2_tuma(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m1_tuma(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m1_tuma(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m2_tuma(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m2_tuma(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m4_tuma(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m4_tuma(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_x_w_f16mf4_tuma(vbool64_t mask, vfloat16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return vfncvt_f_x_w_f16mf4_tuma(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_x_w_f16mf2_tuma(vbool32_t mask, vfloat16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return vfncvt_f_x_w_f16mf2_tuma(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_x_w_f16m1_tuma(vbool16_t mask, vfloat16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return vfncvt_f_x_w_f16m1_tuma(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_x_w_f16m2_tuma(vbool8_t mask, vfloat16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return vfncvt_f_x_w_f16m2_tuma(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_x_w_f16m4_tuma(vbool4_t mask, vfloat16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return vfncvt_f_x_w_f16m4_tuma(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_xu_w_f16mf4_tuma(vbool64_t mask, vfloat16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vfncvt_f_xu_w_f16mf4_tuma(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_xu_w_f16mf2_tuma(vbool32_t mask, vfloat16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return vfncvt_f_xu_w_f16mf2_tuma(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_xu_w_f16m1_tuma(vbool16_t mask, vfloat16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m1_tuma(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_xu_w_f16m2_tuma(vbool8_t mask, vfloat16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m2_tuma(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_xu_w_f16m4_tuma(vbool4_t mask, vfloat16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m4_tuma(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_tuma(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_f_f_w_f16mf4_tuma(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4_tuma(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16mf4_tuma(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_tuma(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_f_f_w_f16mf2_tuma(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2_tuma(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16mf2_tuma(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_tuma(vbool16_t mask, vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_f_f_w_f16m1_tuma(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1_tuma(vbool16_t mask, vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m1_tuma(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_tuma(vbool8_t mask, vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_f_f_w_f16m2_tuma(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2_tuma(vbool8_t mask, vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m2_tuma(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_tuma(vbool4_t mask, vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_f_f_w_f16m4_tuma(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4_tuma(vbool4_t mask, vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m4_tuma(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_tuma(vbool64_t mask, vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_x_f_w_i32mf2_tuma(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2_tuma(vbool64_t mask, vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32mf2_tuma(mask, maskedoff, src, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_tuma(vbool32_t mask, vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_x_f_w_i32m1_tuma(mask, maskedoff, src, vl);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1_tuma(vbool32_t mask, vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m1_tuma(mask, maskedoff, src, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_tuma(vbool16_t mask, vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_x_f_w_i32m2_tuma(mask, maskedoff, src, vl);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2_tuma(vbool16_t mask, vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m2_tuma(mask, maskedoff, src, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_tuma(vbool8_t mask, vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_x_f_w_i32m4_tuma(mask, maskedoff, src, vl);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4_tuma(vbool8_t mask, vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m4_tuma(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u32mf2_tuma(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32mf2_tuma(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m1_tuma(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m1_tuma(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m2_tuma(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m2_tuma(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m4_tuma(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m4_tuma(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return vfncvt_f_x_w_f32mf2_tuma(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_tuma(vbool32_t mask, vfloat32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return vfncvt_f_x_w_f32m1_tuma(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_tuma(vbool16_t mask, vfloat32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return vfncvt_f_x_w_f32m2_tuma(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_tuma(vbool8_t mask, vfloat32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return vfncvt_f_x_w_f32m4_tuma(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return vfncvt_f_xu_w_f32mf2_tuma(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_tuma(vbool32_t mask, vfloat32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m1_tuma(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_tuma(vbool16_t mask, vfloat32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m2_tuma(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_tuma(vbool8_t mask, vfloat32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m4_tuma(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_f_f_w_f32mf2_tuma(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32mf2_tuma(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_tuma(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_f_f_w_f32m1_tuma(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_tuma(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m1_tuma(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_tuma(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_f_f_w_f32m2_tuma(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_tuma(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m2_tuma(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_tuma(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_f_f_w_f32m4_tuma(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_tuma(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m4_tuma(mask, maskedoff, src, vl);
}

vint8mf8_t test_vfncvt_x_f_w_i8mf8_tumu(vbool64_t mask, vint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf8_tumu(mask, maskedoff, src, vl);
}

vint8mf8_t test_vfncvt_rtz_x_f_w_i8mf8_tumu(vbool64_t mask, vint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf8_tumu(mask, maskedoff, src, vl);
}

vint8mf4_t test_vfncvt_x_f_w_i8mf4_tumu(vbool32_t mask, vint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf4_tumu(mask, maskedoff, src, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_i8mf4_tumu(vbool32_t mask, vint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf4_tumu(mask, maskedoff, src, vl);
}

vint8mf2_t test_vfncvt_x_f_w_i8mf2_tumu(vbool16_t mask, vint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf2_tumu(mask, maskedoff, src, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_i8mf2_tumu(vbool16_t mask, vint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf2_tumu(mask, maskedoff, src, vl);
}

vint8m1_t test_vfncvt_x_f_w_i8m1_tumu(vbool8_t mask, vint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfncvt_x_f_w_i8m1_tumu(mask, maskedoff, src, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_i8m1_tumu(vbool8_t mask, vint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m1_tumu(mask, maskedoff, src, vl);
}

vint8m2_t test_vfncvt_x_f_w_i8m2_tumu(vbool4_t mask, vint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfncvt_x_f_w_i8m2_tumu(mask, maskedoff, src, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_i8m2_tumu(vbool4_t mask, vint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m2_tumu(mask, maskedoff, src, vl);
}

vint8m4_t test_vfncvt_x_f_w_i8m4_tumu(vbool2_t mask, vint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfncvt_x_f_w_i8m4_tumu(mask, maskedoff, src, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_i8m4_tumu(vbool2_t mask, vint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m4_tumu(mask, maskedoff, src, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf8_tumu(mask, maskedoff, src, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf8_tumu(mask, maskedoff, src, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf4_tumu(mask, maskedoff, src, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf4_tumu(mask, maskedoff, src, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf2_tumu(mask, maskedoff, src, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf2_tumu(mask, maskedoff, src, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m1_tumu(mask, maskedoff, src, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m1_tumu(mask, maskedoff, src, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m2_tumu(mask, maskedoff, src, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m2_tumu(mask, maskedoff, src, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_u8m4_tumu(vbool2_t mask, vuint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m4_tumu(mask, maskedoff, src, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_u8m4_tumu(vbool2_t mask, vuint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m4_tumu(mask, maskedoff, src, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_x_f_w_i16mf4_tumu(mask, maskedoff, src, vl);
}

vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16mf4_tumu(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_x_f_w_i16mf2_tumu(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16mf2_tumu(mask, maskedoff, src, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_x_f_w_i16m1_tumu(mask, maskedoff, src, vl);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m1_tumu(mask, maskedoff, src, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_x_f_w_i16m2_tumu(mask, maskedoff, src, vl);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m2_tumu(mask, maskedoff, src, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_x_f_w_i16m4_tumu(mask, maskedoff, src, vl);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m4_tumu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_xu_f_w_u16mf4_tumu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16mf4_tumu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u16mf2_tumu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16mf2_tumu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m1_tumu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m1_tumu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m2_tumu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m2_tumu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m4_tumu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m4_tumu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_x_w_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return vfncvt_f_x_w_f16mf4_tumu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_x_w_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return vfncvt_f_x_w_f16mf2_tumu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_x_w_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return vfncvt_f_x_w_f16m1_tumu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_x_w_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return vfncvt_f_x_w_f16m2_tumu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_x_w_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return vfncvt_f_x_w_f16m4_tumu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_xu_w_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vfncvt_f_xu_w_f16mf4_tumu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_xu_w_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return vfncvt_f_xu_w_f16mf2_tumu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_xu_w_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m1_tumu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_xu_w_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m2_tumu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_xu_w_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m4_tumu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_f_f_w_f16mf4_tumu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16mf4_tumu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_f_f_w_f16mf2_tumu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16mf2_tumu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_f_f_w_f16m1_tumu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m1_tumu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_f_f_w_f16m2_tumu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m2_tumu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_f_f_w_f16m4_tumu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m4_tumu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_x_f_w_i32mf2_tumu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32mf2_tumu(mask, maskedoff, src, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_x_f_w_i32m1_tumu(mask, maskedoff, src, vl);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m1_tumu(mask, maskedoff, src, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_x_f_w_i32m2_tumu(mask, maskedoff, src, vl);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m2_tumu(mask, maskedoff, src, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_x_f_w_i32m4_tumu(mask, maskedoff, src, vl);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m4_tumu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u32mf2_tumu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32mf2_tumu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m1_tumu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m1_tumu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m2_tumu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m2_tumu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m4_tumu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m4_tumu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return vfncvt_f_x_w_f32mf2_tumu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return vfncvt_f_x_w_f32m1_tumu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return vfncvt_f_x_w_f32m2_tumu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return vfncvt_f_x_w_f32m4_tumu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return vfncvt_f_xu_w_f32mf2_tumu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m1_tumu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m2_tumu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m4_tumu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_f_f_w_f32mf2_tumu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32mf2_tumu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_f_f_w_f32m1_tumu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m1_tumu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_f_f_w_f32m2_tumu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m2_tumu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_f_f_w_f32m4_tumu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m4_tumu(mask, maskedoff, src, vl);
}

vint8mf8_t test_vfncvt_x_f_w_i8mf8_tama(vbool64_t mask, vfloat16mf4_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf8_tama(mask, src, vl);
}

vint8mf8_t test_vfncvt_rtz_x_f_w_i8mf8_tama(vbool64_t mask, vfloat16mf4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf8_tama(mask, src, vl);
}

vint8mf4_t test_vfncvt_x_f_w_i8mf4_tama(vbool32_t mask, vfloat16mf2_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf4_tama(mask, src, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_i8mf4_tama(vbool32_t mask, vfloat16mf2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf4_tama(mask, src, vl);
}

vint8mf2_t test_vfncvt_x_f_w_i8mf2_tama(vbool16_t mask, vfloat16m1_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf2_tama(mask, src, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_i8mf2_tama(vbool16_t mask, vfloat16m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf2_tama(mask, src, vl);
}

vint8m1_t test_vfncvt_x_f_w_i8m1_tama(vbool8_t mask, vfloat16m2_t src, size_t vl) {
  return vfncvt_x_f_w_i8m1_tama(mask, src, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_i8m1_tama(vbool8_t mask, vfloat16m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m1_tama(mask, src, vl);
}

vint8m2_t test_vfncvt_x_f_w_i8m2_tama(vbool4_t mask, vfloat16m4_t src, size_t vl) {
  return vfncvt_x_f_w_i8m2_tama(mask, src, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_i8m2_tama(vbool4_t mask, vfloat16m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m2_tama(mask, src, vl);
}

vint8m4_t test_vfncvt_x_f_w_i8m4_tama(vbool2_t mask, vfloat16m8_t src, size_t vl) {
  return vfncvt_x_f_w_i8m4_tama(mask, src, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_i8m4_tama(vbool2_t mask, vfloat16m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m4_tama(mask, src, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_u8mf8_tama(vbool64_t mask, vfloat16mf4_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf8_tama(mask, src, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_u8mf8_tama(vbool64_t mask, vfloat16mf4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf8_tama(mask, src, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_u8mf4_tama(vbool32_t mask, vfloat16mf2_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf4_tama(mask, src, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_u8mf4_tama(vbool32_t mask, vfloat16mf2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf4_tama(mask, src, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_u8mf2_tama(vbool16_t mask, vfloat16m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf2_tama(mask, src, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_u8mf2_tama(vbool16_t mask, vfloat16m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf2_tama(mask, src, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_u8m1_tama(vbool8_t mask, vfloat16m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m1_tama(mask, src, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_u8m1_tama(vbool8_t mask, vfloat16m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m1_tama(mask, src, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_u8m2_tama(vbool4_t mask, vfloat16m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m2_tama(mask, src, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_u8m2_tama(vbool4_t mask, vfloat16m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m2_tama(mask, src, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_u8m4_tama(vbool2_t mask, vfloat16m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m4_tama(mask, src, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_u8m4_tama(vbool2_t mask, vfloat16m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m4_tama(mask, src, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_tama(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return vfncvt_x_f_w_i16mf4_tama(mask, src, vl);
}

vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4_tama(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16mf4_tama(mask, src, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_tama(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return vfncvt_x_f_w_i16mf2_tama(mask, src, vl);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2_tama(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16mf2_tama(mask, src, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_tama(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return vfncvt_x_f_w_i16m1_tama(mask, src, vl);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1_tama(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m1_tama(mask, src, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_tama(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return vfncvt_x_f_w_i16m2_tama(mask, src, vl);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2_tama(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m2_tama(mask, src, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_tama(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return vfncvt_x_f_w_i16m4_tama(mask, src, vl);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4_tama(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m4_tama(mask, src, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_tama(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return vfncvt_xu_f_w_u16mf4_tama(mask, src, vl);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4_tama(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16mf4_tama(mask, src, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_tama(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u16mf2_tama(mask, src, vl);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2_tama(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16mf2_tama(mask, src, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_tama(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m1_tama(mask, src, vl);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1_tama(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m1_tama(mask, src, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_tama(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m2_tama(mask, src, vl);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2_tama(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m2_tama(mask, src, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_tama(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m4_tama(mask, src, vl);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4_tama(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m4_tama(mask, src, vl);
}

vfloat16mf4_t test_vfncvt_f_x_w_f16mf4_tama(vbool64_t mask, vint32mf2_t src, size_t vl) {
  return vfncvt_f_x_w_f16mf4_tama(mask, src, vl);
}

vfloat16mf2_t test_vfncvt_f_x_w_f16mf2_tama(vbool32_t mask, vint32m1_t src, size_t vl) {
  return vfncvt_f_x_w_f16mf2_tama(mask, src, vl);
}

vfloat16m1_t test_vfncvt_f_x_w_f16m1_tama(vbool16_t mask, vint32m2_t src, size_t vl) {
  return vfncvt_f_x_w_f16m1_tama(mask, src, vl);
}

vfloat16m2_t test_vfncvt_f_x_w_f16m2_tama(vbool8_t mask, vint32m4_t src, size_t vl) {
  return vfncvt_f_x_w_f16m2_tama(mask, src, vl);
}

vfloat16m4_t test_vfncvt_f_x_w_f16m4_tama(vbool4_t mask, vint32m8_t src, size_t vl) {
  return vfncvt_f_x_w_f16m4_tama(mask, src, vl);
}

vfloat16mf4_t test_vfncvt_f_xu_w_f16mf4_tama(vbool64_t mask, vuint32mf2_t src, size_t vl) {
  return vfncvt_f_xu_w_f16mf4_tama(mask, src, vl);
}

vfloat16mf2_t test_vfncvt_f_xu_w_f16mf2_tama(vbool32_t mask, vuint32m1_t src, size_t vl) {
  return vfncvt_f_xu_w_f16mf2_tama(mask, src, vl);
}

vfloat16m1_t test_vfncvt_f_xu_w_f16m1_tama(vbool16_t mask, vuint32m2_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m1_tama(mask, src, vl);
}

vfloat16m2_t test_vfncvt_f_xu_w_f16m2_tama(vbool8_t mask, vuint32m4_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m2_tama(mask, src, vl);
}

vfloat16m4_t test_vfncvt_f_xu_w_f16m4_tama(vbool4_t mask, vuint32m8_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m4_tama(mask, src, vl);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_tama(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return vfncvt_f_f_w_f16mf4_tama(mask, src, vl);
}

vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4_tama(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16mf4_tama(mask, src, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_tama(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return vfncvt_f_f_w_f16mf2_tama(mask, src, vl);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2_tama(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16mf2_tama(mask, src, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_tama(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return vfncvt_f_f_w_f16m1_tama(mask, src, vl);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1_tama(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m1_tama(mask, src, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_tama(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return vfncvt_f_f_w_f16m2_tama(mask, src, vl);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2_tama(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m2_tama(mask, src, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_tama(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return vfncvt_f_f_w_f16m4_tama(mask, src, vl);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4_tama(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m4_tama(mask, src, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_tama(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return vfncvt_x_f_w_i32mf2_tama(mask, src, vl);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2_tama(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32mf2_tama(mask, src, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_tama(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return vfncvt_x_f_w_i32m1_tama(mask, src, vl);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1_tama(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m1_tama(mask, src, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_tama(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return vfncvt_x_f_w_i32m2_tama(mask, src, vl);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2_tama(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m2_tama(mask, src, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_tama(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return vfncvt_x_f_w_i32m4_tama(mask, src, vl);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4_tama(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m4_tama(mask, src, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_tama(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u32mf2_tama(mask, src, vl);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2_tama(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32mf2_tama(mask, src, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_tama(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m1_tama(mask, src, vl);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1_tama(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m1_tama(mask, src, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_tama(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m2_tama(mask, src, vl);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2_tama(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m2_tama(mask, src, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_tama(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m4_tama(mask, src, vl);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4_tama(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m4_tama(mask, src, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_tama(vbool64_t mask, vint64m1_t src, size_t vl) {
  return vfncvt_f_x_w_f32mf2_tama(mask, src, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_tama(vbool32_t mask, vint64m2_t src, size_t vl) {
  return vfncvt_f_x_w_f32m1_tama(mask, src, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_tama(vbool16_t mask, vint64m4_t src, size_t vl) {
  return vfncvt_f_x_w_f32m2_tama(mask, src, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_tama(vbool8_t mask, vint64m8_t src, size_t vl) {
  return vfncvt_f_x_w_f32m4_tama(mask, src, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_tama(vbool64_t mask, vuint64m1_t src, size_t vl) {
  return vfncvt_f_xu_w_f32mf2_tama(mask, src, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_tama(vbool32_t mask, vuint64m2_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m1_tama(mask, src, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_tama(vbool16_t mask, vuint64m4_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m2_tama(mask, src, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_tama(vbool8_t mask, vuint64m8_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m4_tama(mask, src, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_tama(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return vfncvt_f_f_w_f32mf2_tama(mask, src, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_tama(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32mf2_tama(mask, src, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_tama(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return vfncvt_f_f_w_f32m1_tama(mask, src, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_tama(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m1_tama(mask, src, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_tama(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return vfncvt_f_f_w_f32m2_tama(mask, src, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_tama(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m2_tama(mask, src, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_tama(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return vfncvt_f_f_w_f32m4_tama(mask, src, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_tama(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m4_tama(mask, src, vl);
}

vint8mf8_t test_vfncvt_x_f_w_i8mf8_tamu(vbool64_t mask, vint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf8_tamu(mask, maskedoff, src, vl);
}

vint8mf8_t test_vfncvt_rtz_x_f_w_i8mf8_tamu(vbool64_t mask, vint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf8_tamu(mask, maskedoff, src, vl);
}

vint8mf4_t test_vfncvt_x_f_w_i8mf4_tamu(vbool32_t mask, vint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf4_tamu(mask, maskedoff, src, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_i8mf4_tamu(vbool32_t mask, vint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf4_tamu(mask, maskedoff, src, vl);
}

vint8mf2_t test_vfncvt_x_f_w_i8mf2_tamu(vbool16_t mask, vint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfncvt_x_f_w_i8mf2_tamu(mask, maskedoff, src, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_i8mf2_tamu(vbool16_t mask, vint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8mf2_tamu(mask, maskedoff, src, vl);
}

vint8m1_t test_vfncvt_x_f_w_i8m1_tamu(vbool8_t mask, vint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfncvt_x_f_w_i8m1_tamu(mask, maskedoff, src, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_i8m1_tamu(vbool8_t mask, vint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m1_tamu(mask, maskedoff, src, vl);
}

vint8m2_t test_vfncvt_x_f_w_i8m2_tamu(vbool4_t mask, vint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfncvt_x_f_w_i8m2_tamu(mask, maskedoff, src, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_i8m2_tamu(vbool4_t mask, vint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m2_tamu(mask, maskedoff, src, vl);
}

vint8m4_t test_vfncvt_x_f_w_i8m4_tamu(vbool2_t mask, vint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfncvt_x_f_w_i8m4_tamu(mask, maskedoff, src, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_i8m4_tamu(vbool2_t mask, vint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i8m4_tamu(mask, maskedoff, src, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_u8mf8_tamu(vbool64_t mask, vuint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf8_tamu(mask, maskedoff, src, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_u8mf8_tamu(vbool64_t mask, vuint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf8_tamu(mask, maskedoff, src, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_u8mf4_tamu(vbool32_t mask, vuint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf4_tamu(mask, maskedoff, src, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_u8mf4_tamu(vbool32_t mask, vuint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf4_tamu(mask, maskedoff, src, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_u8mf2_tamu(vbool16_t mask, vuint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u8mf2_tamu(mask, maskedoff, src, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_u8mf2_tamu(vbool16_t mask, vuint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8mf2_tamu(mask, maskedoff, src, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_u8m1_tamu(vbool8_t mask, vuint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m1_tamu(mask, maskedoff, src, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_u8m1_tamu(vbool8_t mask, vuint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m1_tamu(mask, maskedoff, src, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_u8m2_tamu(vbool4_t mask, vuint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m2_tamu(mask, maskedoff, src, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_u8m2_tamu(vbool4_t mask, vuint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m2_tamu(mask, maskedoff, src, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_u8m4_tamu(vbool2_t mask, vuint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u8m4_tamu(mask, maskedoff, src, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_u8m4_tamu(vbool2_t mask, vuint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u8m4_tamu(mask, maskedoff, src, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_tamu(vbool64_t mask, vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_x_f_w_i16mf4_tamu(mask, maskedoff, src, vl);
}

vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4_tamu(vbool64_t mask, vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16mf4_tamu(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_tamu(vbool32_t mask, vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_x_f_w_i16mf2_tamu(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2_tamu(vbool32_t mask, vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16mf2_tamu(mask, maskedoff, src, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_tamu(vbool16_t mask, vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_x_f_w_i16m1_tamu(mask, maskedoff, src, vl);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1_tamu(vbool16_t mask, vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m1_tamu(mask, maskedoff, src, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_tamu(vbool8_t mask, vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_x_f_w_i16m2_tamu(mask, maskedoff, src, vl);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2_tamu(vbool8_t mask, vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m2_tamu(mask, maskedoff, src, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_tamu(vbool4_t mask, vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_x_f_w_i16m4_tamu(mask, maskedoff, src, vl);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4_tamu(vbool4_t mask, vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i16m4_tamu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_xu_f_w_u16mf4_tamu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16mf4_tamu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u16mf2_tamu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16mf2_tamu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m1_tamu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m1_tamu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m2_tamu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m2_tamu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u16m4_tamu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u16m4_tamu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_x_w_f16mf4_tamu(vbool64_t mask, vfloat16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return vfncvt_f_x_w_f16mf4_tamu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_x_w_f16mf2_tamu(vbool32_t mask, vfloat16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return vfncvt_f_x_w_f16mf2_tamu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_x_w_f16m1_tamu(vbool16_t mask, vfloat16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return vfncvt_f_x_w_f16m1_tamu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_x_w_f16m2_tamu(vbool8_t mask, vfloat16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return vfncvt_f_x_w_f16m2_tamu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_x_w_f16m4_tamu(vbool4_t mask, vfloat16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return vfncvt_f_x_w_f16m4_tamu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_xu_w_f16mf4_tamu(vbool64_t mask, vfloat16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vfncvt_f_xu_w_f16mf4_tamu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_xu_w_f16mf2_tamu(vbool32_t mask, vfloat16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return vfncvt_f_xu_w_f16mf2_tamu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_xu_w_f16m1_tamu(vbool16_t mask, vfloat16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m1_tamu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_xu_w_f16m2_tamu(vbool8_t mask, vfloat16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m2_tamu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_xu_w_f16m4_tamu(vbool4_t mask, vfloat16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return vfncvt_f_xu_w_f16m4_tamu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_tamu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_f_f_w_f16mf4_tamu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4_tamu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16mf4_tamu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_tamu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_f_f_w_f16mf2_tamu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2_tamu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16mf2_tamu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_tamu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_f_f_w_f16m1_tamu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1_tamu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m1_tamu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_tamu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_f_f_w_f16m2_tamu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2_tamu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m2_tamu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_tamu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_f_f_w_f16m4_tamu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4_tamu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f16m4_tamu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_tamu(vbool64_t mask, vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_x_f_w_i32mf2_tamu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2_tamu(vbool64_t mask, vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32mf2_tamu(mask, maskedoff, src, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_tamu(vbool32_t mask, vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_x_f_w_i32m1_tamu(mask, maskedoff, src, vl);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1_tamu(vbool32_t mask, vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m1_tamu(mask, maskedoff, src, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_tamu(vbool16_t mask, vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_x_f_w_i32m2_tamu(mask, maskedoff, src, vl);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2_tamu(vbool16_t mask, vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m2_tamu(mask, maskedoff, src, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_tamu(vbool8_t mask, vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_x_f_w_i32m4_tamu(mask, maskedoff, src, vl);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4_tamu(vbool8_t mask, vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_rtz_x_f_w_i32m4_tamu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_xu_f_w_u32mf2_tamu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32mf2_tamu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m1_tamu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m1_tamu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m2_tamu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m2_tamu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_xu_f_w_u32m4_tamu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_rtz_xu_f_w_u32m4_tamu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return vfncvt_f_x_w_f32mf2_tamu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_tamu(vbool32_t mask, vfloat32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return vfncvt_f_x_w_f32m1_tamu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_tamu(vbool16_t mask, vfloat32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return vfncvt_f_x_w_f32m2_tamu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_tamu(vbool8_t mask, vfloat32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return vfncvt_f_x_w_f32m4_tamu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return vfncvt_f_xu_w_f32mf2_tamu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_tamu(vbool32_t mask, vfloat32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m1_tamu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_tamu(vbool16_t mask, vfloat32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m2_tamu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_tamu(vbool8_t mask, vfloat32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return vfncvt_f_xu_w_f32m4_tamu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_f_f_w_f32mf2_tamu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32mf2_tamu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_tamu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_f_f_w_f32m1_tamu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_tamu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m1_tamu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_tamu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_f_f_w_f32m2_tamu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_tamu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m2_tamu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_tamu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_f_f_w_f32m4_tamu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_tamu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfncvt_rod_f_f_w_f32m4_tamu(mask, maskedoff, src, vl);
}

