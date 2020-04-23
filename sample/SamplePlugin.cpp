//
// Created by Zoltan Kuscsik on 4/17/20.
//

#include "SamplePlugin.h"
namespace streamfs {

std::string SamplePlugin::getId() {
    return "sample_plugin";
}

void SamplePlugin::startPlayback(std::string uri) {

}

void SamplePlugin::stopPlayback() {

}

void SamplePlugin::updateConfiguration(const PluginConfig &config) {
    mConfig = config;
}

void SamplePlugin::registerCallback(std::weak_ptr<PluginCallbackInterface> cb) {
    mCb = cb;
}

BufferProducer<buffer_chunk> *SamplePlugin::getBufferProducer() {
    return this;
}

}