//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CFServiceHelper;

@interface CFRequestHandler : NSObject
{
    CFServiceHelper *_serviceHelper;
}

- (void).cxx_destruct;
@property(retain) CFServiceHelper *serviceHelper; // @synthesize serviceHelper=_serviceHelper;
- (id)initClientLiteHelper;
- (id)initWithServiceHelper:(id)arg1;
- (_Bool)isTimeoutDisabled;
- (void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleCommandCompletionWithResponse:(id)arg1 forCommand:(id)arg2 startOfExecution:(double)arg3;

@end

