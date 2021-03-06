//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/HMFTimerDelegate-Protocol.h>

@class HMFTimer, HMFUnfairLock, NSString;

@interface HMFOperationBudget : HMFObject <HMFLogging, HMFTimerDelegate>
{
    HMFUnfairLock *_lock;
    HMFTimer *_timer;
    unsigned long long _value;
    unsigned long long _limit;
    struct _HMFRate _rate;
}

+ (id)logCategory;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct _HMFRate rate; // @synthesize rate=_rate;
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (void)timerDidFire:(id)arg1;
- (_Bool)decrementByCount:(unsigned long long)arg1;
- (_Bool)decrement;
- (void)reset;
@property(readonly, getter=isEmpty) _Bool empty;
@property(readonly, getter=isFull) _Bool full;
@property(readonly) unsigned long long value; // @synthesize value=_value;
- (id)initWithLimit:(unsigned long long)arg1 rate:(struct _HMFRate)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

