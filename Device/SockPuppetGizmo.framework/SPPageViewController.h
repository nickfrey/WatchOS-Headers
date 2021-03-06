//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSString, PUICPageIndicatorView, UIScrollView;

@interface SPPageViewController : UIViewController <UIScrollViewDelegate>
{
    NSArray *_viewControllers;
    PUICPageIndicatorView *_pageControl;
    UIScrollView *_scrollView;
    NSMutableArray *_visiblePages;
}

@property(retain, nonatomic) NSMutableArray *visiblePages; // @synthesize visiblePages=_visiblePages;
- (void)updateCurrentPage;
- (void)updateVisiblePages;
- (id)topScrollViewForViewController:(id)arg1;
- (void)setCurrentViewControllerAtIndex:(int)arg1 animated:(BOOL)arg2;
- (int)currentViewControllerIndex;
@property(readonly, nonatomic) PUICPageIndicatorView *pageControl; // @synthesize pageControl=_pageControl;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)setNeedsStatusBarAppearanceUpdate;
- (BOOL)prefersStatusBarHidden;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

