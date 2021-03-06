#ifndef BAYESIANFILTERINGFUNCTION_H
#define BAYESIANFILTERINGFUNCTION_H

#include <Eigen/Dense>

class BayesianFilteringFunction {
public:

    virtual void StateModel(const Eigen::Ref<const Eigen::VectorXf> & prev_state, Eigen::Ref<Eigen::VectorXf> prop_state) = 0;

    virtual Eigen::Ref<Eigen::VectorXf> ObservationModel(const Eigen::Ref<const Eigen::VectorXf> & pred_state) = 0;

    virtual void Prediction(const Eigen::Ref<const Eigen::VectorXf> & prev_state, Eigen::Ref<Eigen::VectorXf> pred_state) = 0;

    virtual void Correction(const Eigen::Ref<const Eigen::VectorXf> & pred_state, const Eigen::Ref<const Eigen::VectorXf> & measurements, Eigen::Ref<Eigen::VectorXf> cor_state) = 0;
    
};

#endif /* BAYESIANFILTERINGFUNCTION_H */