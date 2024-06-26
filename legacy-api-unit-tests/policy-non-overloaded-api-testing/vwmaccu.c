#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint16mf4_t test_vwmaccu_vv_u16mf4_tu(vuint16mf4_t vd, vuint8mf8_t vs1, vuint8mf8_t vs2, size_t vl) {
  return vwmaccu_vv_u16mf4_tu(vd, vs1, vs2, vl);
}

vuint16mf4_t test_vwmaccu_vx_u16mf4_tu(vuint16mf4_t vd, uint8_t rs1, vuint8mf8_t vs2, size_t vl) {
  return vwmaccu_vx_u16mf4_tu(vd, rs1, vs2, vl);
}

vuint16mf2_t test_vwmaccu_vv_u16mf2_tu(vuint16mf2_t vd, vuint8mf4_t vs1, vuint8mf4_t vs2, size_t vl) {
  return vwmaccu_vv_u16mf2_tu(vd, vs1, vs2, vl);
}

vuint16mf2_t test_vwmaccu_vx_u16mf2_tu(vuint16mf2_t vd, uint8_t rs1, vuint8mf4_t vs2, size_t vl) {
  return vwmaccu_vx_u16mf2_tu(vd, rs1, vs2, vl);
}

vuint16m1_t test_vwmaccu_vv_u16m1_tu(vuint16m1_t vd, vuint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u16m1_tu(vd, vs1, vs2, vl);
}

vuint16m1_t test_vwmaccu_vx_u16m1_tu(vuint16m1_t vd, uint8_t rs1, vuint8mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u16m1_tu(vd, rs1, vs2, vl);
}

vuint16m2_t test_vwmaccu_vv_u16m2_tu(vuint16m2_t vd, vuint8m1_t vs1, vuint8m1_t vs2, size_t vl) {
  return vwmaccu_vv_u16m2_tu(vd, vs1, vs2, vl);
}

vuint16m2_t test_vwmaccu_vx_u16m2_tu(vuint16m2_t vd, uint8_t rs1, vuint8m1_t vs2, size_t vl) {
  return vwmaccu_vx_u16m2_tu(vd, rs1, vs2, vl);
}

vuint16m4_t test_vwmaccu_vv_u16m4_tu(vuint16m4_t vd, vuint8m2_t vs1, vuint8m2_t vs2, size_t vl) {
  return vwmaccu_vv_u16m4_tu(vd, vs1, vs2, vl);
}

vuint16m4_t test_vwmaccu_vx_u16m4_tu(vuint16m4_t vd, uint8_t rs1, vuint8m2_t vs2, size_t vl) {
  return vwmaccu_vx_u16m4_tu(vd, rs1, vs2, vl);
}

vuint16m8_t test_vwmaccu_vv_u16m8_tu(vuint16m8_t vd, vuint8m4_t vs1, vuint8m4_t vs2, size_t vl) {
  return vwmaccu_vv_u16m8_tu(vd, vs1, vs2, vl);
}

vuint16m8_t test_vwmaccu_vx_u16m8_tu(vuint16m8_t vd, uint8_t rs1, vuint8m4_t vs2, size_t vl) {
  return vwmaccu_vx_u16m8_tu(vd, rs1, vs2, vl);
}

vuint32mf2_t test_vwmaccu_vv_u32mf2_tu(vuint32mf2_t vd, vuint16mf4_t vs1, vuint16mf4_t vs2, size_t vl) {
  return vwmaccu_vv_u32mf2_tu(vd, vs1, vs2, vl);
}

vuint32mf2_t test_vwmaccu_vx_u32mf2_tu(vuint32mf2_t vd, uint16_t rs1, vuint16mf4_t vs2, size_t vl) {
  return vwmaccu_vx_u32mf2_tu(vd, rs1, vs2, vl);
}

vuint32m1_t test_vwmaccu_vv_u32m1_tu(vuint32m1_t vd, vuint16mf2_t vs1, vuint16mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u32m1_tu(vd, vs1, vs2, vl);
}

vuint32m1_t test_vwmaccu_vx_u32m1_tu(vuint32m1_t vd, uint16_t rs1, vuint16mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u32m1_tu(vd, rs1, vs2, vl);
}

vuint32m2_t test_vwmaccu_vv_u32m2_tu(vuint32m2_t vd, vuint16m1_t vs1, vuint16m1_t vs2, size_t vl) {
  return vwmaccu_vv_u32m2_tu(vd, vs1, vs2, vl);
}

vuint32m2_t test_vwmaccu_vx_u32m2_tu(vuint32m2_t vd, uint16_t rs1, vuint16m1_t vs2, size_t vl) {
  return vwmaccu_vx_u32m2_tu(vd, rs1, vs2, vl);
}

vuint32m4_t test_vwmaccu_vv_u32m4_tu(vuint32m4_t vd, vuint16m2_t vs1, vuint16m2_t vs2, size_t vl) {
  return vwmaccu_vv_u32m4_tu(vd, vs1, vs2, vl);
}

vuint32m4_t test_vwmaccu_vx_u32m4_tu(vuint32m4_t vd, uint16_t rs1, vuint16m2_t vs2, size_t vl) {
  return vwmaccu_vx_u32m4_tu(vd, rs1, vs2, vl);
}

vuint32m8_t test_vwmaccu_vv_u32m8_tu(vuint32m8_t vd, vuint16m4_t vs1, vuint16m4_t vs2, size_t vl) {
  return vwmaccu_vv_u32m8_tu(vd, vs1, vs2, vl);
}

vuint32m8_t test_vwmaccu_vx_u32m8_tu(vuint32m8_t vd, uint16_t rs1, vuint16m4_t vs2, size_t vl) {
  return vwmaccu_vx_u32m8_tu(vd, rs1, vs2, vl);
}

vuint64m1_t test_vwmaccu_vv_u64m1_tu(vuint64m1_t vd, vuint32mf2_t vs1, vuint32mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u64m1_tu(vd, vs1, vs2, vl);
}

vuint64m1_t test_vwmaccu_vx_u64m1_tu(vuint64m1_t vd, uint32_t rs1, vuint32mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u64m1_tu(vd, rs1, vs2, vl);
}

vuint64m2_t test_vwmaccu_vv_u64m2_tu(vuint64m2_t vd, vuint32m1_t vs1, vuint32m1_t vs2, size_t vl) {
  return vwmaccu_vv_u64m2_tu(vd, vs1, vs2, vl);
}

vuint64m2_t test_vwmaccu_vx_u64m2_tu(vuint64m2_t vd, uint32_t rs1, vuint32m1_t vs2, size_t vl) {
  return vwmaccu_vx_u64m2_tu(vd, rs1, vs2, vl);
}

vuint64m4_t test_vwmaccu_vv_u64m4_tu(vuint64m4_t vd, vuint32m2_t vs1, vuint32m2_t vs2, size_t vl) {
  return vwmaccu_vv_u64m4_tu(vd, vs1, vs2, vl);
}

vuint64m4_t test_vwmaccu_vx_u64m4_tu(vuint64m4_t vd, uint32_t rs1, vuint32m2_t vs2, size_t vl) {
  return vwmaccu_vx_u64m4_tu(vd, rs1, vs2, vl);
}

vuint64m8_t test_vwmaccu_vv_u64m8_tu(vuint64m8_t vd, vuint32m4_t vs1, vuint32m4_t vs2, size_t vl) {
  return vwmaccu_vv_u64m8_tu(vd, vs1, vs2, vl);
}

vuint64m8_t test_vwmaccu_vx_u64m8_tu(vuint64m8_t vd, uint32_t rs1, vuint32m4_t vs2, size_t vl) {
  return vwmaccu_vx_u64m8_tu(vd, rs1, vs2, vl);
}

vuint16mf4_t test_vwmaccu_vv_u16mf4_ta(vuint16mf4_t vd, vuint8mf8_t vs1, vuint8mf8_t vs2, size_t vl) {
  return vwmaccu_vv_u16mf4_ta(vd, vs1, vs2, vl);
}

vuint16mf4_t test_vwmaccu_vx_u16mf4_ta(vuint16mf4_t vd, uint8_t rs1, vuint8mf8_t vs2, size_t vl) {
  return vwmaccu_vx_u16mf4_ta(vd, rs1, vs2, vl);
}

vuint16mf2_t test_vwmaccu_vv_u16mf2_ta(vuint16mf2_t vd, vuint8mf4_t vs1, vuint8mf4_t vs2, size_t vl) {
  return vwmaccu_vv_u16mf2_ta(vd, vs1, vs2, vl);
}

vuint16mf2_t test_vwmaccu_vx_u16mf2_ta(vuint16mf2_t vd, uint8_t rs1, vuint8mf4_t vs2, size_t vl) {
  return vwmaccu_vx_u16mf2_ta(vd, rs1, vs2, vl);
}

vuint16m1_t test_vwmaccu_vv_u16m1_ta(vuint16m1_t vd, vuint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u16m1_ta(vd, vs1, vs2, vl);
}

vuint16m1_t test_vwmaccu_vx_u16m1_ta(vuint16m1_t vd, uint8_t rs1, vuint8mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u16m1_ta(vd, rs1, vs2, vl);
}

vuint16m2_t test_vwmaccu_vv_u16m2_ta(vuint16m2_t vd, vuint8m1_t vs1, vuint8m1_t vs2, size_t vl) {
  return vwmaccu_vv_u16m2_ta(vd, vs1, vs2, vl);
}

vuint16m2_t test_vwmaccu_vx_u16m2_ta(vuint16m2_t vd, uint8_t rs1, vuint8m1_t vs2, size_t vl) {
  return vwmaccu_vx_u16m2_ta(vd, rs1, vs2, vl);
}

vuint16m4_t test_vwmaccu_vv_u16m4_ta(vuint16m4_t vd, vuint8m2_t vs1, vuint8m2_t vs2, size_t vl) {
  return vwmaccu_vv_u16m4_ta(vd, vs1, vs2, vl);
}

vuint16m4_t test_vwmaccu_vx_u16m4_ta(vuint16m4_t vd, uint8_t rs1, vuint8m2_t vs2, size_t vl) {
  return vwmaccu_vx_u16m4_ta(vd, rs1, vs2, vl);
}

vuint16m8_t test_vwmaccu_vv_u16m8_ta(vuint16m8_t vd, vuint8m4_t vs1, vuint8m4_t vs2, size_t vl) {
  return vwmaccu_vv_u16m8_ta(vd, vs1, vs2, vl);
}

vuint16m8_t test_vwmaccu_vx_u16m8_ta(vuint16m8_t vd, uint8_t rs1, vuint8m4_t vs2, size_t vl) {
  return vwmaccu_vx_u16m8_ta(vd, rs1, vs2, vl);
}

vuint32mf2_t test_vwmaccu_vv_u32mf2_ta(vuint32mf2_t vd, vuint16mf4_t vs1, vuint16mf4_t vs2, size_t vl) {
  return vwmaccu_vv_u32mf2_ta(vd, vs1, vs2, vl);
}

vuint32mf2_t test_vwmaccu_vx_u32mf2_ta(vuint32mf2_t vd, uint16_t rs1, vuint16mf4_t vs2, size_t vl) {
  return vwmaccu_vx_u32mf2_ta(vd, rs1, vs2, vl);
}

vuint32m1_t test_vwmaccu_vv_u32m1_ta(vuint32m1_t vd, vuint16mf2_t vs1, vuint16mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u32m1_ta(vd, vs1, vs2, vl);
}

vuint32m1_t test_vwmaccu_vx_u32m1_ta(vuint32m1_t vd, uint16_t rs1, vuint16mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u32m1_ta(vd, rs1, vs2, vl);
}

vuint32m2_t test_vwmaccu_vv_u32m2_ta(vuint32m2_t vd, vuint16m1_t vs1, vuint16m1_t vs2, size_t vl) {
  return vwmaccu_vv_u32m2_ta(vd, vs1, vs2, vl);
}

vuint32m2_t test_vwmaccu_vx_u32m2_ta(vuint32m2_t vd, uint16_t rs1, vuint16m1_t vs2, size_t vl) {
  return vwmaccu_vx_u32m2_ta(vd, rs1, vs2, vl);
}

vuint32m4_t test_vwmaccu_vv_u32m4_ta(vuint32m4_t vd, vuint16m2_t vs1, vuint16m2_t vs2, size_t vl) {
  return vwmaccu_vv_u32m4_ta(vd, vs1, vs2, vl);
}

