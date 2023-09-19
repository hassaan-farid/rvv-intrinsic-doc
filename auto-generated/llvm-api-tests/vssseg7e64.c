// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vssseg7e64_v_f64m1x7(double *base, ptrdiff_t bstride,
                               vfloat64m1x7_t v_tuple, size_t vl) {
  return __riscv_vssseg7e64_v_f64m1x7(base, bstride, v_tuple, vl);
}

void test_vssseg7e64_v_i64m1x7(int64_t *base, ptrdiff_t bstride,
                               vint64m1x7_t v_tuple, size_t vl) {
  return __riscv_vssseg7e64_v_i64m1x7(base, bstride, v_tuple, vl);
}

void test_vssseg7e64_v_u64m1x7(uint64_t *base, ptrdiff_t bstride,
                               vuint64m1x7_t v_tuple, size_t vl) {
  return __riscv_vssseg7e64_v_u64m1x7(base, bstride, v_tuple, vl);
}

void test_vssseg7e64_v_f64m1x7_m(vbool64_t mask, double *base,
                                 ptrdiff_t bstride, vfloat64m1x7_t v_tuple,
                                 size_t vl) {
  return __riscv_vssseg7e64_v_f64m1x7_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg7e64_v_i64m1x7_m(vbool64_t mask, int64_t *base,
                                 ptrdiff_t bstride, vint64m1x7_t v_tuple,
                                 size_t vl) {
  return __riscv_vssseg7e64_v_i64m1x7_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg7e64_v_u64m1x7_m(vbool64_t mask, uint64_t *base,
                                 ptrdiff_t bstride, vuint64m1x7_t v_tuple,
                                 size_t vl) {
  return __riscv_vssseg7e64_v_u64m1x7_m(mask, base, bstride, v_tuple, vl);
}
