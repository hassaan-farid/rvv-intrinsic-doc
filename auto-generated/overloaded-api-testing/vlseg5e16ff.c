#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4x5_t test_vlseg5e16ff_v_f16mf4x5_m(vbool64_t mask,
                                              const float16_t *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff(mask, base, new_vl, vl);
}

vfloat16mf2x5_t test_vlseg5e16ff_v_f16mf2x5_m(vbool32_t mask,
                                              const float16_t *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff(mask, base, new_vl, vl);
}

vfloat16m1x5_t test_vlseg5e16ff_v_f16m1x5_m(vbool16_t mask,
                                            const float16_t *base,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff(mask, base, new_vl, vl);
}

vint16mf4x5_t test_vlseg5e16ff_v_i16mf4x5_m(vbool64_t mask, const int16_t *base,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff(mask, base, new_vl, vl);
}

vint16mf2x5_t test_vlseg5e16ff_v_i16mf2x5_m(vbool32_t mask, const int16_t *base,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff(mask, base, new_vl, vl);
}

vint16m1x5_t test_vlseg5e16ff_v_i16m1x5_m(vbool16_t mask, const int16_t *base,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff(mask, base, new_vl, vl);
}

vuint16mf4x5_t test_vlseg5e16ff_v_u16mf4x5_m(vbool64_t mask,
                                             const uint16_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff(mask, base, new_vl, vl);
}

vuint16mf2x5_t test_vlseg5e16ff_v_u16mf2x5_m(vbool32_t mask,
                                             const uint16_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff(mask, base, new_vl, vl);
}

vuint16m1x5_t test_vlseg5e16ff_v_u16m1x5_m(vbool16_t mask, const uint16_t *base,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff(mask, base, new_vl, vl);
}
