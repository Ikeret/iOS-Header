//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LightLevelSource-Protocol.h"

@class NSString;
@protocol LightLevelSourceDelegate;

__attribute__((visibility("hidden")))
@interface LightLevelProvider : NSObject <LightLevelSource>
{
    id <LightLevelSourceDelegate> _delegate;
    long long _lightLevel;
}

- (void).cxx_destruct;
@property(nonatomic) long long lightLevel; // @synthesize lightLevel=_lightLevel;
@property(nonatomic) __weak id <LightLevelSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setLightLevel:(long long)arg1 notifyDelegateIfNeeded:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

