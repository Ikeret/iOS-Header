//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFSecureWindow.h>

#import "EventSourceHandler-Protocol.h"
#import "MNNavigationServiceObserver-Protocol.h"

@class NSHashTable, NSString;

__attribute__((visibility("hidden")))
@interface LockScreenSecureWindow : SBFSecureWindow <MNNavigationServiceObserver, EventSourceHandler>
{
    NSHashTable *_eventTaps;
    _Bool _hasEventTaps;
}

- (void).cxx_destruct;
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationService:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)sendEvent:(id)arg1;
- (void)registerEventTap:(id)arg1;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

