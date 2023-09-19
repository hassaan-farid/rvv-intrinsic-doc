#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1x3_t test_vlsseg3e64_v_f64m1x3_m(vbool64_t mask,
                                           const float64_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64(mask, base, bstride, vl);
}

vfloat64m2x3_t test_vlsseg3e64_v_f64m2x3_m(vbool32_t mask,
                                           const float64_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64(mask, base, bstride, vl);
}

vint64m1x3_t test_vlsseg3e64_v_i64m1x3_m(vbool64_t mask, const int64_t *base,
                                         ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64(mask, base, bstride, vl);
}

vint64m2x3_t test_vlsseg3e64_v_i64m2x3_m(vbool32_t mask, const int64_t *base,
                                         ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64(mask, base, bstride, vl);
}

vuint64m1x3_t test_vlsseg3e64_v_u64m1x3_m(vbool64_t mask, const uint64_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64(mask, base, bstride, vl);
}

vuint64m2x3_t test_vlsseg3e64_v_u64m2x3_m(vbool32_t mask, const uint64_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64(mask, base, bstride, vl);
}