vuint32m4_t test_vwmaccu_vx_u32m4_ta(vuint32m4_t vd, uint16_t rs1, vuint16m2_t vs2, size_t vl) {
  return vwmaccu_vx_u32m4_ta(vd, rs1, vs2, vl);
}

vuint32m8_t test_vwmaccu_vv_u32m8_ta(vuint32m8_t vd, vuint16m4_t vs1, vuint16m4_t vs2, size_t vl) {
  return vwmaccu_vv_u32m8_ta(vd, vs1, vs2, vl);
}

vuint32m8_t test_vwmaccu_vx_u32m8_ta(vuint32m8_t vd, uint16_t rs1, vuint16m4_t vs2, size_t vl) {
  return vwmaccu_vx_u32m8_ta(vd, rs1, vs2, vl);
}

vuint64m1_t test_vwmaccu_vv_u64m1_ta(vuint64m1_t vd, vuint32mf2_t vs1, vuint32mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u64m1_ta(vd, vs1, vs2, vl);
}

vuint64m1_t test_vwmaccu_vx_u64m1_ta(vuint64m1_t vd, uint32_t rs1, vuint32mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u64m1_ta(vd, rs1, vs2, vl);
}

vuint64m2_t test_vwmaccu_vv_u64m2_ta(vuint64m2_t vd, vuint32m1_t vs1, vuint32m1_t vs2, size_t vl) {
  return vwmaccu_vv_u64m2_ta(vd, vs1, vs2, vl);
}

vuint64m2_t test_vwmaccu_vx_u64m2_ta(vuint64m2_t vd, uint32_t rs1, vuint32m1_t vs2, size_t vl) {
  return vwmaccu_vx_u64m2_ta(vd, rs1, vs2, vl);
}

vuint64m4_t test_vwmaccu_vv_u64m4_ta(vuint64m4_t vd, vuint32m2_t vs1, vuint32m2_t vs2, size_t vl) {
  return vwmaccu_vv_u64m4_ta(vd, vs1, vs2, vl);
}

vuint64m4_t test_vwmaccu_vx_u64m4_ta(vuint64m4_t vd, uint32_t rs1, vuint32m2_t vs2, size_t vl) {
  return vwmaccu_vx_u64m4_ta(vd, rs1, vs2, vl);
}

vuint64m8_t test_vwmaccu_vv_u64m8_ta(vuint64m8_t vd, vuint32m4_t vs1, vuint32m4_t vs2, size_t vl) {
  return vwmaccu_vv_u64m8_ta(vd, vs1, vs2, vl);
}

vuint64m8_t test_vwmaccu_vx_u64m8_ta(vuint64m8_t vd, uint32_t rs1, vuint32m4_t vs2, size_t vl) {
  return vwmaccu_vx_u64m8_ta(vd, rs1, vs2, vl);
}

vuint16mf4_t test_vwmaccu_vv_u16mf4_tuma(vbool64_t mask, vuint16mf4_t vd, vuint8mf8_t vs1, vuint8mf8_t vs2, size_t vl) {
  return vwmaccu_vv_u16mf4_tuma(mask, vd, vs1, vs2, vl);
}

vuint16mf4_t test_vwmaccu_vx_u16mf4_tuma(vbool64_t mask, vuint16mf4_t vd, uint8_t rs1, vuint8mf8_t vs2, size_t vl) {
  return vwmaccu_vx_u16mf4_tuma(mask, vd, rs1, vs2, vl);
}

vuint16mf2_t test_vwmaccu_vv_u16mf2_tuma(vbool32_t mask, vuint16mf2_t vd, vuint8mf4_t vs1, vuint8mf4_t vs2, size_t vl) {
  return vwmaccu_vv_u16mf2_tuma(mask, vd, vs1, vs2, vl);
}

vuint16mf2_t test_vwmaccu_vx_u16mf2_tuma(vbool32_t mask, vuint16mf2_t vd, uint8_t rs1, vuint8mf4_t vs2, size_t vl) {
  return vwmaccu_vx_u16mf2_tuma(mask, vd, rs1, vs2, vl);
}

vuint16m1_t test_vwmaccu_vv_u16m1_tuma(vbool16_t mask, vuint16m1_t vd, vuint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u16m1_tuma(mask, vd, vs1, vs2, vl);
}

vuint16m1_t test_vwmaccu_vx_u16m1_tuma(vbool16_t mask, vuint16m1_t vd, uint8_t rs1, vuint8mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u16m1_tuma(mask, vd, rs1, vs2, vl);
}

vuint16m2_t test_vwmaccu_vv_u16m2_tuma(vbool8_t mask, vuint16m2_t vd, vuint8m1_t vs1, vuint8m1_t vs2, size_t vl) {
  return vwmaccu_vv_u16m2_tuma(mask, vd, vs1, vs2, vl);
}

vuint16m2_t test_vwmaccu_vx_u16m2_tuma(vbool8_t mask, vuint16m2_t vd, uint8_t rs1, vuint8m1_t vs2, size_t vl) {
  return vwmaccu_vx_u16m2_tuma(mask, vd, rs1, vs2, vl);
}

vuint16m4_t test_vwmaccu_vv_u16m4_tuma(vbool4_t mask, vuint16m4_t vd, vuint8m2_t vs1, vuint8m2_t vs2, size_t vl) {
  return vwmaccu_vv_u16m4_tuma(mask, vd, vs1, vs2, vl);
}

vuint16m4_t test_vwmaccu_vx_u16m4_tuma(vbool4_t mask, vuint16m4_t vd, uint8_t rs1, vuint8m2_t vs2, size_t vl) {
  return vwmaccu_vx_u16m4_tuma(mask, vd, rs1, vs2, vl);
}

vuint16m8_t test_vwmaccu_vv_u16m8_tuma(vbool2_t mask, vuint16m8_t vd, vuint8m4_t vs1, vuint8m4_t vs2, size_t vl) {
  return vwmaccu_vv_u16m8_tuma(mask, vd, vs1, vs2, vl);
}

vuint16m8_t test_vwmaccu_vx_u16m8_tuma(vbool2_t mask, vuint16m8_t vd, uint8_t rs1, vuint8m4_t vs2, size_t vl) {
  return vwmaccu_vx_u16m8_tuma(mask, vd, rs1, vs2, vl);
}

