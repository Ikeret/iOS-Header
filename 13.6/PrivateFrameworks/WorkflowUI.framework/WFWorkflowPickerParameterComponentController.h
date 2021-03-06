//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKComponentController.h>

#import <WorkflowUI/WFWorkflowPickerViewControllerDelegate-Protocol.h>

@class NSString;

@interface WFWorkflowPickerParameterComponentController : CKComponentController <WFWorkflowPickerViewControllerDelegate>
{
}

- (void)workflowPickerViewController:(id)arg1 didSelectWorkflowWithName:(id)arg2;
- (void)workflowPickerViewController:(id)arg1 didSelectVariable:(id)arg2;
- (void)workflowPickerViewControllerDidCancel:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)parameterLayoutTapped:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

