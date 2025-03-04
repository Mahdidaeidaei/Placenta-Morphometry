#ifndef POPULATION_H
#define POPULATION_H


#include"core/data/GP/CartesianProduct.h"
#include"core/data/GP/Dynamic2Static.h"
#include"core/data/GP/EmptyType.h"
#include"core/data/GP/LokiTypeInfo.h"
#include"core/data/GP/NullType.h"
#include"core/data/typeF/TypeTraitsF.h"
#include"core/data/GP/Type2Id.h"
#include"core/data/GP/Typelist.h"
#include"core/data/GP/TypelistMacros.h"
#include"core/data/GP/TypeManip.h"
#include"core/data/GP/TypeTraitsTemplateTemplate.h"
#include"core/data/GP/Factory.h"
#include"core/data/GP/Singleton.h"
#include"core/data/typeF/TypeF.h"
#include"core/data/3d/GLFigure.h"
#include"core/data/distribution/Distribution.h"
#include"core/data/distribution/DistributionAnalytic.h"
#include"core/data/distribution/DistributionArithmetic.h"
#include"core/data/distribution/DistributionFromDataStructure.h"
#include"core/data/distribution/DistributionImageGrid.h"
#include"core/data/distribution/DistributionMultiVariate.h"
#include"core/data/distribution/DistributionMultiVariateArithmetic.h"
#include"core/data/distribution/DistributionMultiVariateFromDataStructure.h"
#include"core/data/functor/FunctorF.h"
#include"core/data/functor/FunctorPDE.h"
#include"core/data/germgrain/GermGrain.h"
#include"core/data/notstable/graph/Edge.h"
#include"core/data/notstable/graph/Graph.h"
#include"core/data/notstable/graph/Vertex.h"
#include"core/data/notstable/Ransac.h"
#include"core/data/mat/MatN.h"
#include"core/data/mat/MatNInOut.h"
#include"core/data/mat/MatNDisplay.h"
#include"core/data/mat/Mat2x.h"
#include"core/data/notstable/Classifer.h"
#include"core/data/notstable/Descriptor.h"
#include"core/data/utility/BSPTree.h"
#include"core/data/notstable/Wavelet.h"
#include"core/data/ocr/OCR.h"
#include"core/data/population/PopulationData.h"
#include"core/data/population/PopulationFunctor.h"
#include"core/data/population/PopulationGrows.h"
#include"core/data/population/PopulationPDE.h"
#include"core/data/population/PopulationQueues.h"
#include"core/data/population/PopulationRestrictedSet.h"
#include"core/data/typeF/RGB.h"
#include"core/data/typeF/Complex.h"
#include"core/data/typeF/TypeF.h"
#include"core/data/typeF/TypeTraitsF.h"
#include"core/data/utility/CollectorExecutionInformation.h"
#include"core/data/utility/Configuration.h"
#include"core/data/utility/Exception.h"
#include"core/data/utility/BasicUtility.h"
#include"core/data/utility/XML.h"
#include"core/data/vec/VecN.h"
#include"core/data/vec/Vec.h"
#include"core/data/video/Video.h"
#include"core/data/neuralnetwork/NeuralNetwork.h"
#include"core/algorithm/Analysis.h"
#include"core/algorithm/AnalysisAdvanced.h"
#include"core/algorithm/Application.h"
#include"core/algorithm/Convertor.h"
#include"core/algorithm/Draw.h"
#include"core/algorithm/FunctionProcedureFunctorF.h"
#include"core/algorithm/GeometricalTransformation.h"
#include"core/algorithm/LinearAlgebra.h"
#include"core/algorithm/PDEAdvanced.h"
#include"core/algorithm/PDE.h"
#include"core/algorithm/ProcessingAdvanced.h"
#include"core/algorithm/Processing.h"
#include"core/algorithm/RandomGeometry.h"
#include"core/algorithm/Representation.h"
#include"core/algorithm/Statistics.h"
#include"core/algorithm/Feature.h"
#include"core/algorithm/Visualization.h"
#include"core/algorithm/ProcessingVideo.h"


#endif // POPULATION_H