vuint32mf2_t test_vwmaccu_vv_u32mf2_tuma(vbool64_t mask, vuint32mf2_t vd, vuint16mf4_t vs1, vuint16mf4_t vs2, size_t vl) {
  return vwmaccu_vv_u32mf2_tuma(mask, vd, vs1, vs2, vl);
}

vuint32mf2_t test_vwmaccu_vx_u32mf2_tuma(vbool64_t mask, vuint32mf2_t vd, uint16_t rs1, vuint16mf4_t vs2, size_t vl) {
  return vwmaccu_vx_u32mf2_tuma(mask, vd, rs1, vs2, vl);
}

vuint32m1_t test_vwmaccu_vv_u32m1_tuma(vbool32_t mask, vuint32m1_t vd, vuint16mf2_t vs1, vuint16mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u32m1_tuma(mask, vd, vs1, vs2, vl);
}

vuint32m1_t test_vwmaccu_vx_u32m1_tuma(vbool32_t mask, vuint32m1_t vd, uint16_t rs1, vuint16mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u32m1_tuma(mask, vd, rs1, vs2, vl);
}

vuint32m2_t test_vwmaccu_vv_u32m2_tuma(vbool16_t mask, vuint32m2_t vd, vuint16m1_t vs1, vuint16m1_t vs2, size_t vl) {
  return vwmaccu_vv_u32m2_tuma(mask, vd, vs1, vs2, vl);
}

vuint32m2_t test_vwmaccu_vx_u32m2_tuma(vbool16_t mask, vuint32m2_t vd, uint16_t rs1, vuint16m1_t vs2, size_t vl) {
  return vwmaccu_vx_u32m2_tuma(mask, vd, rs1, vs2, vl);
}

vuint32m4_t test_vwmaccu_vv_u32m4_tuma(vbool8_t mask, vuint32m4_t vd, vuint16m2_t vs1, vuint16m2_t vs2, size_t vl) {
  return vwmaccu_vv_u32m4_tuma(mask, vd, vs1, vs2, vl);
}

vuint32m4_t test_vwmaccu_vx_u32m4_tuma(vbool8_t mask, vuint32m4_t vd, uint16_t rs1, vuint16m2_t vs2, size_t vl) {
  return vwmaccu_vx_u32m4_tuma(mask, vd, rs1, vs2, vl);
}

vuint32m8_t test_vwmaccu_vv_u32m8_tuma(vbool4_t mask, vuint32m8_t vd, vuint16m4_t vs1, vuint16m4_t vs2, size_t vl) {
  return vwmaccu_vv_u32m8_tuma(mask, vd, vs1, vs2, vl);
}

vuint32m8_t test_vwmaccu_vx_u32m8_tuma(vbool4_t mask, vuint32m8_t vd, uint16_t rs1, vuint16m4_t vs2, size_t vl) {
  return vwmaccu_vx_u32m8_tuma(mask, vd, rs1, vs2, vl);
}

vuint64m1_t test_vwmaccu_vv_u64m1_tuma(vbool64_t mask, vuint64m1_t vd, vuint32mf2_t vs1, vuint32mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u64m1_tuma(mask, vd, vs1, vs2, vl);
}

vuint64m1_t test_vwmaccu_vx_u64m1_tuma(vbool64_t mask, vuint64m1_t vd, uint32_t rs1, vuint32mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u64m1_tuma(mask, vd, rs1, vs2, vl);
}

vuint64m2_t test_vwmaccu_vv_u64m2_tuma(vbool32_t mask, vuint64m2_t vd, vuint32m1_t vs1, vuint32m1_t vs2, size_t vl) {
  return vwmaccu_vv_u64m2_tuma(mask, vd, vs1, vs2, vl);
}

vuint64m2_t test_vwmaccu_vx_u64m2_tuma(vbool32_t mask, vuint64m2_t vd, uint32_t rs1, vuint32m1_t vs2, size_t vl) {
  return vwmaccu_vx_u64m2_tuma(mask, vd, rs1, vs2, vl);
}

vuint64m4_t test_vwmaccu_vv_u64m4_tuma(vbool16_t mask, vuint64m4_t vd, vuint32m2_t vs1, vuint32m2_t vs2, size_t vl) {
  return vwmaccu_vv_u64m4_tuma(mask, vd, vs1, vs2, vl);
}

vuint64m4_t test_vwmaccu_vx_u64m4_tuma(vbool16_t mask, vuint64m4_t vd, uint32_t rs1, vuint32m2_t vs2, size_t vl) {
  return vwmaccu_vx_u64m4_tuma(mask, vd, rs1, vs2, vl);
}

vuint64m8_t test_vwmaccu_vv_u64m8_tuma(vbool8_t mask, vuint64m8_t vd, vuint32m4_t vs1, vuint32m4_t vs2, size_t vl) {
  return vwmaccu_vv_u64m8_tuma(mask, vd, vs1, vs2, vl);
}

vuint64m8_t test_vwmaccu_vx_u64m8_tuma(vbool8_t mask, vuint64m8_t vd, uint32_t rs1, vuint32m4_t vs2, size_t vl) {
  return vwmaccu_vx_u64m8_tuma(mask, vd, rs1, vs2, vl);
}

vuint16mf4_t test_vwmaccu_vv_u16mf4_tumu(vbool64_t mask, vuint16mf4_t vd, vuint8mf8_t vs1, vuint8mf8_t vs2, size_t vl) {
  return vwmaccu_vv_u16mf4_tumu(mask, vd, vs1, vs2, vl);
}

vuint16mf4_t test_vwmaccu_vx_u16mf4_tumu(vbool64_t mask, vuint16mf4_t vd, uint8_t rs1, vuint8mf8_t vs2, size_t vl) {
  return vwmaccu_vx_u16mf4_tumu(mask, vd, rs1, vs2, vl);
}

vuint16mf2_t test_vwmaccu_vv_u16mf2_tumu(vbool32_t mask, vuint16mf2_t vd, vuint8mf4_t vs1, vuint8mf4_t vs2, size_t vl) {
  return vwmaccu_vv_u16mf2_tumu(mask, vd, vs1, vs2, vl);
}

