//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBIdleTimerBase.h>

@interface SBDisabledIdleTimer : SBIdleTimerBase
{
    _Bool _activated;
}

- (void)setActivated:(_Bool)arg1;
- (_Bool)isActivated;
- (void)reset;
- (_Bool)isDisabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end

