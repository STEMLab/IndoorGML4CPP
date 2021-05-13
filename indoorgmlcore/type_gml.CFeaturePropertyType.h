#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CFeaturePropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CFeaturePropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CFeaturePropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CFeaturePropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CFeaturePropertyType(CFeaturePropertyType const& init);
	void operator=(CFeaturePropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CFeaturePropertyType); }

	MemberAttribute<bool,_altova_mi_gml_altova_CFeaturePropertyType_altova_owns, 0, 0> owns;	// owns Cboolean
	MemberAttribute<string_type,_altova_mi_gml_altova_CFeaturePropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gml_altova_CFeaturePropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gml_altova_CFeaturePropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CFeaturePropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CFeaturePropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gml_altova_CFeaturePropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gml_altova_CFeaturePropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gml_altova_CFeaturePropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_gml_altova_CFeaturePropertyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<gml::CDirectedObservationType, _altova_mi_gml_altova_CFeaturePropertyType_altova_DirectedObservation> DirectedObservation;
	struct DirectedObservation { typedef Iterator<gml::CDirectedObservationType> iterator; };
	MemberElement<gml::CDirectedObservationAtDistanceType, _altova_mi_gml_altova_CFeaturePropertyType_altova_DirectedObservationAtDistance> DirectedObservationAtDistance;
	struct DirectedObservationAtDistance { typedef Iterator<gml::CDirectedObservationAtDistanceType> iterator; };
	MemberElement<gml::CDynamicFeatureType, _altova_mi_gml_altova_CFeaturePropertyType_altova_DynamicFeature> DynamicFeature;
	struct DynamicFeature { typedef Iterator<gml::CDynamicFeatureType> iterator; };
	MemberElement<gml::CDynamicFeatureCollectionType, _altova_mi_gml_altova_CFeaturePropertyType_altova_DynamicFeatureCollection> DynamicFeatureCollection;
	struct DynamicFeatureCollection { typedef Iterator<gml::CDynamicFeatureCollectionType> iterator; };
	MemberElement<gml::CFeatureCollectionType, _altova_mi_gml_altova_CFeaturePropertyType_altova_FeatureCollection> FeatureCollection;
	struct FeatureCollection { typedef Iterator<gml::CFeatureCollectionType> iterator; };
	MemberElement<gml::CDiscreteCoverageType, _altova_mi_gml_altova_CFeaturePropertyType_altova_GridCoverage> GridCoverage;
	struct GridCoverage { typedef Iterator<gml::CDiscreteCoverageType> iterator; };
	MemberElement<gml::CDiscreteCoverageType, _altova_mi_gml_altova_CFeaturePropertyType_altova_MultiCurveCoverage> MultiCurveCoverage;
	struct MultiCurveCoverage { typedef Iterator<gml::CDiscreteCoverageType> iterator; };
	MemberElement<gml::CDiscreteCoverageType, _altova_mi_gml_altova_CFeaturePropertyType_altova_MultiPointCoverage> MultiPointCoverage;
	struct MultiPointCoverage { typedef Iterator<gml::CDiscreteCoverageType> iterator; };
	MemberElement<gml::CDiscreteCoverageType, _altova_mi_gml_altova_CFeaturePropertyType_altova_MultiSolidCoverage> MultiSolidCoverage;
	struct MultiSolidCoverage { typedef Iterator<gml::CDiscreteCoverageType> iterator; };
	MemberElement<gml::CDiscreteCoverageType, _altova_mi_gml_altova_CFeaturePropertyType_altova_MultiSurfaceCoverage> MultiSurfaceCoverage;
	struct MultiSurfaceCoverage { typedef Iterator<gml::CDiscreteCoverageType> iterator; };
	MemberElement<gml::CObservationType, _altova_mi_gml_altova_CFeaturePropertyType_altova_Observation> Observation;
	struct Observation { typedef Iterator<gml::CObservationType> iterator; };
	MemberElement<gml::CDiscreteCoverageType, _altova_mi_gml_altova_CFeaturePropertyType_altova_RectifiedGridCoverage> RectifiedGridCoverage;
	struct RectifiedGridCoverage { typedef Iterator<gml::CDiscreteCoverageType> iterator; };
	MemberElement<CCellSpaceType, _altova_mi_gml_altova_CFeaturePropertyType_altova_CellSpace> CellSpace;
	struct CellSpace { typedef Iterator<CCellSpaceType> iterator; };
	MemberElement<CCellSpaceBoundaryType, _altova_mi_gml_altova_CFeaturePropertyType_altova_CellSpaceBoundary> CellSpaceBoundary;
	struct CellSpaceBoundary { typedef Iterator<CCellSpaceBoundaryType> iterator; };
	MemberElement<CIndoorFeaturesType, _altova_mi_gml_altova_CFeaturePropertyType_altova_IndoorFeatures> IndoorFeatures;
	struct IndoorFeatures { typedef Iterator<CIndoorFeaturesType> iterator; };
	MemberElement<CInterLayerConnectionType, _altova_mi_gml_altova_CFeaturePropertyType_altova_InterLayerConnection> InterLayerConnection;
	struct InterLayerConnection { typedef Iterator<CInterLayerConnectionType> iterator; };
	MemberElement<CMultiLayeredGraphType, _altova_mi_gml_altova_CFeaturePropertyType_altova_MultiLayeredGraph> MultiLayeredGraph;
	struct MultiLayeredGraph { typedef Iterator<CMultiLayeredGraphType> iterator; };
	MemberElement<CPrimalSpaceFeaturesType, _altova_mi_gml_altova_CFeaturePropertyType_altova_PrimalSpaceFeatures> PrimalSpaceFeatures;
	struct PrimalSpaceFeatures { typedef Iterator<CPrimalSpaceFeaturesType> iterator; };
	MemberElement<CSpaceLayerType, _altova_mi_gml_altova_CFeaturePropertyType_altova_SpaceLayer> SpaceLayer;
	struct SpaceLayer { typedef Iterator<CSpaceLayerType> iterator; };
	MemberElement<CStateType, _altova_mi_gml_altova_CFeaturePropertyType_altova_State> State;
	struct State { typedef Iterator<CStateType> iterator; };
	MemberElement<CTransitionType, _altova_mi_gml_altova_CFeaturePropertyType_altova_Transition> Transition;
	struct Transition { typedef Iterator<CTransitionType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CFeaturePropertyType