vuint16mf2_t test_vwmaccu_vx_u16mf2_tumu(vbool32_t mask, vuint16mf2_t vd, uint8_t rs1, vuint8mf4_t vs2, size_t vl) {
  return vwmaccu_vx_u16mf2_tumu(mask, vd, rs1, vs2, vl);
}

vuint16m1_t test_vwmaccu_vv_u16m1_tumu(vbool16_t mask, vuint16m1_t vd, vuint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u16m1_tumu(mask, vd, vs1, vs2, vl);
}

vuint16m1_t test_vwmaccu_vx_u16m1_tumu(vbool16_t mask, vuint16m1_t vd, uint8_t rs1, vuint8mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u16m1_tumu(mask, vd, rs1, vs2, vl);
}

vuint16m2_t test_vwmaccu_vv_u16m2_tumu(vbool8_t mask, vuint16m2_t vd, vuint8m1_t vs1, vuint8m1_t vs2, size_t vl) {
  return vwmaccu_vv_u16m2_tumu(mask, vd, vs1, vs2, vl);
}

vuint16m2_t test_vwmaccu_vx_u16m2_tumu(vbool8_t mask, vuint16m2_t vd, uint8_t rs1, vuint8m1_t vs2, size_t vl) {
  return vwmaccu_vx_u16m2_tumu(mask, vd, rs1, vs2, vl);
}

vuint16m4_t test_vwmaccu_vv_u16m4_tumu(vbool4_t mask, vuint16m4_t vd, vuint8m2_t vs1, vuint8m2_t vs2, size_t vl) {
  return vwmaccu_vv_u16m4_tumu(mask, vd, vs1, vs2, vl);
}

vuint16m4_t test_vwmaccu_vx_u16m4_tumu(vbool4_t mask, vuint16m4_t vd, uint8_t rs1, vuint8m2_t vs2, size_t vl) {
  return vwmaccu_vx_u16m4_tumu(mask, vd, rs1, vs2, vl);
}

vuint16m8_t test_vwmaccu_vv_u16m8_tumu(vbool2_t mask, vuint16m8_t vd, vuint8m4_t vs1, vuint8m4_t vs2, size_t vl) {
  return vwmaccu_vv_u16m8_tumu(mask, vd, vs1, vs2, vl);
}

vuint16m8_t test_vwmaccu_vx_u16m8_tumu(vbool2_t mask, vuint16m8_t vd, uint8_t rs1, vuint8m4_t vs2, size_t vl) {
  return vwmaccu_vx_u16m8_tumu(mask, vd, rs1, vs2, vl);
}

vuint32mf2_t test_vwmaccu_vv_u32mf2_tumu(vbool64_t mask, vuint32mf2_t vd, vuint16mf4_t vs1, vuint16mf4_t vs2, size_t vl) {
  return vwmaccu_vv_u32mf2_tumu(mask, vd, vs1, vs2, vl);
}

vuint32mf2_t test_vwmaccu_vx_u32mf2_tumu(vbool64_t mask, vuint32mf2_t vd, uint16_t rs1, vuint16mf4_t vs2, size_t vl) {
  return vwmaccu_vx_u32mf2_tumu(mask, vd, rs1, vs2, vl);
}

vuint32m1_t test_vwmaccu_vv_u32m1_tumu(vbool32_t mask, vuint32m1_t vd, vuint16mf2_t vs1, vuint16mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u32m1_tumu(mask, vd, vs1, vs2, vl);
}

vuint32m1_t test_vwmaccu_vx_u32m1_tumu(vbool32_t mask, vuint32m1_t vd, uint16_t rs1, vuint16mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u32m1_tumu(mask, vd, rs1, vs2, vl);
}

vuint32m2_t test_vwmaccu_vv_u32m2_tumu(vbool16_t mask, vuint32m2_t vd, vuint16m1_t vs1, vuint16m1_t vs2, size_t vl) {
  return vwmaccu_vv_u32m2_tumu(mask, vd, vs1, vs2, vl);
}

vuint32m2_t test_vwmaccu_vx_u32m2_tumu(vbool16_t mask, vuint32m2_t vd, uint16_t rs1, vuint16m1_t vs2, size_t vl) {
  return vwmaccu_vx_u32m2_tumu(mask, vd, rs1, vs2, vl);
}

vuint32m4_t test_vwmaccu_vv_u32m4_tumu(vbool8_t mask, vuint32m4_t vd, vuint16m2_t vs1, vuint16m2_t vs2, size_t vl) {
  return vwmaccu_vv_u32m4_tumu(mask, vd, vs1, vs2, vl);
}

vuint32m4_t test_vwmaccu_vx_u32m4_tumu(vbool8_t mask, vuint32m4_t vd, uint16_t rs1, vuint16m2_t vs2, size_t vl) {
  return vwmaccu_vx_u32m4_tumu(mask, vd, rs1, vs2, vl);
}

vuint32m8_t test_vwmaccu_vv_u32m8_tumu(vbool4_t mask, vuint32m8_t vd, vuint16m4_t vs1, vuint16m4_t vs2, size_t vl) {
  return vwmaccu_vv_u32m8_tumu(mask, vd, vs1, vs2, vl);
}

vuint32m8_t test_vwmaccu_vx_u32m8_tumu(vbool4_t mask, vuint32m8_t vd, uint16_t rs1, vuint16m4_t vs2, size_t vl) {
  return vwmaccu_vx_u32m8_tumu(mask, vd, rs1, vs2, vl);
}

vuint64m1_t test_vwmaccu_vv_u64m1_tumu(vbool64_t mask, vuint64m1_t vd, vuint32mf2_t vs1, vuint32mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u64m1_tumu(mask, vd, vs1, vs2, vl);
}

vuint64m1_t test_vwmaccu_vx_u64m1_tumu(vbool64_t mask, vuint64m1_t vd, uint32_t rs1, vuint32mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u64m1_tumu(mask, vd, rs1, vs2, vl);
}

vuint64m2_t test_vwmaccu_vv_u64m2_tumu(vbool32_t mask, vuint64m2_t vd, vuint32m1_t vs1, vuint32m1_t vs2, size_t vl) {
  return vwmaccu_vv_u64m2_tumu(mask, vd, vs1, vs2, vl);
}

vuint64m2_t test_vwmaccu_vx_u64m2_tumu(vbool32_t mask, vuint64m2_t vd, uint32_t rs1, vuint32m1_t vs2, size_t vl) {
  return vwmaccu_vx_u64m2_tumu(mask, vd, rs1, vs2, vl);
}

vuint64m4_t test_vwmaccu_vv_u64m4_tumu(vbool16_t mask, vuint64m4_t vd, vuint32m2_t vs1, vuint32m2_t vs2, size_t vl) {
  return vwmaccu_vv_u64m4_tumu(mask, vd, vs1, vs2, vl);
}

vuint64m4_t test_vwmaccu_vx_u64m4_tumu(vbool16_t mask, vuint64m4_t vd, uint32_t rs1, vuint32m2_t vs2, size_t vl) {
  return vwmaccu_vx_u64m4_tumu(mask, vd, rs1, vs2, vl);
}

vuint64m8_t test_vwmaccu_vv_u64m8_tumu(vbool8_t mask, vuint64m8_t vd, vuint32m4_t vs1, vuint32m4_t vs2, size_t vl) {
  return vwmaccu_vv_u64m8_tumu(mask, vd, vs1, vs2, vl);
}

vuint64m8_t test_vwmaccu_vx_u64m8_tumu(vbool8_t mask, vuint64m8_t vd, uint32_t rs1, vuint32m4_t vs2, size_t vl) {
  return vwmaccu_vx_u64m8_tumu(mask, vd, rs1, vs2, vl);
}

vuint16mf4_t test_vwmaccu_vv_u16mf4_tama(vbool64_t mask, vuint16mf4_t vd, vuint8mf8_t vs1, vuint8mf8_t vs2, size_t vl) {
  return vwmaccu_vv_u16mf4_tama(mask, vd, vs1, vs2, vl);
}

vuint16mf4_t test_vwmaccu_vx_u16mf4_tama(vbool64_t mask, vuint16mf4_t vd, uint8_t rs1, vuint8mf8_t vs2, size_t vl) {
  return vwmaccu_vx_u16mf4_tama(mask, vd, rs1, vs2, vl);
}

vuint16mf2_t test_vwmaccu_vv_u16mf2_tama(vbool32_t mask, vuint16mf2_t vd, vuint8mf4_t vs1, vuint8mf4_t vs2, size_t vl) {
  return vwmaccu_vv_u16mf2_tama(mask, vd, vs1, vs2, vl);
}

vuint16mf2_t test_vwmaccu_vx_u16mf2_tama(vbool32_t mask, vuint16mf2_t vd, uint8_t rs1, vuint8mf4_t vs2, size_t vl) {
  return vwmaccu_vx_u16mf2_tama(mask, vd, rs1, vs2, vl);
}

vuint16m1_t test_vwmaccu_vv_u16m1_tama(vbool16_t mask, vuint16m1_t vd, vuint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u16m1_tama(mask, vd, vs1, vs2, vl);
}

vuint16m1_t test_vwmaccu_vx_u16m1_tama(vbool16_t mask, vuint16m1_t vd, uint8_t rs1, vuint8mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u16m1_tama(mask, vd, rs1, vs2, vl);
}

vuint16m2_t test_vwmaccu_vv_u16m2_tama(vbool8_t mask, vuint16m2_t vd, vuint8m1_t vs1, vuint8m1_t vs2, size_t vl) {
  return vwmaccu_vv_u16m2_tama(mask, vd, vs1, vs2, vl);
}

vuint16m2_t test_vwmaccu_vx_u16m2_tama(vbool8_t mask, vuint16m2_t vd, uint8_t rs1, vuint8m1_t vs2, size_t vl) {
  return vwmaccu_vx_u16m2_tama(mask, vd, rs1, vs2, vl);
}

vuint16m4_t test_vwmaccu_vv_u16m4_tama(vbool4_t mask, vuint16m4_t vd, vuint8m2_t vs1, vuint8m2_t vs2, size_t vl) {
  return vwmaccu_vv_u16m4_tama(mask, vd, vs1, vs2, vl);
}

vuint16m4_t test_vwmaccu_vx_u16m4_tama(vbool4_t mask, vuint16m4_t vd, uint8_t rs1, vuint8m2_t vs2, size_t vl) {
  return vwmaccu_vx_u16m4_tama(mask, vd, rs1, vs2, vl);
}

vuint16m8_t test_vwmaccu_vv_u16m8_tama(vbool2_t mask, vuint16m8_t vd, vuint8m4_t vs1, vuint8m4_t vs2, size_t vl) {
  return vwmaccu_vv_u16m8_tama(mask, vd, vs1, vs2, vl);
}

vuint16m8_t test_vwmaccu_vx_u16m8_tama(vbool2_t mask, vuint16m8_t vd, uint8_t rs1, vuint8m4_t vs2, size_t vl) {
  return vwmaccu_vx_u16m8_tama(mask, vd, rs1, vs2, vl);
}

vuint32mf2_t test_vwmaccu_vv_u32mf2_tama(vbool64_t mask, vuint32mf2_t vd, vuint16mf4_t vs1, vuint16mf4_t vs2, size_t vl) {
  return vwmaccu_vv_u32mf2_tama(mask, vd, vs1, vs2, vl);
}

vuint32mf2_t test_vwmaccu_vx_u32mf2_tama(vbool64_t mask, vuint32mf2_t vd, uint16_t rs1, vuint16mf4_t vs2, size_t vl) {
  return vwmaccu_vx_u32mf2_tama(mask, vd, rs1, vs2, vl);
}

vuint32m1_t test_vwmaccu_vv_u32m1_tama(vbool32_t mask, vuint32m1_t vd, vuint16mf2_t vs1, vuint16mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u32m1_tama(mask, vd, vs1, vs2, vl);
}

vuint32m1_t test_vwmaccu_vx_u32m1_tama(vbool32_t mask, vuint32m1_t vd, uint16_t rs1, vuint16mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u32m1_tama(mask, vd, rs1, vs2, vl);
}

vuint32m2_t test_vwmaccu_vv_u32m2_tama(vbool16_t mask, vuint32m2_t vd, vuint16m1_t vs1, vuint16m1_t vs2, size_t vl) {
  return vwmaccu_vv_u32m2_tama(mask, vd, vs1, vs2, vl);
}

