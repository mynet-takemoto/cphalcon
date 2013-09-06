
extern zend_class_entry *phalcon_annotations_annotation_ce;

ZEPHIR_INIT_CLASS(Phalcon_Annotations_Annotation);

PHP_METHOD(Phalcon_Annotations_Annotation, __construct);
PHP_METHOD(Phalcon_Annotations_Annotation, getName);
PHP_METHOD(Phalcon_Annotations_Annotation, getExpression);
PHP_METHOD(Phalcon_Annotations_Annotation, getExprArguments);
PHP_METHOD(Phalcon_Annotations_Annotation, getArguments);
PHP_METHOD(Phalcon_Annotations_Annotation, numberArguments);
PHP_METHOD(Phalcon_Annotations_Annotation, getArgument);
PHP_METHOD(Phalcon_Annotations_Annotation, hasArgument);
PHP_METHOD(Phalcon_Annotations_Annotation, getNamedArgument);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_annotations_annotation___construct, 0, 0, 0)
	ZEND_ARG_INFO(0, reflectionData)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_annotations_annotation_getExpression, 0, 0, 0)
	ZEND_ARG_INFO(0, expr)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_annotations_annotation_getArgument, 0, 0, 0)
	ZEND_ARG_INFO(0, position)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_annotations_annotation_hasArgument, 0, 0, 0)
	ZEND_ARG_INFO(0, position)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_annotations_annotation_getNamedArgument, 0, 0, 0)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_annotations_annotation_method_entry) {
	PHP_ME(Phalcon_Annotations_Annotation, __construct, arginfo_phalcon_annotations_annotation___construct, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Annotations_Annotation, getName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Annotations_Annotation, getExpression, arginfo_phalcon_annotations_annotation_getExpression, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Annotations_Annotation, getExprArguments, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Annotations_Annotation, getArguments, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Annotations_Annotation, numberArguments, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Annotations_Annotation, getArgument, arginfo_phalcon_annotations_annotation_getArgument, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Annotations_Annotation, hasArgument, arginfo_phalcon_annotations_annotation_hasArgument, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Annotations_Annotation, getNamedArgument, arginfo_phalcon_annotations_annotation_getNamedArgument, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
