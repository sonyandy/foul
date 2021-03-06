#include "obj.h"

extern inline bool foul_is_marked(foul_obj_t const *);
extern inline void foul_set_marked(foul_obj_t *);
extern inline void foul_set_unmarked(foul_obj_t *);
extern inline void foul_obj_init(foul_obj_t *, foul_obj_vtable_t const *);
extern inline size_t foul_size(foul_obj_t const*);
extern inline foul_obj_t **foul_begin(foul_obj_t *);
extern inline foul_obj_t **foul_end(foul_obj_t *);
