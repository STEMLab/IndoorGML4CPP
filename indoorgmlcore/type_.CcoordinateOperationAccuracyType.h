#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CcoordinateOperationAccuracyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CcoordinateOperationAccuracyType



namespace indoorgmlcore
{

class CcoordinateOperationAccuracyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CcoordinateOperationAccuracyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CcoordinateOperationAccuracyType(CcoordinateOperationAccuracyType const& init);
	void operator=(CcoordinateOperationAccuracyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CcoordinateOperationAccuracyType); }
	MemberAttribute<string_type,_altova_mi_altova_CcoordinateOperationAccuracyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_altova_CcoordinateOperationAccuracyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_altova_CcoordinateOperationAccuracyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_altova_CcoordinateOperationAccuracyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_altova_CcoordinateOperationAccuracyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_altova_CcoordinateOperationAccuracyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_altova_CcoordinateOperationAccuracyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_altova_CcoordinateOperationAccuracyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_altova_CcoordinateOperationAccuracyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<gmd::CDQ_AbsoluteExternalPositionalAccuracy_Type, _altova_mi_altova_CcoordinateOperationAccuracyType_altova_DQ_AbsoluteExternalPositionalAccuracy> DQ_AbsoluteExternalPositionalAccuracy;
	struct DQ_AbsoluteExternalPositionalAccuracy { typedef Iterator<gmd::CDQ_AbsoluteExternalPositionalAccuracy_Type> iterator; };
	MemberElement<gmd::CDQ_GriddedDataPositionalAccuracy_Type, _altova_mi_altova_CcoordinateOperationAccuracyType_altova_DQ_GriddedDataPositionalAccuracy> DQ_GriddedDataPositionalAccuracy;
	struct DQ_GriddedDataPositionalAccuracy { typedef Iterator<gmd::CDQ_GriddedDataPositionalAccuracy_Type> iterator; };
	MemberElement<gmd::CDQ_RelativeInternalPositionalAccuracy_Type, _altova_mi_altova_CcoordinateOperationAccuracyType_altova_DQ_RelativeInternalPositionalAccuracy> DQ_RelativeInternalPositionalAccuracy;
	struct DQ_RelativeInternalPositionalAccuracy { typedef Iterator<gmd::CDQ_RelativeInternalPositionalAccuracy_Type> iterator; };
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CcoordinateOperationAccuracyType
