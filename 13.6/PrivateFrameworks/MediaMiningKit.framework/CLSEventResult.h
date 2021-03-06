//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSEvent;

@interface CLSEventResult : NSObject
{
    float _confidence;
    CLSEvent *_event;
}

+ (id)eventResultWithEvent:(id)arg1 andConfidence:(float)arg2;
- (void).cxx_destruct;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) CLSEvent *event; // @synthesize event=_event;
- (id)description;
- (void)mergeWithResult:(id)arg1;
- (_Bool)isSameEventAsResult:(id)arg1;

@end

