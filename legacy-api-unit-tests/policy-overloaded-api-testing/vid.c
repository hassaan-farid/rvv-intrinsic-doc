#include <stdint.h>
#include "rvv-v0p10-compatible-headers/overloaded-non-policy.h"
#include "rvv-v0p10-compatible-headers/overloaded-policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint8mf8_t test_vid_v_u8mf8_tu(vuint8mf8_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint8mf4_t test_vid_v_u8mf4_tu(vuint8mf4_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint8mf2_t test_vid_v_u8mf2_tu(vuint8mf2_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint8m1_t test_vid_v_u8m1_tu(vuint8m1_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint8m2_t test_vid_v_u8m2_tu(vuint8m2_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint8m4_t test_vid_v_u8m4_tu(vuint8m4_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint8m8_t test_vid_v_u8m8_tu(vuint8m8_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint16mf4_t test_vid_v_u16mf4_tu(vuint16mf4_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint16mf2_t test_vid_v_u16mf2_tu(vuint16mf2_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint16m1_t test_vid_v_u16m1_tu(vuint16m1_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint16m2_t test_vid_v_u16m2_tu(vuint16m2_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint16m4_t test_vid_v_u16m4_tu(vuint16m4_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint16m8_t test_vid_v_u16m8_tu(vuint16m8_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint32mf2_t test_vid_v_u32mf2_tu(vuint32mf2_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint32m1_t test_vid_v_u32m1_tu(vuint32m1_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint32m2_t test_vid_v_u32m2_tu(vuint32m2_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint32m4_t test_vid_v_u32m4_tu(vuint32m4_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint32m8_t test_vid_v_u32m8_tu(vuint32m8_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint64m1_t test_vid_v_u64m1_tu(vuint64m1_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint64m2_t test_vid_v_u64m2_tu(vuint64m2_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint64m4_t test_vid_v_u64m4_tu(vuint64m4_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint64m8_t test_vid_v_u64m8_tu(vuint64m8_t maskedoff, size_t vl) {
  return vid_tu(maskedoff, vl);
}

vuint8mf8_t test_vid_v_u8mf8_tuma(vbool64_t mask, vuint8mf8_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint8mf4_t test_vid_v_u8mf4_tuma(vbool32_t mask, vuint8mf4_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint8mf2_t test_vid_v_u8mf2_tuma(vbool16_t mask, vuint8mf2_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint8m1_t test_vid_v_u8m1_tuma(vbool8_t mask, vuint8m1_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint8m2_t test_vid_v_u8m2_tuma(vbool4_t mask, vuint8m2_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint8m4_t test_vid_v_u8m4_tuma(vbool2_t mask, vuint8m4_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint8m8_t test_vid_v_u8m8_tuma(vbool1_t mask, vuint8m8_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint16mf4_t test_vid_v_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint16mf2_t test_vid_v_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint16m1_t test_vid_v_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint16m2_t test_vid_v_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint16m4_t test_vid_v_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint16m8_t test_vid_v_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint32mf2_t test_vid_v_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint32m1_t test_vid_v_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint32m2_t test_vid_v_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint32m4_t test_vid_v_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint32m8_t test_vid_v_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint64m1_t test_vid_v_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint64m2_t test_vid_v_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint64m4_t test_vid_v_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint64m8_t test_vid_v_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, size_t vl) {
  return vid_tuma(mask, maskedoff, vl);
}

vuint8mf8_t test_vid_v_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint8mf4_t test_vid_v_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint8mf2_t test_vid_v_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint8m1_t test_vid_v_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint8m2_t test_vid_v_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint8m4_t test_vid_v_u8m4_tumu(vbool2_t mask, vuint8m4_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint8m8_t test_vid_v_u8m8_tumu(vbool1_t mask, vuint8m8_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint16mf4_t test_vid_v_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint16mf2_t test_vid_v_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint16m1_t test_vid_v_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint16m2_t test_vid_v_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint16m4_t test_vid_v_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint16m8_t test_vid_v_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint32mf2_t test_vid_v_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint32m1_t test_vid_v_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint32m2_t test_vid_v_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint32m4_t test_vid_v_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint32m8_t test_vid_v_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint64m1_t test_vid_v_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint64m2_t test_vid_v_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint64m4_t test_vid_v_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint64m8_t test_vid_v_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, size_t vl) {
  return vid_tumu(mask, maskedoff, vl);
}

vuint8mf8_t test_vid_v_u8mf8_tamu(vbool64_t mask, vuint8mf8_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint8mf4_t test_vid_v_u8mf4_tamu(vbool32_t mask, vuint8mf4_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint8mf2_t test_vid_v_u8mf2_tamu(vbool16_t mask, vuint8mf2_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint8m1_t test_vid_v_u8m1_tamu(vbool8_t mask, vuint8m1_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint8m2_t test_vid_v_u8m2_tamu(vbool4_t mask, vuint8m2_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint8m4_t test_vid_v_u8m4_tamu(vbool2_t mask, vuint8m4_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint8m8_t test_vid_v_u8m8_tamu(vbool1_t mask, vuint8m8_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint16mf4_t test_vid_v_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint16mf2_t test_vid_v_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint16m1_t test_vid_v_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint16m2_t test_vid_v_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint16m4_t test_vid_v_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint16m8_t test_vid_v_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint32mf2_t test_vid_v_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint32m1_t test_vid_v_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint32m2_t test_vid_v_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint32m4_t test_vid_v_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint32m8_t test_vid_v_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint64m1_t test_vid_v_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint64m2_t test_vid_v_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint64m4_t test_vid_v_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

vuint64m8_t test_vid_v_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, size_t vl) {
  return vid_tamu(mask, maskedoff, vl);
}

