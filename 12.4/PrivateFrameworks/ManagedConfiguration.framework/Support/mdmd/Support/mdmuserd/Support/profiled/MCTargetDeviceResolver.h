//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCTargetDeviceResolver : NSObject
{
}

+ (id)shared;
- (void)_showPromptForWatchWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_showPromptForHomePodWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_showPromptForHomePodAndWatchWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_showPromptForPhoneAndOtherDevicesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)showResolutionPromptWithWatchOption:(_Bool)arg1 homePodOption:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)isHomePodAvailable;
- (_Bool)isWatchAvailable;

@end

