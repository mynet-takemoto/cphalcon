
extern zend_class_entry *phalcon_assets_resource_css_ce;

ZEPHIR_INIT_CLASS(Phalcon_Assets_Resource_Css);

PHP_METHOD(Phalcon_Assets_Resource_Css, __construct);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_assets_resource_css___construct, 0, 0, 0)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, local)
	ZEND_ARG_INFO(0, filter)
	ZEND_ARG_INFO(0, attributes)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_assets_resource_css_method_entry) {
	PHP_ME(Phalcon_Assets_Resource_Css, __construct, arginfo_phalcon_assets_resource_css___construct, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