vuint32m2_t test_vwmaccu_vx_u32m2_tama(vbool16_t mask, vuint32m2_t vd, uint16_t rs1, vuint16m1_t vs2, size_t vl) {
  return vwmaccu_vx_u32m2_tama(mask, vd, rs1, vs2, vl);
}

vuint32m4_t test_vwmaccu_vv_u32m4_tama(vbool8_t mask, vuint32m4_t vd, vuint16m2_t vs1, vuint16m2_t vs2, size_t vl) {
  return vwmaccu_vv_u32m4_tama(mask, vd, vs1, vs2, vl);
}

vuint32m4_t test_vwmaccu_vx_u32m4_tama(vbool8_t mask, vuint32m4_t vd, uint16_t rs1, vuint16m2_t vs2, size_t vl) {
  return vwmaccu_vx_u32m4_tama(mask, vd, rs1, vs2, vl);
}

vuint32m8_t test_vwmaccu_vv_u32m8_tama(vbool4_t mask, vuint32m8_t vd, vuint16m4_t vs1, vuint16m4_t vs2, size_t vl) {
  return vwmaccu_vv_u32m8_tama(mask, vd, vs1, vs2, vl);
}

vuint32m8_t test_vwmaccu_vx_u32m8_tama(vbool4_t mask, vuint32m8_t vd, uint16_t rs1, vuint16m4_t vs2, size_t vl) {
  return vwmaccu_vx_u32m8_tama(mask, vd, rs1, vs2, vl);
}

vuint64m1_t test_vwmaccu_vv_u64m1_tama(vbool64_t mask, vuint64m1_t vd, vuint32mf2_t vs1, vuint32mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u64m1_tama(mask, vd, vs1, vs2, vl);
}

vuint64m1_t test_vwmaccu_vx_u64m1_tama(vbool64_t mask, vuint64m1_t vd, uint32_t rs1, vuint32mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u64m1_tama(mask, vd, rs1, vs2, vl);
}

vuint64m2_t test_vwmaccu_vv_u64m2_tama(vbool32_t mask, vuint64m2_t vd, vuint32m1_t vs1, vuint32m1_t vs2, size_t vl) {
  return vwmaccu_vv_u64m2_tama(mask, vd, vs1, vs2, vl);
}

vuint64m2_t test_vwmaccu_vx_u64m2_tama(vbool32_t mask, vuint64m2_t vd, uint32_t rs1, vuint32m1_t vs2, size_t vl) {
  return vwmaccu_vx_u64m2_tama(mask, vd, rs1, vs2, vl);
}

vuint64m4_t test_vwmaccu_vv_u64m4_tama(vbool16_t mask, vuint64m4_t vd, vuint32m2_t vs1, vuint32m2_t vs2, size_t vl) {
  return vwmaccu_vv_u64m4_tama(mask, vd, vs1, vs2, vl);
}

vuint64m4_t test_vwmaccu_vx_u64m4_tama(vbool16_t mask, vuint64m4_t vd, uint32_t rs1, vuint32m2_t vs2, size_t vl) {
  return vwmaccu_vx_u64m4_tama(mask, vd, rs1, vs2, vl);
}

vuint64m8_t test_vwmaccu_vv_u64m8_tama(vbool8_t mask, vuint64m8_t vd, vuint32m4_t vs1, vuint32m4_t vs2, size_t vl) {
  return vwmaccu_vv_u64m8_tama(mask, vd, vs1, vs2, vl);
}

vuint64m8_t test_vwmaccu_vx_u64m8_tama(vbool8_t mask, vuint64m8_t vd, uint32_t rs1, vuint32m4_t vs2, size_t vl) {
  return vwmaccu_vx_u64m8_tama(mask, vd, rs1, vs2, vl);
}

vuint16mf4_t test_vwmaccu_vv_u16mf4_tamu(vbool64_t mask, vuint16mf4_t vd, vuint8mf8_t vs1, vuint8mf8_t vs2, size_t vl) {
  return vwmaccu_vv_u16mf4_tamu(mask, vd, vs1, vs2, vl);
}

vuint16mf4_t test_vwmaccu_vx_u16mf4_tamu(vbool64_t mask, vuint16mf4_t vd, uint8_t rs1, vuint8mf8_t vs2, size_t vl) {
  return vwmaccu_vx_u16mf4_tamu(mask, vd, rs1, vs2, vl);
}

vuint16mf2_t test_vwmaccu_vv_u16mf2_tamu(vbool32_t mask, vuint16mf2_t vd, vuint8mf4_t vs1, vuint8mf4_t vs2, size_t vl) {
  return vwmaccu_vv_u16mf2_tamu(mask, vd, vs1, vs2, vl);
}

vuint16mf2_t test_vwmaccu_vx_u16mf2_tamu(vbool32_t mask, vuint16mf2_t vd, uint8_t rs1, vuint8mf4_t vs2, size_t vl) {
  return vwmaccu_vx_u16mf2_tamu(mask, vd, rs1, vs2, vl);
}

vuint16m1_t test_vwmaccu_vv_u16m1_tamu(vbool16_t mask, vuint16m1_t vd, vuint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u16m1_tamu(mask, vd, vs1, vs2, vl);
}

vuint16m1_t test_vwmaccu_vx_u16m1_tamu(vbool16_t mask, vuint16m1_t vd, uint8_t rs1, vuint8mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u16m1_tamu(mask, vd, rs1, vs2, vl);
}

vuint16m2_t test_vwmaccu_vv_u16m2_tamu(vbool8_t mask, vuint16m2_t vd, vuint8m1_t vs1, vuint8m1_t vs2, size_t vl) {
  return vwmaccu_vv_u16m2_tamu(mask, vd, vs1, vs2, vl);
}

vuint16m2_t test_vwmaccu_vx_u16m2_tamu(vbool8_t mask, vuint16m2_t vd, uint8_t rs1, vuint8m1_t vs2, size_t vl) {
  return vwmaccu_vx_u16m2_tamu(mask, vd, rs1, vs2, vl);
}

vuint16m4_t test_vwmaccu_vv_u16m4_tamu(vbool4_t mask, vuint16m4_t vd, vuint8m2_t vs1, vuint8m2_t vs2, size_t vl) {
  return vwmaccu_vv_u16m4_tamu(mask, vd, vs1, vs2, vl);
}

