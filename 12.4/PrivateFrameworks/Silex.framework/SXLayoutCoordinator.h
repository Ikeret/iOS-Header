//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutCoordinator-Protocol.h>
#import <Silex/SXLayoutInvalidationManagerDelegate-Protocol.h>
#import <Silex/SXLayoutPipelineDelegate-Protocol.h>

@class NSString, SXDOMObjectProvider, SXLayoutBlueprintProvider, SXLayoutOptions, SXLayoutParametersManager;
@protocol SXDocumentControllerProvider, SXLayoutCoordinatorDelegate, SXLayoutInstructionFactory, SXLayoutIntegrator, SXLayoutInvalidationManager, SXLayoutPipeline;

@interface SXLayoutCoordinator : NSObject <SXLayoutPipelineDelegate, SXLayoutInvalidationManagerDelegate, SXLayoutCoordinator>
{
    id <SXLayoutCoordinatorDelegate> delegate;
    id <SXLayoutPipeline> _pipeline;
    id <SXLayoutIntegrator> _integrator;
    id <SXLayoutInstructionFactory> _instructionFactory;
    id <SXLayoutInvalidationManager> _invalidationManager;
    SXLayoutBlueprintProvider *_blueprintProvider;
    SXDOMObjectProvider *_DOMObjectProvider;
    SXLayoutParametersManager *_layoutParametersManager;
    id <SXDocumentControllerProvider> _documentControllerProvider;
    SXLayoutOptions *_layoutOptions;
}

@property(retain, nonatomic) SXLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(readonly, nonatomic) id <SXDocumentControllerProvider> documentControllerProvider; // @synthesize documentControllerProvider=_documentControllerProvider;
@property(readonly, nonatomic) SXLayoutParametersManager *layoutParametersManager; // @synthesize layoutParametersManager=_layoutParametersManager;
@property(readonly, nonatomic) SXDOMObjectProvider *DOMObjectProvider; // @synthesize DOMObjectProvider=_DOMObjectProvider;
@property(readonly, nonatomic) SXLayoutBlueprintProvider *blueprintProvider; // @synthesize blueprintProvider=_blueprintProvider;
@property(readonly, nonatomic) id <SXLayoutInvalidationManager> invalidationManager; // @synthesize invalidationManager=_invalidationManager;
@property(readonly, nonatomic) id <SXLayoutInstructionFactory> instructionFactory; // @synthesize instructionFactory=_instructionFactory;
@property(readonly, nonatomic) id <SXLayoutIntegrator> integrator; // @synthesize integrator=_integrator;
@property(readonly, nonatomic) id <SXLayoutPipeline> pipeline; // @synthesize pipeline=_pipeline;
@property(nonatomic) __weak id <SXLayoutCoordinatorDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)taskWithOptions:(id)arg1 layoutBlueprint:(id)arg2 instructions:(id)arg3;
- (void)startTask:(id)arg1;
- (void)layoutInvalidationManager:(id)arg1 didInvalidateBlueprint:(id)arg2;
- (void)layoutPipeline:(id)arg1 finishedTask:(id)arg2 withResult:(id)arg3;
- (void)layoutWithOptions:(id)arg1;
- (id)initWithPipeline:(id)arg1 integrator:(id)arg2 instructionFactory:(id)arg3 invalidationManager:(id)arg4 blueprintProvider:(id)arg5 DOMObjectProvider:(id)arg6 layoutParametersManager:(id)arg7 documentControllerProvider:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

