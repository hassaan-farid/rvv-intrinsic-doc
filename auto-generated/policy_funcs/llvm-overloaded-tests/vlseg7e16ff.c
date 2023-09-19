// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x7_t test_vlseg7e16ff_v_f16mf4x7_tu(vfloat16mf4x7_t maskedoff_tuple,
                                               const _Float16 *base,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat16mf2x7_t test_vlseg7e16ff_v_f16mf2x7_tu(vfloat16mf2x7_t maskedoff_tuple,
                                               const _Float16 *base,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat16m1x7_t test_vlseg7e16ff_v_f16m1x7_tu(vfloat16m1x7_t maskedoff_tuple,
                                             const _Float16 *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint16mf4x7_t test_vlseg7e16ff_v_i16mf4x7_tu(vint16mf4x7_t maskedoff_tuple,
                                             const int16_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint16mf2x7_t test_vlseg7e16ff_v_i16mf2x7_tu(vint16mf2x7_t maskedoff_tuple,
                                             const int16_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint16m1x7_t test_vlseg7e16ff_v_i16m1x7_tu(vint16m1x7_t maskedoff_tuple,
                                           const int16_t *base, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg7e16ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint16mf4x7_t test_vlseg7e16ff_v_u16mf4x7_tu(vuint16mf4x7_t maskedoff_tuple,
                                              const uint16_t *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint16mf2x7_t test_vlseg7e16ff_v_u16mf2x7_tu(vuint16mf2x7_t maskedoff_tuple,
                                              const uint16_t *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint16m1x7_t test_vlseg7e16ff_v_u16m1x7_tu(vuint16m1x7_t maskedoff_tuple,
                                            const uint16_t *base,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat16mf4x7_t test_vlseg7e16ff_v_f16mf4x7_tum(vbool64_t mask,
                                                vfloat16mf4x7_t maskedoff_tuple,
                                                const _Float16 *base,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16mf2x7_t test_vlseg7e16ff_v_f16mf2x7_tum(vbool32_t mask,
                                                vfloat16mf2x7_t maskedoff_tuple,
                                                const _Float16 *base,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16m1x7_t test_vlseg7e16ff_v_f16m1x7_tum(vbool16_t mask,
                                              vfloat16m1x7_t maskedoff_tuple,
                                              const _Float16 *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16mf4x7_t test_vlseg7e16ff_v_i16mf4x7_tum(vbool64_t mask,
                                              vint16mf4x7_t maskedoff_tuple,
                                              const int16_t *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16mf2x7_t test_vlseg7e16ff_v_i16mf2x7_tum(vbool32_t mask,
                                              vint16mf2x7_t maskedoff_tuple,
                                              const int16_t *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16m1x7_t test_vlseg7e16ff_v_i16m1x7_tum(vbool16_t mask,
                                            vint16m1x7_t maskedoff_tuple,
                                            const int16_t *base, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg7e16ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16mf4x7_t test_vlseg7e16ff_v_u16mf4x7_tum(vbool64_t mask,
                                               vuint16mf4x7_t maskedoff_tuple,
                                               const uint16_t *base,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16mf2x7_t test_vlseg7e16ff_v_u16mf2x7_tum(vbool32_t mask,
                                               vuint16mf2x7_t maskedoff_tuple,
                                               const uint16_t *base,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16m1x7_t test_vlseg7e16ff_v_u16m1x7_tum(vbool16_t mask,
                                             vuint16m1x7_t maskedoff_tuple,
                                             const uint16_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16mf4x7_t test_vlseg7e16ff_v_f16mf4x7_tumu(
    vbool64_t mask, vfloat16mf4x7_t maskedoff_tuple, const _Float16 *base,
    size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16mf2x7_t test_vlseg7e16ff_v_f16mf2x7_tumu(
    vbool32_t mask, vfloat16mf2x7_t maskedoff_tuple, const _Float16 *base,
    size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16m1x7_t test_vlseg7e16ff_v_f16m1x7_tumu(vbool16_t mask,
                                               vfloat16m1x7_t maskedoff_tuple,
                                               const _Float16 *base,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16mf4x7_t test_vlseg7e16ff_v_i16mf4x7_tumu(vbool64_t mask,
                                               vint16mf4x7_t maskedoff_tuple,
                                               const int16_t *base,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16mf2x7_t test_vlseg7e16ff_v_i16mf2x7_tumu(vbool32_t mask,
                                               vint16mf2x7_t maskedoff_tuple,
                                               const int16_t *base,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16m1x7_t test_vlseg7e16ff_v_i16m1x7_tumu(vbool16_t mask,
                                             vint16m1x7_t maskedoff_tuple,
                                             const int16_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16mf4x7_t test_vlseg7e16ff_v_u16mf4x7_tumu(vbool64_t mask,
                                                vuint16mf4x7_t maskedoff_tuple,
                                                const uint16_t *base,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16mf2x7_t test_vlseg7e16ff_v_u16mf2x7_tumu(vbool32_t mask,
                                                vuint16mf2x7_t maskedoff_tuple,
                                                const uint16_t *base,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16m1x7_t test_vlseg7e16ff_v_u16m1x7_tumu(vbool16_t mask,
                                              vuint16m1x7_t maskedoff_tuple,
                                              const uint16_t *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16mf4x7_t test_vlseg7e16ff_v_f16mf4x7_mu(vbool64_t mask,
                                               vfloat16mf4x7_t maskedoff_tuple,
                                               const _Float16 *base,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16mf2x7_t test_vlseg7e16ff_v_f16mf2x7_mu(vbool32_t mask,
                                               vfloat16mf2x7_t maskedoff_tuple,
                                               const _Float16 *base,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16m1x7_t test_vlseg7e16ff_v_f16m1x7_mu(vbool16_t mask,
                                             vfloat16m1x7_t maskedoff_tuple,
                                             const _Float16 *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16mf4x7_t test_vlseg7e16ff_v_i16mf4x7_mu(vbool64_t mask,
                                             vint16mf4x7_t maskedoff_tuple,
                                             const int16_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16mf2x7_t test_vlseg7e16ff_v_i16mf2x7_mu(vbool32_t mask,
                                             vint16mf2x7_t maskedoff_tuple,
                                             const int16_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16m1x7_t test_vlseg7e16ff_v_i16m1x7_mu(vbool16_t mask,
                                           vint16m1x7_t maskedoff_tuple,
                                           const int16_t *base, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg7e16ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16mf4x7_t test_vlseg7e16ff_v_u16mf4x7_mu(vbool64_t mask,
                                              vuint16mf4x7_t maskedoff_tuple,
                                              const uint16_t *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16mf2x7_t test_vlseg7e16ff_v_u16mf2x7_mu(vbool32_t mask,
                                              vuint16mf2x7_t maskedoff_tuple,
                                              const uint16_t *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16m1x7_t test_vlseg7e16ff_v_u16m1x7_mu(vbool16_t mask,
                                            vuint16m1x7_t maskedoff_tuple,
                                            const uint16_t *base,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}
