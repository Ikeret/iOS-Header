//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/WFDynamicEnumerationDataSource-Protocol.h>

@class NSString;

@interface WFSearchiTunesAction : WFAction <WFDynamicEnumerationDataSource>
{
}

- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)possibleStatesForEnumeration:(id)arg1;
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;
- (id)mediaType;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)updateParameterVisibility;
- (void)initializeParameters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

