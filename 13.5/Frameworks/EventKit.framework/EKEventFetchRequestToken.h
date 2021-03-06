//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/EKFetchRequestToken-Protocol.h>

@class EKEventStore;

__attribute__((visibility("hidden")))
@interface EKEventFetchRequestToken : NSObject <EKFetchRequestToken>
{
    unsigned int _token;
    EKEventStore *_eventStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int token; // @synthesize token=_token;
@property(readonly, nonatomic) __weak EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (void)cancel;
- (id)initWithEventStore:(id)arg1 token:(int)arg2;

@end

