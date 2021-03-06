//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFAudio/AVAudioRemoteInputPluginDelegate-Protocol.h>

@class AVVoiceController, NSMutableArray;
@protocol AVAudioRemoteInputPlugin;

__attribute__((visibility("hidden")))
@interface AVVCRemoteInputHost : NSObject <AVAudioRemoteInputPluginDelegate>
{
    NSMutableArray<AVAudioRemoteInputPlugin> *mPlugins;
    AVVoiceController *mMotherController;
}

- (void)inputPlugin:(id)arg1 didUnpublishDevice:(id)arg2;
- (void)inputPlugin:(id)arg1 didPublishDevice:(id)arg2;
- (void)setParentVoiceController:(id)arg1;
- (id)findFirstBluetoothDevice;
- (id)findDeviceWithIdentifier:(id)arg1;
- (id)allBundles:(id *)arg1;
- (void)invalidatePlugins;
- (void)dealloc;
- (id)initializePlugins;

@end

