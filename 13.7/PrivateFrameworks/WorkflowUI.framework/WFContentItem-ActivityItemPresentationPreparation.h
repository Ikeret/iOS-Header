//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <WorkflowUI/UIActivityItemSource-Protocol.h>

@class NSString;

@interface WFContentItem (ActivityItemPresentationPreparation) <UIActivityItemSource>
- (void)prepareForActivityItemPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)shouldUseObjectRepresentation;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

