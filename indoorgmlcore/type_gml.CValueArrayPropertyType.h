#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CValueArrayPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CValueArrayPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CValueArrayPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CValueArrayPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CValueArrayPropertyType(CValueArrayPropertyType const& init);
	void operator=(CValueArrayPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CValueArrayPropertyType); }

	MemberAttribute<bool,_altova_mi_gml_altova_CValueArrayPropertyType_altova_owns, 0, 0> owns;	// owns Cboolean
	MemberElement<CBooleanType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_Boolean> Boolean;
	struct Boolean { typedef Iterator<CBooleanType> iterator; };
	MemberElement<gml::CbooleanOrNilReasonListType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_BooleanList> BooleanList;
	struct BooleanList { typedef Iterator<gml::CbooleanOrNilReasonListType> iterator; };
	MemberElement<CCategoryType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_Category> Category;
	struct Category { typedef Iterator<CCategoryType> iterator; };
	MemberElement<gml::CCategoryExtentType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_CategoryExtent> CategoryExtent;
	struct CategoryExtent { typedef Iterator<gml::CCategoryExtentType> iterator; };
	MemberElement<gml::CCodeOrNilReasonListType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_CategoryList> CategoryList;
	struct CategoryList { typedef Iterator<gml::CCodeOrNilReasonListType> iterator; };
	MemberElement<gml::CCompositeValueType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_CompositeValue> CompositeValue;
	struct CompositeValue { typedef Iterator<gml::CCompositeValueType> iterator; };
	MemberElement<CCountType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_Count> Count;
	struct Count { typedef Iterator<CCountType> iterator; };
	MemberElement<gml::CCountExtentTypeType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_CountExtent> CountExtent;
	struct CountExtent { typedef Iterator<gml::CCountExtentTypeType> iterator; };
	MemberElement<gml::CintegerOrNilReasonListType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_CountList> CountList;
	struct CountList { typedef Iterator<gml::CintegerOrNilReasonListType> iterator; };
	MemberElement<CQuantityType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_Quantity> Quantity;
	struct Quantity { typedef Iterator<CQuantityType> iterator; };
	MemberElement<gml::CQuantityExtentType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_QuantityExtent> QuantityExtent;
	struct QuantityExtent { typedef Iterator<gml::CQuantityExtentType> iterator; };
	MemberElement<gml::CMeasureOrNilReasonListType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_QuantityList> QuantityList;
	struct QuantityList { typedef Iterator<gml::CMeasureOrNilReasonListType> iterator; };
	MemberElement<gml::CValueArrayType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_ValueArray> ValueArray;
	struct ValueArray { typedef Iterator<gml::CValueArrayType> iterator; };
	MemberElement<gml::CCompositeCurveType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_CompositeCurve> CompositeCurve;
	struct CompositeCurve { typedef Iterator<gml::CCompositeCurveType> iterator; };
	MemberElement<gml::CCompositeSolidType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_CompositeSolid> CompositeSolid;
	struct CompositeSolid { typedef Iterator<gml::CCompositeSolidType> iterator; };
	MemberElement<gml::CCompositeSurfaceType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_CompositeSurface> CompositeSurface;
	struct CompositeSurface { typedef Iterator<gml::CCompositeSurfaceType> iterator; };
	MemberElement<gml::CCurveType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_Curve> Curve;
	struct Curve { typedef Iterator<gml::CCurveType> iterator; };
	MemberElement<gml::CGeometricComplexType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_GeometricComplex> GeometricComplex;
	struct GeometricComplex { typedef Iterator<gml::CGeometricComplexType> iterator; };
	MemberElement<gml::CGridType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_Grid> Grid;
	struct Grid { typedef Iterator<gml::CGridType> iterator; };
	MemberElement<gml::CLineStringType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_LineString> LineString;
	struct LineString { typedef Iterator<gml::CLineStringType> iterator; };
	MemberElement<gml::CLinearRingType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_LinearRing> LinearRing;
	struct LinearRing { typedef Iterator<gml::CLinearRingType> iterator; };
	MemberElement<gml::CMultiCurveType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_MultiCurve> MultiCurve;
	struct MultiCurve { typedef Iterator<gml::CMultiCurveType> iterator; };
	MemberElement<gml::CMultiGeometryType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_MultiGeometry> MultiGeometry;
	struct MultiGeometry { typedef Iterator<gml::CMultiGeometryType> iterator; };
	MemberElement<gml::CMultiPointType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_MultiPoint> MultiPoint;
	struct MultiPoint { typedef Iterator<gml::CMultiPointType> iterator; };
	MemberElement<gml::CMultiSolidType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_MultiSolid> MultiSolid;
	struct MultiSolid { typedef Iterator<gml::CMultiSolidType> iterator; };
	MemberElement<gml::CMultiSurfaceType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_MultiSurface> MultiSurface;
	struct MultiSurface { typedef Iterator<gml::CMultiSurfaceType> iterator; };
	MemberElement<gml::COrientableCurveType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_OrientableCurve> OrientableCurve;
	struct OrientableCurve { typedef Iterator<gml::COrientableCurveType> iterator; };
	MemberElement<gml::COrientableSurfaceType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_OrientableSurface> OrientableSurface;
	struct OrientableSurface { typedef Iterator<gml::COrientableSurfaceType> iterator; };
	MemberElement<gml::CPointType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_Point> Point;
	struct Point { typedef Iterator<gml::CPointType> iterator; };
	MemberElement<gml::CPolygonType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_Polygon> Polygon;
	struct Polygon { typedef Iterator<gml::CPolygonType> iterator; };
	MemberElement<gml::CSurfaceType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_PolyhedralSurface> PolyhedralSurface;
	struct PolyhedralSurface { typedef Iterator<gml::CSurfaceType> iterator; };
	MemberElement<gml::CRectifiedGridType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_RectifiedGrid> RectifiedGrid;
	struct RectifiedGrid { typedef Iterator<gml::CRectifiedGridType> iterator; };
	MemberElement<gml::CRingType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_Ring> Ring;
	struct Ring { typedef Iterator<gml::CRingType> iterator; };
	MemberElement<gml::CShellType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_Shell> Shell;
	struct Shell { typedef Iterator<gml::CShellType> iterator; };
	MemberElement<gml::CSolidType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_Solid> Solid;
	struct Solid { typedef Iterator<gml::CSolidType> iterator; };
	MemberElement<gml::CSurfaceType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_Surface> Surface;
	struct Surface { typedef Iterator<gml::CSurfaceType> iterator; };
	MemberElement<gml::CTinType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_Tin> Tin;
	struct Tin { typedef Iterator<gml::CTinType> iterator; };
	MemberElement<gml::CSurfaceType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_TriangulatedSurface> TriangulatedSurface;
	struct TriangulatedSurface { typedef Iterator<gml::CSurfaceType> iterator; };
	MemberElement<gml::CTimeEdgeType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_TimeEdge> TimeEdge;
	struct TimeEdge { typedef Iterator<gml::CTimeEdgeType> iterator; };
	MemberElement<gml::CTimeInstantType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_TimeInstant> TimeInstant;
	struct TimeInstant { typedef Iterator<gml::CTimeInstantType> iterator; };
	MemberElement<gml::CTimeNodeType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_TimeNode> TimeNode;
	struct TimeNode { typedef Iterator<gml::CTimeNodeType> iterator; };
	MemberElement<gml::CTimePeriodType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_TimePeriod> TimePeriod;
	struct TimePeriod { typedef Iterator<gml::CTimePeriodType> iterator; };
	MemberElement<gml::CTimeTopologyComplexType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_TimeTopologyComplex> TimeTopologyComplex;
	struct TimeTopologyComplex { typedef Iterator<gml::CTimeTopologyComplexType> iterator; };
	MemberElement<gml::CNilReasonTypeType, _altova_mi_gml_altova_CValueArrayPropertyType_altova_Null> Null;
	struct Null { typedef Iterator<gml::CNilReasonTypeType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CValueArrayPropertyType
