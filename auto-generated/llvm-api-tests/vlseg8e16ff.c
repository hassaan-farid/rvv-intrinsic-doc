// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x8_t test_vlseg8e16ff_v_f16mf4x8(const _Float16 *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg8e16ff_v_f16mf4x8(rs1, new_vl, vl);
}

vfloat16mf2x8_t test_vlseg8e16ff_v_f16mf2x8(const _Float16 *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg8e16ff_v_f16mf2x8(rs1, new_vl, vl);
}

vfloat16m1x8_t test_vlseg8e16ff_v_f16m1x8(const _Float16 *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg8e16ff_v_f16m1x8(rs1, new_vl, vl);
}

vint16mf4x8_t test_vlseg8e16ff_v_i16mf4x8(const int16_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg8e16ff_v_i16mf4x8(rs1, new_vl, vl);
}

vint16mf2x8_t test_vlseg8e16ff_v_i16mf2x8(const int16_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg8e16ff_v_i16mf2x8(rs1, new_vl, vl);
}

vint16m1x8_t test_vlseg8e16ff_v_i16m1x8(const int16_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg8e16ff_v_i16m1x8(rs1, new_vl, vl);
}

vuint16mf4x8_t test_vlseg8e16ff_v_u16mf4x8(const uint16_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg8e16ff_v_u16mf4x8(rs1, new_vl, vl);
}

vuint16mf2x8_t test_vlseg8e16ff_v_u16mf2x8(const uint16_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg8e16ff_v_u16mf2x8(rs1, new_vl, vl);
}

vuint16m1x8_t test_vlseg8e16ff_v_u16m1x8(const uint16_t *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vlseg8e16ff_v_u16m1x8(rs1, new_vl, vl);
}

vfloat16mf4x8_t test_vlseg8e16ff_v_f16mf4x8_m(vbool64_t vm, const _Float16 *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e16ff_v_f16mf4x8_m(vm, rs1, new_vl, vl);
}

vfloat16mf2x8_t test_vlseg8e16ff_v_f16mf2x8_m(vbool32_t vm, const _Float16 *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e16ff_v_f16mf2x8_m(vm, rs1, new_vl, vl);
}

vfloat16m1x8_t test_vlseg8e16ff_v_f16m1x8_m(vbool16_t vm, const _Float16 *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e16ff_v_f16m1x8_m(vm, rs1, new_vl, vl);
}

vint16mf4x8_t test_vlseg8e16ff_v_i16mf4x8_m(vbool64_t vm, const int16_t *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e16ff_v_i16mf4x8_m(vm, rs1, new_vl, vl);
}

vint16mf2x8_t test_vlseg8e16ff_v_i16mf2x8_m(vbool32_t vm, const int16_t *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e16ff_v_i16mf2x8_m(vm, rs1, new_vl, vl);
}

vint16m1x8_t test_vlseg8e16ff_v_i16m1x8_m(vbool16_t vm, const int16_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e16ff_v_i16m1x8_m(vm, rs1, new_vl, vl);
}

vuint16mf4x8_t test_vlseg8e16ff_v_u16mf4x8_m(vbool64_t vm, const uint16_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e16ff_v_u16mf4x8_m(vm, rs1, new_vl, vl);
}

vuint16mf2x8_t test_vlseg8e16ff_v_u16mf2x8_m(vbool32_t vm, const uint16_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e16ff_v_u16mf2x8_m(vm, rs1, new_vl, vl);
}

vuint16m1x8_t test_vlseg8e16ff_v_u16m1x8_m(vbool16_t vm, const uint16_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e16ff_v_u16m1x8_m(vm, rs1, new_vl, vl);
}
