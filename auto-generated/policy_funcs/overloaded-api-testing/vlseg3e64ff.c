#include <riscv_vector.h>
#include <stdint.h>

vfloat64m1x3_t test_vlseg3e64ff_v_f64m1x3_tu(vfloat64m1x3_t vd,
                                             const double *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg3e64ff_tu(vd, rs1, new_vl, vl);
}

vfloat64m2x3_t test_vlseg3e64ff_v_f64m2x3_tu(vfloat64m2x3_t vd,
                                             const double *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg3e64ff_tu(vd, rs1, new_vl, vl);
}

vint64m1x3_t test_vlseg3e64ff_v_i64m1x3_tu(vint64m1x3_t vd, const int64_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tu(vd, rs1, new_vl, vl);
}

vint64m2x3_t test_vlseg3e64ff_v_i64m2x3_tu(vint64m2x3_t vd, const int64_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tu(vd, rs1, new_vl, vl);
}

vuint64m1x3_t test_vlseg3e64ff_v_u64m1x3_tu(vuint64m1x3_t vd,
                                            const uint64_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg3e64ff_tu(vd, rs1, new_vl, vl);
}

vuint64m2x3_t test_vlseg3e64ff_v_u64m2x3_tu(vuint64m2x3_t vd,
                                            const uint64_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg3e64ff_tu(vd, rs1, new_vl, vl);
}

vfloat64m1x3_t test_vlseg3e64ff_v_f64m1x3_tum(vbool64_t vm, vfloat64m1x3_t vd,
                                              const double *rs1, size_t *new_vl,
                                              size_t vl) {
  return __riscv_vlseg3e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vfloat64m2x3_t test_vlseg3e64ff_v_f64m2x3_tum(vbool32_t vm, vfloat64m2x3_t vd,
                                              const double *rs1, size_t *new_vl,
                                              size_t vl) {
  return __riscv_vlseg3e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vint64m1x3_t test_vlseg3e64ff_v_i64m1x3_tum(vbool64_t vm, vint64m1x3_t vd,
                                            const int64_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg3e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vint64m2x3_t test_vlseg3e64ff_v_i64m2x3_tum(vbool32_t vm, vint64m2x3_t vd,
                                            const int64_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg3e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint64m1x3_t test_vlseg3e64ff_v_u64m1x3_tum(vbool64_t vm, vuint64m1x3_t vd,
                                             const uint64_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint64m2x3_t test_vlseg3e64ff_v_u64m2x3_tum(vbool32_t vm, vuint64m2x3_t vd,
                                             const uint64_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vfloat64m1x3_t test_vlseg3e64ff_v_f64m1x3_tumu(vbool64_t vm, vfloat64m1x3_t vd,
                                               const double *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat64m2x3_t test_vlseg3e64ff_v_f64m2x3_tumu(vbool32_t vm, vfloat64m2x3_t vd,
                                               const double *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint64m1x3_t test_vlseg3e64ff_v_i64m1x3_tumu(vbool64_t vm, vint64m1x3_t vd,
                                             const int64_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg3e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint64m2x3_t test_vlseg3e64ff_v_i64m2x3_tumu(vbool32_t vm, vint64m2x3_t vd,
                                             const int64_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg3e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint64m1x3_t test_vlseg3e64ff_v_u64m1x3_tumu(vbool64_t vm, vuint64m1x3_t vd,
                                              const uint64_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint64m2x3_t test_vlseg3e64ff_v_u64m2x3_tumu(vbool32_t vm, vuint64m2x3_t vd,
                                              const uint64_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat64m1x3_t test_vlseg3e64ff_v_f64m1x3_mu(vbool64_t vm, vfloat64m1x3_t vd,
                                             const double *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg3e64ff_mu(vm, vd, rs1, new_vl, vl);
}

vfloat64m2x3_t test_vlseg3e64ff_v_f64m2x3_mu(vbool32_t vm, vfloat64m2x3_t vd,
                                             const double *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg3e64ff_mu(vm, vd, rs1, new_vl, vl);
}

vint64m1x3_t test_vlseg3e64ff_v_i64m1x3_mu(vbool64_t vm, vint64m1x3_t vd,
                                           const int64_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg3e64ff_mu(vm, vd, rs1, new_vl, vl);
}

vint64m2x3_t test_vlseg3e64ff_v_i64m2x3_mu(vbool32_t vm, vint64m2x3_t vd,
                                           const int64_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg3e64ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint64m1x3_t test_vlseg3e64ff_v_u64m1x3_mu(vbool64_t vm, vuint64m1x3_t vd,
                                            const uint64_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg3e64ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint64m2x3_t test_vlseg3e64ff_v_u64m2x3_mu(vbool32_t vm, vuint64m2x3_t vd,
                                            const uint64_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg3e64ff_mu(vm, vd, rs1, new_vl, vl);
}
