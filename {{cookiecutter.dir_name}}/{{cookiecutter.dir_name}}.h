#ifndef {{cookiecutter.module_name.upper().replace(' ', '') + '_H'}}
#define {{cookiecutter.module_name.upper().replace(' ', '') + '_H'}}

#include "{{cookiecutter.inherit_from.lower()}}.h"

class {{cookiecutter.class_name}} : public {{cookiecutter.inherit_from}} {
    GDCLASS({{cookiecutter.class_name}}, {{cookiecutter.inherit_from}});

public:
    {{cookiecutter.class_name}}();

protected:
    static void _bind_methods();


};

#endif
