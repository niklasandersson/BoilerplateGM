#include "register_types.h"
#include "class_db.h"
#include "{{cookiecutter.dir_name}}.h"

void register_{{cookiecutter.dir_name}}_types() {

        ClassDB::register_class<{{cookiecutter.class_name}}>();
}

void unregister_{{cookiecutter.dir_name}}_types() {
   //nothing to do here
}
