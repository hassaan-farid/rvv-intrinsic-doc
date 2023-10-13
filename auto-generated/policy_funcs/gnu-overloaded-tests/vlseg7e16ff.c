/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4x7_t test_vlseg7e16ff_v_f16mf4x7_tu(vfloat16mf4x7_t vd, const float16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(vd, rs1, new_vl, vl);
}

vfloat16mf2x7_t test_vlseg7e16ff_v_f16mf2x7_tu(vfloat16mf2x7_t vd, const float16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(vd, rs1, new_vl, vl);
}

vfloat16m1x7_t test_vlseg7e16ff_v_f16m1x7_tu(vfloat16m1x7_t vd, const float16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(vd, rs1, new_vl, vl);
}

vint16mf4x7_t test_vlseg7e16ff_v_i16mf4x7_tu(vint16mf4x7_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(vd, rs1, new_vl, vl);
}

vint16mf2x7_t test_vlseg7e16ff_v_i16mf2x7_tu(vint16mf2x7_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(vd, rs1, new_vl, vl);
}

vint16m1x7_t test_vlseg7e16ff_v_i16m1x7_tu(vint16m1x7_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(vd, rs1, new_vl, vl);
}

vuint16mf4x7_t test_vlseg7e16ff_v_u16mf4x7_tu(vuint16mf4x7_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(vd, rs1, new_vl, vl);
}

vuint16mf2x7_t test_vlseg7e16ff_v_u16mf2x7_tu(vuint16mf2x7_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(vd, rs1, new_vl, vl);
}

vuint16m1x7_t test_vlseg7e16ff_v_u16m1x7_tu(vuint16m1x7_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(vd, rs1, new_vl, vl);
}

vfloat16mf4x7_t test_vlseg7e16ff_v_f16mf4x7_tum(vbool64_t vm, vfloat16mf4x7_t vd, const float16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16mf2x7_t test_vlseg7e16ff_v_f16mf2x7_tum(vbool32_t vm, vfloat16mf2x7_t vd, const float16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16m1x7_t test_vlseg7e16ff_v_f16m1x7_tum(vbool16_t vm, vfloat16m1x7_t vd, const float16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vint16mf4x7_t test_vlseg7e16ff_v_i16mf4x7_tum(vbool64_t vm, vint16mf4x7_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vint16mf2x7_t test_vlseg7e16ff_v_i16mf2x7_tum(vbool32_t vm, vint16mf2x7_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vint16m1x7_t test_vlseg7e16ff_v_i16m1x7_tum(vbool16_t vm, vint16m1x7_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint16mf4x7_t test_vlseg7e16ff_v_u16mf4x7_tum(vbool64_t vm, vuint16mf4x7_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint16mf2x7_t test_vlseg7e16ff_v_u16mf2x7_tum(vbool32_t vm, vuint16mf2x7_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint16m1x7_t test_vlseg7e16ff_v_u16m1x7_tum(vbool16_t vm, vuint16m1x7_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16mf4x7_t test_vlseg7e16ff_v_f16mf4x7_tumu(vbool64_t vm, vfloat16mf4x7_t vd, const float16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16mf2x7_t test_vlseg7e16ff_v_f16mf2x7_tumu(vbool32_t vm, vfloat16mf2x7_t vd, const float16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16m1x7_t test_vlseg7e16ff_v_f16m1x7_tumu(vbool16_t vm, vfloat16m1x7_t vd, const float16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint16mf4x7_t test_vlseg7e16ff_v_i16mf4x7_tumu(vbool64_t vm, vint16mf4x7_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint16mf2x7_t test_vlseg7e16ff_v_i16mf2x7_tumu(vbool32_t vm, vint16mf2x7_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint16m1x7_t test_vlseg7e16ff_v_i16m1x7_tumu(vbool16_t vm, vint16m1x7_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16mf4x7_t test_vlseg7e16ff_v_u16mf4x7_tumu(vbool64_t vm, vuint16mf4x7_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16mf2x7_t test_vlseg7e16ff_v_u16mf2x7_tumu(vbool32_t vm, vuint16mf2x7_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16m1x7_t test_vlseg7e16ff_v_u16m1x7_tumu(vbool16_t vm, vuint16m1x7_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16mf4x7_t test_vlseg7e16ff_v_f16mf4x7_mu(vbool64_t vm, vfloat16mf4x7_t vd, const float16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vfloat16mf2x7_t test_vlseg7e16ff_v_f16mf2x7_mu(vbool32_t vm, vfloat16mf2x7_t vd, const float16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vfloat16m1x7_t test_vlseg7e16ff_v_f16m1x7_mu(vbool16_t vm, vfloat16m1x7_t vd, const float16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vint16mf4x7_t test_vlseg7e16ff_v_i16mf4x7_mu(vbool64_t vm, vint16mf4x7_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vint16mf2x7_t test_vlseg7e16ff_v_i16mf2x7_mu(vbool32_t vm, vint16mf2x7_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vint16m1x7_t test_vlseg7e16ff_v_i16m1x7_mu(vbool16_t vm, vint16m1x7_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint16mf4x7_t test_vlseg7e16ff_v_u16mf4x7_mu(vbool64_t vm, vuint16mf4x7_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint16mf2x7_t test_vlseg7e16ff_v_u16mf2x7_mu(vbool32_t vm, vuint16mf2x7_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint16m1x7_t test_vlseg7e16ff_v_u16m1x7_mu(vbool16_t vm, vuint16m1x7_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(vm, vd, rs1, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg7e16ff\.[ivxfswum.]+\s+} 36 } } */
