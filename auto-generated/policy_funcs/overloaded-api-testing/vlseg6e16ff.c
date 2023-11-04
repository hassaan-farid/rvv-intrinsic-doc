#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4x6_t test_vlseg6e16ff_v_f16mf4x6_tu(vfloat16mf4x6_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tu(vd, rs1, new_vl, vl);
}

vfloat16mf2x6_t test_vlseg6e16ff_v_f16mf2x6_tu(vfloat16mf2x6_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tu(vd, rs1, new_vl, vl);
}

vfloat16m1x6_t test_vlseg6e16ff_v_f16m1x6_tu(vfloat16m1x6_t vd,
                                             const _Float16 *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tu(vd, rs1, new_vl, vl);
}

vint16mf4x6_t test_vlseg6e16ff_v_i16mf4x6_tu(vint16mf4x6_t vd,
                                             const int16_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg6e16ff_tu(vd, rs1, new_vl, vl);
}

vint16mf2x6_t test_vlseg6e16ff_v_i16mf2x6_tu(vint16mf2x6_t vd,
                                             const int16_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg6e16ff_tu(vd, rs1, new_vl, vl);
}

vint16m1x6_t test_vlseg6e16ff_v_i16m1x6_tu(vint16m1x6_t vd, const int16_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tu(vd, rs1, new_vl, vl);
}

vuint16mf4x6_t test_vlseg6e16ff_v_u16mf4x6_tu(vuint16mf4x6_t vd,
                                              const uint16_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tu(vd, rs1, new_vl, vl);
}

vuint16mf2x6_t test_vlseg6e16ff_v_u16mf2x6_tu(vuint16mf2x6_t vd,
                                              const uint16_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tu(vd, rs1, new_vl, vl);
}

vuint16m1x6_t test_vlseg6e16ff_v_u16m1x6_tu(vuint16m1x6_t vd,
                                            const uint16_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg6e16ff_tu(vd, rs1, new_vl, vl);
}

vfloat16mf4x6_t test_vlseg6e16ff_v_f16mf4x6_tum(vbool64_t vm,
                                                vfloat16mf4x6_t vd,
                                                const _Float16 *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16mf2x6_t test_vlseg6e16ff_v_f16mf2x6_tum(vbool32_t vm,
                                                vfloat16mf2x6_t vd,
                                                const _Float16 *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16m1x6_t test_vlseg6e16ff_v_f16m1x6_tum(vbool16_t vm, vfloat16m1x6_t vd,
                                              const _Float16 *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vint16mf4x6_t test_vlseg6e16ff_v_i16mf4x6_tum(vbool64_t vm, vint16mf4x6_t vd,
                                              const int16_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vint16mf2x6_t test_vlseg6e16ff_v_i16mf2x6_tum(vbool32_t vm, vint16mf2x6_t vd,
                                              const int16_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vint16m1x6_t test_vlseg6e16ff_v_i16m1x6_tum(vbool16_t vm, vint16m1x6_t vd,
                                            const int16_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg6e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint16mf4x6_t test_vlseg6e16ff_v_u16mf4x6_tum(vbool64_t vm, vuint16mf4x6_t vd,
                                               const uint16_t *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint16mf2x6_t test_vlseg6e16ff_v_u16mf2x6_tum(vbool32_t vm, vuint16mf2x6_t vd,
                                               const uint16_t *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint16m1x6_t test_vlseg6e16ff_v_u16m1x6_tum(vbool16_t vm, vuint16m1x6_t vd,
                                             const uint16_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16mf4x6_t test_vlseg6e16ff_v_f16mf4x6_tumu(vbool64_t vm,
                                                 vfloat16mf4x6_t vd,
                                                 const _Float16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16mf2x6_t test_vlseg6e16ff_v_f16mf2x6_tumu(vbool32_t vm,
                                                 vfloat16mf2x6_t vd,
                                                 const _Float16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16m1x6_t test_vlseg6e16ff_v_f16m1x6_tumu(vbool16_t vm, vfloat16m1x6_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint16mf4x6_t test_vlseg6e16ff_v_i16mf4x6_tumu(vbool64_t vm, vint16mf4x6_t vd,
                                               const int16_t *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint16mf2x6_t test_vlseg6e16ff_v_i16mf2x6_tumu(vbool32_t vm, vint16mf2x6_t vd,
                                               const int16_t *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint16m1x6_t test_vlseg6e16ff_v_i16m1x6_tumu(vbool16_t vm, vint16m1x6_t vd,
                                             const int16_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg6e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16mf4x6_t test_vlseg6e16ff_v_u16mf4x6_tumu(vbool64_t vm, vuint16mf4x6_t vd,
                                                const uint16_t *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16mf2x6_t test_vlseg6e16ff_v_u16mf2x6_tumu(vbool32_t vm, vuint16mf2x6_t vd,
                                                const uint16_t *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16m1x6_t test_vlseg6e16ff_v_u16m1x6_tumu(vbool16_t vm, vuint16m1x6_t vd,
                                              const uint16_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16mf4x6_t test_vlseg6e16ff_v_f16mf4x6_mu(vbool64_t vm, vfloat16mf4x6_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vfloat16mf2x6_t test_vlseg6e16ff_v_f16mf2x6_mu(vbool32_t vm, vfloat16mf2x6_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vfloat16m1x6_t test_vlseg6e16ff_v_f16m1x6_mu(vbool16_t vm, vfloat16m1x6_t vd,
                                             const _Float16 *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vint16mf4x6_t test_vlseg6e16ff_v_i16mf4x6_mu(vbool64_t vm, vint16mf4x6_t vd,
                                             const int16_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg6e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vint16mf2x6_t test_vlseg6e16ff_v_i16mf2x6_mu(vbool32_t vm, vint16mf2x6_t vd,
                                             const int16_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg6e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vint16m1x6_t test_vlseg6e16ff_v_i16m1x6_mu(vbool16_t vm, vint16m1x6_t vd,
                                           const int16_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg6e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint16mf4x6_t test_vlseg6e16ff_v_u16mf4x6_mu(vbool64_t vm, vuint16mf4x6_t vd,
                                              const uint16_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint16mf2x6_t test_vlseg6e16ff_v_u16mf2x6_mu(vbool32_t vm, vuint16mf2x6_t vd,
                                              const uint16_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint16m1x6_t test_vlseg6e16ff_v_u16m1x6_mu(vbool16_t vm, vuint16m1x6_t vd,
                                            const uint16_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg6e16ff_mu(vm, vd, rs1, new_vl, vl);
}
