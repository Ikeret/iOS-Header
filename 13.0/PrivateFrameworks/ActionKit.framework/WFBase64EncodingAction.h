//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@interface WFBase64EncodingAction : WFAction
{
}

- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)outputContentClasses;
- (id)inputContentClasses;
- (id)itemFromBase64EncodedString:(id)arg1 nameIfKnown:(id)arg2;
- (id)base64EncodedStringItemFromFile:(id)arg1 lineBreakMode:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