vuint16m4_t test_vwmaccu_vx_u16m4_tamu(vbool4_t mask, vuint16m4_t vd, uint8_t rs1, vuint8m2_t vs2, size_t vl) {
  return vwmaccu_vx_u16m4_tamu(mask, vd, rs1, vs2, vl);
}

vuint16m8_t test_vwmaccu_vv_u16m8_tamu(vbool2_t mask, vuint16m8_t vd, vuint8m4_t vs1, vuint8m4_t vs2, size_t vl) {
  return vwmaccu_vv_u16m8_tamu(mask, vd, vs1, vs2, vl);
}

vuint16m8_t test_vwmaccu_vx_u16m8_tamu(vbool2_t mask, vuint16m8_t vd, uint8_t rs1, vuint8m4_t vs2, size_t vl) {
  return vwmaccu_vx_u16m8_tamu(mask, vd, rs1, vs2, vl);
}

vuint32mf2_t test_vwmaccu_vv_u32mf2_tamu(vbool64_t mask, vuint32mf2_t vd, vuint16mf4_t vs1, vuint16mf4_t vs2, size_t vl) {
  return vwmaccu_vv_u32mf2_tamu(mask, vd, vs1, vs2, vl);
}

vuint32mf2_t test_vwmaccu_vx_u32mf2_tamu(vbool64_t mask, vuint32mf2_t vd, uint16_t rs1, vuint16mf4_t vs2, size_t vl) {
  return vwmaccu_vx_u32mf2_tamu(mask, vd, rs1, vs2, vl);
}

vuint32m1_t test_vwmaccu_vv_u32m1_tamu(vbool32_t mask, vuint32m1_t vd, vuint16mf2_t vs1, vuint16mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u32m1_tamu(mask, vd, vs1, vs2, vl);
}

vuint32m1_t test_vwmaccu_vx_u32m1_tamu(vbool32_t mask, vuint32m1_t vd, uint16_t rs1, vuint16mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u32m1_tamu(mask, vd, rs1, vs2, vl);
}

vuint32m2_t test_vwmaccu_vv_u32m2_tamu(vbool16_t mask, vuint32m2_t vd, vuint16m1_t vs1, vuint16m1_t vs2, size_t vl) {
  return vwmaccu_vv_u32m2_tamu(mask, vd, vs1, vs2, vl);
}

vuint32m2_t test_vwmaccu_vx_u32m2_tamu(vbool16_t mask, vuint32m2_t vd, uint16_t rs1, vuint16m1_t vs2, size_t vl) {
  return vwmaccu_vx_u32m2_tamu(mask, vd, rs1, vs2, vl);
}

vuint32m4_t test_vwmaccu_vv_u32m4_tamu(vbool8_t mask, vuint32m4_t vd, vuint16m2_t vs1, vuint16m2_t vs2, size_t vl) {
  return vwmaccu_vv_u32m4_tamu(mask, vd, vs1, vs2, vl);
}

vuint32m4_t test_vwmaccu_vx_u32m4_tamu(vbool8_t mask, vuint32m4_t vd, uint16_t rs1, vuint16m2_t vs2, size_t vl) {
  return vwmaccu_vx_u32m4_tamu(mask, vd, rs1, vs2, vl);
}

vuint32m8_t test_vwmaccu_vv_u32m8_tamu(vbool4_t mask, vuint32m8_t vd, vuint16m4_t vs1, vuint16m4_t vs2, size_t vl) {
  return vwmaccu_vv_u32m8_tamu(mask, vd, vs1, vs2, vl);
}

vuint32m8_t test_vwmaccu_vx_u32m8_tamu(vbool4_t mask, vuint32m8_t vd, uint16_t rs1, vuint16m4_t vs2, size_t vl) {
  return vwmaccu_vx_u32m8_tamu(mask, vd, rs1, vs2, vl);
}

vuint64m1_t test_vwmaccu_vv_u64m1_tamu(vbool64_t mask, vuint64m1_t vd, vuint32mf2_t vs1, vuint32mf2_t vs2, size_t vl) {
  return vwmaccu_vv_u64m1_tamu(mask, vd, vs1, vs2, vl);
}

vuint64m1_t test_vwmaccu_vx_u64m1_tamu(vbool64_t mask, vuint64m1_t vd, uint32_t rs1, vuint32mf2_t vs2, size_t vl) {
  return vwmaccu_vx_u64m1_tamu(mask, vd, rs1, vs2, vl);
}

vuint64m2_t test_vwmaccu_vv_u64m2_tamu(vbool32_t mask, vuint64m2_t vd, vuint32m1_t vs1, vuint32m1_t vs2, size_t vl) {
  return vwmaccu_vv_u64m2_tamu(mask, vd, vs1, vs2, vl);
}

vuint64m2_t test_vwmaccu_vx_u64m2_tamu(vbool32_t mask, vuint64m2_t vd, uint32_t rs1, vuint32m1_t vs2, size_t vl) {
  return vwmaccu_vx_u64m2_tamu(mask, vd, rs1, vs2, vl);
}

vuint64m4_t test_vwmaccu_vv_u64m4_tamu(vbool16_t mask, vuint64m4_t vd, vuint32m2_t vs1, vuint32m2_t vs2, size_t vl) {
  return vwmaccu_vv_u64m4_tamu(mask, vd, vs1, vs2, vl);
}

vuint64m4_t test_vwmaccu_vx_u64m4_tamu(vbool16_t mask, vuint64m4_t vd, uint32_t rs1, vuint32m2_t vs2, size_t vl) {
  return vwmaccu_vx_u64m4_tamu(mask, vd, rs1, vs2, vl);
}

vuint64m8_t test_vwmaccu_vv_u64m8_tamu(vbool8_t mask, vuint64m8_t vd, vuint32m4_t vs1, vuint32m4_t vs2, size_t vl) {
  return vwmaccu_vv_u64m8_tamu(mask, vd, vs1, vs2, vl);
}

vuint64m8_t test_vwmaccu_vx_u64m8_tamu(vbool8_t mask, vuint64m8_t vd, uint32_t rs1, vuint32m4_t vs2, size_t vl) {
  return vwmaccu_vx_u64m8_tamu(mask, vd, rs1, vs2, vl);
}

