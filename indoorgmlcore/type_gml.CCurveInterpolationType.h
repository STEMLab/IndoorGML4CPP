#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCurveInterpolationType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCurveInterpolationType



namespace indoorgmlcore
{

namespace gml
{	

class CCurveInterpolationType : public TypeBase
{
public:
	indoorgmlcore_EXPORT CCurveInterpolationType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCurveInterpolationType(CCurveInterpolationType const& init);
	void operator=(CCurveInterpolationType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_gml_altova_CCurveInterpolationType); }

	enum EnumValues {
		Invalid = -1,
		k_linear = 0, // linear
		k_geodesic = 1, // geodesic
		k_circularArc3Points = 2, // circularArc3Points
		k_circularArc2PointWithBulge = 3, // circularArc2PointWithBulge
		k_circularArcCenterPointWithRadius = 4, // circularArcCenterPointWithRadius
		k_elliptical = 5, // elliptical
		k_clothoid = 6, // clothoid
		k_conic = 7, // conic
		k_polynomialSpline = 8, // polynomialSpline
		k_cubicSpline = 9, // cubicSpline
		k_rationalSpline = 10, // rationalSpline
		EnumValueCount
	};
	void operator= (const string_type& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::AnySimpleTypeFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator string_type()
	{
		return CastAs<string_type >::Do(GetNode(), 0);
	}
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCurveInterpolationType
