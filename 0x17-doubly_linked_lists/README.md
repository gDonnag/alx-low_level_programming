
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <!-- The above 3 meta tags *must* come first in the head; any other head content must come *after* these tags -->
    <meta name="description" content="">
    <meta name="google" content="notranslate">

    <title>Project: 0x17. C - Doubly linked lists | Johannesburg Intranet</title>

      <link rel="stylesheet" href="https://use.typekit.net/xgz4ilr.css">
      <link rel="stylesheet" media="all" href="/assets/application_alx-3d24bc4f673bfac19a41b81172b6de3a7284648d77ae3ea55b7bcd17ede627dd.css" />
      <script src="https://www.gstatic.com/charts/loader.js"></script>
      <script src="/assets/application-dc99f4ab2508e93b076ab1ffcdf8ce0ef8c3e6158fd11161aad568a1da3d4441.js"></script>
      <link rel="shortcut icon" type="image/x-icon" href="/favicon_alx.ico" />
      <meta name="csrf-param" content="authenticity_token" />
<meta name="csrf-token" content="Z7yqUX_TQsGsmFliMo_U3aSMfT6ZaC0JEx_z_-x6Ph3SxYB-m73mcUju-vMbB7gHw6bn0obCxPEFGZWqm57u6g" />

      <link rel="apple-touch-icon" href="/apple-touch-icon_alx.png">

      <!-- HTML5 shim and Respond.js for IE8 support of HTML5 elements and media queries -->
      <!--[if lt IE 9]>
        <script src="https://oss.maxcdn.com/html5shiv/3.7.2/html5shiv.min.js"></script>
        <script src="https://oss.maxcdn.com/respond/1.4.2/respond.min.js"></script>
      <![endif]-->

      <!-- Store user timezone -->
      <script>
        Cookies.set('timezone', (new Date()).getTimezoneOffset() / -60.0);
      </script>

      <!-- intro.js for interactive onboarding -->

      <!-- React -->
      <script src="/packs/js/application-20841e2c9c938ece382f.js"></script>
      <link rel="stylesheet" media="screen" href="/packs/css/application-87456da7.css" />

      
  </head>

  <body class="
    signed_in
    env_production
    
    "
    translate="no"
    class="notranslate"
    data-theme-suffix="_alx"
    data-checker-special-theme="">

      <input type="hidden" id="hbtn-slack-url" value="https://alx-students.slack.com">
      <nav class="navbar navbar-default navbar-fixed-top topbar visible-xs">
  <div class="navbar-header">
    <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#navbar-mobile" aria-expanded="false">
      <span class="sr-only">Toggle navigation</span>
      <span class="icon-bar"></span>
      <span class="icon-bar"></span>
      <span class="icon-bar"></span>
    </button>

    <a class="navbar-brand" href="/">
      <div class="logo"></div>
</a>  </div>

  <div class="collapse navbar-collapse navigation" id="navbar-mobile">
    <ul class="nav navbar-nav">
      


    <li data-container="body" data-placement="right" data-toggle="tooltip" title="My Planning"><a href="/planning/me"><div class="icon "><i aria-hidden="true" class="fa fa-calendar "></i></div><div class="visible-xs">My Planning</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" id="sidebar-current-projects-item" title="Projects"><a href="/projects/current"><div class="icon "><i aria-hidden="true" class="fa fa-code-fork "></i></div><div class="visible-xs">Projects</div></a></li>
    
    <li data-container="body" data-placement="right" data-toggle="tooltip" title="QA Reviews I can make"><a href="/corrections/to_review"><div class="icon "><i aria-hidden="true" class="fa fa-check "></i></div><div class="visible-xs">QA Reviews I can make</div></a></li>
    
    <li data-container="body" data-placement="right" data-toggle="tooltip" title="Evaluation quizzes"><a href="/dashboards/my_current_evaluation_quizzes"><div class="icon "><i aria-hidden="true" class="fa fa-question "></i></div><div class="visible-xs">Evaluation quizzes</div></a></li>

    <hr title="My resources">

    <li data-container="body" data-placement="right" data-toggle="tooltip" title="Curriculums"><a href="/dashboards/my_curriculums"><div class="icon "><i aria-hidden="true" class="fa fa-graduation-cap "></i></div><div class="visible-xs">Curriculums</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" id="sidebar-concepts-item" title="Concepts"><a href="/concepts"><div class="icon "><i aria-hidden="true" class="fa fa-file-text "></i></div><div class="visible-xs">Concepts</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" id="sidebar-dashboards-video-rooms" title="Conference rooms"><a href="/dashboards/video_rooms"><div class="icon "><i aria-hidden="true" class="fa fa-comments "></i></div><div class="visible-xs">Conference rooms</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" title="Servers"><a href="/servers"><div class="icon "><i aria-hidden="true" class="fa fa-server "></i></div><div class="visible-xs">Servers</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" id="sidebar-dashboards-my-containers" title="Sandboxes"><a href="/user_containers/current"><div class="icon "><i aria-hidden="true" class="fa fa-terminal "></i></div><div class="visible-xs">Sandboxes</div></a></li>
    
    

      <hr title="My campus">

      
      <li data-container="body" data-placement="right" data-toggle="tooltip" title="Peers"><a href="/users/peers"><div class="icon "><i aria-hidden="true" class="fa fa-users "></i></div><div class="visible-xs">Peers</div></a></li>
      <li data-container="body" data-placement="right" data-toggle="tooltip" title="Captain&#39;s Logs"><a href="/dashboards/my_captain_log"><div class="icon "><i aria-hidden="true" class="fa fa-book "></i></div><div class="visible-xs">Captain&#39;s Logs</div></a></li>


<hr class="visible-xs">

<li>
    <div
      data-container="body"
      data-placement="right"
      data-toggle="tooltip"
      title="Slack">
      <a target="_blank" href="https://alx-students.slack.com">
        <div class="image slack">
          <div class="inner"></div>
        </div>
        <div class="visible-xs">Slack</div>
</a>    </div>

  <div
    data-container="body"
    data-placement="right"
    data-toggle="tooltip"
    title="My Profile">
    <a href="/users/my_profile">
        <div class="image ">
          <div class="inner" style="background-image: url('https://s3.amazonaws.com/alx-intranet.hbtn.io/users/photos/000/094/622/thumb/20200927_222807.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220929%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20220929T064446Z&amp;X-Amz-Expires=600&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=5fe7406dcb73a0ee0b036a54cc671acf6fbfd29fe9436179bb0370b09625f45b')"></div>
        </div>

      <div class="visible-xs">My Profile</div>
</a>  </div>
</li>


    </ul>
  </div>
</nav>

      <div class="hidden-xs navigation sidebar">
  <a class="logo-container" href="/">
    <div class="logo"></div>
</a>
  <ul>
    


    <li data-container="body" data-placement="right" data-toggle="tooltip" title="My Planning"><a href="/planning/me"><div class="icon "><i aria-hidden="true" class="fa fa-calendar "></i></div><div class="visible-xs">My Planning</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" id="sidebar-current-projects-item" title="Projects"><a href="/projects/current"><div class="icon "><i aria-hidden="true" class="fa fa-code-fork "></i></div><div class="visible-xs">Projects</div></a></li>
    
    <li data-container="body" data-placement="right" data-toggle="tooltip" title="QA Reviews I can make"><a href="/corrections/to_review"><div class="icon "><i aria-hidden="true" class="fa fa-check "></i></div><div class="visible-xs">QA Reviews I can make</div></a></li>
    
    <li data-container="body" data-placement="right" data-toggle="tooltip" title="Evaluation quizzes"><a href="/dashboards/my_current_evaluation_quizzes"><div class="icon "><i aria-hidden="true" class="fa fa-question "></i></div><div class="visible-xs">Evaluation quizzes</div></a></li>

    <hr title="My resources">

    <li data-container="body" data-placement="right" data-toggle="tooltip" title="Curriculums"><a href="/dashboards/my_curriculums"><div class="icon "><i aria-hidden="true" class="fa fa-graduation-cap "></i></div><div class="visible-xs">Curriculums</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" id="sidebar-concepts-item" title="Concepts"><a href="/concepts"><div class="icon "><i aria-hidden="true" class="fa fa-file-text "></i></div><div class="visible-xs">Concepts</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" id="sidebar-dashboards-video-rooms" title="Conference rooms"><a href="/dashboards/video_rooms"><div class="icon "><i aria-hidden="true" class="fa fa-comments "></i></div><div class="visible-xs">Conference rooms</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" title="Servers"><a href="/servers"><div class="icon "><i aria-hidden="true" class="fa fa-server "></i></div><div class="visible-xs">Servers</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" id="sidebar-dashboards-my-containers" title="Sandboxes"><a href="/user_containers/current"><div class="icon "><i aria-hidden="true" class="fa fa-terminal "></i></div><div class="visible-xs">Sandboxes</div></a></li>
    
    

      <hr title="My campus">

      
      <li data-container="body" data-placement="right" data-toggle="tooltip" title="Peers"><a href="/users/peers"><div class="icon "><i aria-hidden="true" class="fa fa-users "></i></div><div class="visible-xs">Peers</div></a></li>
      <li data-container="body" data-placement="right" data-toggle="tooltip" title="Captain&#39;s Logs"><a href="/dashboards/my_captain_log"><div class="icon "><i aria-hidden="true" class="fa fa-book "></i></div><div class="visible-xs">Captain&#39;s Logs</div></a></li>


<hr class="visible-xs">

<li>
    <div
      data-container="body"
      data-placement="right"
      data-toggle="tooltip"
      title="Slack">
      <a target="_blank" href="https://alx-students.slack.com">
        <div class="image slack">
          <div class="inner"></div>
        </div>
        <div class="visible-xs">Slack</div>
</a>    </div>

  <div
    data-container="body"
    data-placement="right"
    data-toggle="tooltip"
    title="My Profile">
    <a href="/users/my_profile">
        <div class="image ">
          <div class="inner" style="background-image: url('https://s3.amazonaws.com/alx-intranet.hbtn.io/users/photos/000/094/622/thumb/20200927_222807.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220929%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20220929T064446Z&amp;X-Amz-Expires=600&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=5fe7406dcb73a0ee0b036a54cc671acf6fbfd29fe9436179bb0370b09625f45b')"></div>
        </div>

      <div class="visible-xs">My Profile</div>
</a>  </div>
</li>


  </ul>
</div>


    <main>
        <div id="layout-bars">
          
          
          
          
          
        </div>

      <article class="">

        
<div class="project row">
  <div class="col-xs-12 col-md-10 col-lg-8 contains-images">

      <h1 class="gap">0x17. C - Doubly linked lists</h1>

  <div data-react-class="tags/Tags" data-react-props="{&quot;tags&quot;:[{&quot;id&quot;:7,&quot;value&quot;:&quot;C&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;},{&quot;id&quot;:17,&quot;value&quot;:&quot;Algorithm&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;},{&quot;id&quot;:18,&quot;value&quot;:&quot;Data structure&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;}]}" data-react-cache-id="tags/Tags-0"></div>

  <div data-react-class="projects/ProjectMetadata" data-react-props="{&quot;metadata&quot;:{&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;correction&quot;:{&quot;released&quot;:false,&quot;auto_correction_available_at&quot;:&quot;2022-09-29T12:00:00.000+02:00&quot;,&quot;requires_auto_correction&quot;:true,&quot;requires_manual_correction&quot;:false},&quot;bpi&quot;:{&quot;current&quot;:true,&quot;started&quot;:false,&quot;in_second_deadline&quot;:false,&quot;starts_at&quot;:&quot;2022-09-29T06:00:00.000+02:00&quot;,&quot;ends_at&quot;:&quot;2022-09-30T06:00:00.000+02:00&quot;,&quot;second_deadline_at&quot;:&quot;2022-10-01T06:00:00.000+02:00&quot;}}}" data-react-cache-id="projects/ProjectMetadata-0"></div>





    <div id="project_id" style="display: none" data-project-id="240"></div>



      

      

      <div class="panel panel-default" id="project-description">
  <div class="panel-body">
    <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/C5_IRM981SVn8oA8RP3gag" title="What is a Doubly Linked List" target="_blank">What is a Doubly Linked List</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/0ABh2M07w5kdsh9gRx1XwA" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is a doubly linked list</li>
<li>How to use doubly linked lists</li>
<li>Start to look for the right source of information without too much help</li>
</ul>

<h3>Copyright - Plagiarism</h3>

<ul>
<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else&rsquo;s work. </li>
<li>You are not allowed to publish any content of this project.</li>
<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)</li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The only C standard library functions allowed are <code>malloc</code>, <code>free</code>, <code>printf</code> and <code>exit</code></li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called <code>lists.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>

<h2>More Info</h2>

<p>Please use this data structure for this project:</p>

<pre><code>/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
</code></pre>

  </div>
</div>


      

        <div class="panel panel-default" id="project-quiz-questions-title">
    <div class="panel-heading">
      <h3 class="panel-title">
        Quiz questions
      </h3>
    </div>

    <div class="panel-body">

        <div class="alert alert-info">
          <strong>Great!</strong>
          You've completed the quiz successfully! Keep going!
          <span id="quiz_questions_collapse_toggle"></span>
        </div>

      <section class="quiz_questions_show_container">
          <div class="quiz_question_item_container" data-role="quiz_question923" data-position="1">
            <div class=" clearfix" id="quiz_question-923">

    <h4 class="quiz_question">
        
        Question #0
    </h4>

    <!-- Quiz question Body -->
    <p>In a doubly linked list, what are possible directions to traverse it? (select all possible answers)</p>


    <!-- Quiz question Answers -->
        <ul class="quiz_question_answers" data-question-id="923">
                <li class="">

  <input type="checkbox" name="923" id="923-1573675004421" value="1573675004421" data-quiz-answer-id="1573675004421" data-quiz-question-id="923" disabled="disabled" checked="checked" />
  <label for="923-1573675004421"><p>Forward</p>
</label>
</li>

                <li class="">

  <input type="checkbox" name="923" id="923-1573675011322" value="1573675011322" data-quiz-answer-id="1573675011322" data-quiz-question-id="923" disabled="disabled" checked="checked" />
  <label for="923-1573675011322"><p>Backward</p>
</label>
</li>

        </ul>

    <!-- Quiz question Tips -->

</div>

          </div>
          <div class="quiz_question_item_container" data-role="quiz_question924" data-position="2">
            <div class=" clearfix" id="quiz_question-924">

    <h4 class="quiz_question">
        
        Question #1
    </h4>

    <!-- Quiz question Body -->
    <p>In a doubly linked list, what’s the &ldquo;head&rdquo; of a linked list?</p>


    <!-- Quiz question Answers -->
        <ul class="quiz_question_answers" data-question-id="924">
                <li class="">

  <input type="radio" name="924" id="924-1573675022611" value="1573675022611" data-quiz-answer-id="1573675022611" data-quiz-question-id="924" disabled="disabled" />
  <label for="924-1573675022611"><p>It’s the node with the pointer to the next equals to <code>NULL</code></p>
</label>
</li>

                <li class="">

  <input type="radio" name="924" id="924-1573675038119" value="1573675038119" data-quiz-answer-id="1573675038119" data-quiz-question-id="924" disabled="disabled" checked="checked" />
  <label for="924-1573675038119"><p>It’s the node with the pointer to the previous equals to <code>NULL</code></p>
</label>
</li>

        </ul>

    <!-- Quiz question Tips -->

</div>

          </div>

      </section>
    </div>
  </div>


        
          <h2 class="gap">Tasks</h2>

    <div data-role="task1095" data-position="1" id="task-num-0">
      <div class="panel panel-default task-card " id="task-1095">
  <span id="user_id" data-id="94622"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      0. Print list
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="94622"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that prints all the elements of a <code>dlistint_t</code> list.</p>

<ul>
<li>Prototype: <code>size_t print_dlistint(const dlistint_t *h);</code></li>
<li>Return: the number of nodes</li>
<li>Format: see example</li>
</ul>

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 0-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &amp;hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, &quot;Error: Can&#39;t malloc\n&quot;);
        return (EXIT_FAILURE);
    }
    new-&gt;n = 9;
    head-&gt;prev = new;
    new-&gt;next = head;
    new-&gt;prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf(&quot;-&gt; %lu elements\n&quot;, n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
julien@ubuntu:~/0x17. Doubly linked lists$ ./a 
9
8
-&gt; 2 elements
julien@ubuntu:~/0x17. Doubly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x17-doubly_linked_lists</code></li>
            <li>File: <code> 0-print_dlistint.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="1095">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="1095" data-batch-id="39" data-toggle="modal" data-target="#task-1095-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-1095-users-done-modal" data-task-id="1095" data-batch-id="39">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "0. Print list"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>




    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>



        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task1096" data-position="2" id="task-num-1">
      <div class="panel panel-default task-card " id="task-1096">
  <span id="user_id" data-id="94622"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      1. List length
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="94622"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that returns the number of elements in a linked <code>dlistint_t</code> list.</p>

<ul>
<li>Prototype: <code>size_t dlistint_len(const dlistint_t *h);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 1-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &amp;hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, &quot;Error: Can&#39;t malloc\n&quot;);
        return (EXIT_FAILURE);
    }
    new-&gt;n = 9;
    head-&gt;prev = new;
    new-&gt;next = head;
    new-&gt;prev = NULL;
    head = new;
    n = dlistint_len(head);
    printf(&quot;-&gt; %lu elements\n&quot;, n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o b
julien@ubuntu:~/0x17. Doubly linked lists$ ./b 
-&gt; 2 elements
julien@ubuntu:~/0x17. Doubly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x17-doubly_linked_lists</code></li>
            <li>File: <code>1-dlistint_len.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="1096">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="1096" data-batch-id="39" data-toggle="modal" data-target="#task-1096-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-1096-users-done-modal" data-task-id="1096" data-batch-id="39">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "1. List length"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>




    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>



        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task1097" data-position="3" id="task-num-2">
      <div class="panel panel-default task-card " id="task-1097">
  <span id="user_id" data-id="94622"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      2. Add node
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="94622"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that adds a new node at the beginning of a <code>dlistint_t</code> list.</p>

<ul>
<li>Prototype: <code>dlistint_t *add_dnodeint(dlistint_t **head, const int n);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
</ul>

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 2-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&amp;head, 0);
    add_dnodeint(&amp;head, 1);
    add_dnodeint(&amp;head, 2);
    add_dnodeint(&amp;head, 3);
    add_dnodeint(&amp;head, 4);
    add_dnodeint(&amp;head, 98);
    add_dnodeint(&amp;head, 402);
    add_dnodeint(&amp;head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
julien@ubuntu:~/0x17. Doubly linked lists$ ./c 
1024
402
98
4
3
2
1
0
julien@ubuntu:~/0x17. Doubly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x17-doubly_linked_lists</code></li>
            <li>File: <code>2-add_dnodeint.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="1097">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="1097" data-batch-id="39" data-toggle="modal" data-target="#task-1097-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-1097-users-done-modal" data-task-id="1097" data-batch-id="39">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "2. Add node"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>




    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>



        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task1098" data-position="4" id="task-num-3">
      <div class="panel panel-default task-card " id="task-1098">
  <span id="user_id" data-id="94622"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      3. Add node at the end
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="94622"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that adds a new node at the end of a <code>dlistint_t</code> list.</p>

<ul>
<li>Prototype: <code>dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
</ul>

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 3-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
julien@ubuntu:~/0x17. Doubly linked lists$ ./d 
0
1
2
3
4
98
402
1024
julien@ubuntu:~/0x17. Doubly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x17-doubly_linked_lists</code></li>
            <li>File: <code>3-add_dnodeint_end.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="1098">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="1098" data-batch-id="39" data-toggle="modal" data-target="#task-1098-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-1098-users-done-modal" data-task-id="1098" data-batch-id="39">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "3. Add node at the end"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>




    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>



        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task1099" data-position="5" id="task-num-4">
      <div class="panel panel-default task-card " id="task-1099">
  <span id="user_id" data-id="94622"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      4. Free list
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="94622"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that frees a <code>dlistint_t</code> list.</p>

<ul>
<li>Prototype: <code>void free_dlistint(dlistint_t *head);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 4-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
julien@ubuntu:~/0x17. Doubly linked lists$ valgrind ./e 
==4197== Memcheck, a memory error detector
==4197== Copyright (C) 2002-2015, and GNU GPL&#39;d, by Julian Seward et al.
==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4197== Command: ./e
==4197== 
0
1
2
3
4
98
402
1024
==4197== 
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197== 
==4197== All heap blocks were freed -- no leaks are possible
==4197== 
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x17. Doubly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x17-doubly_linked_lists</code></li>
            <li>File: <code>4-free_dlistint.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="1099">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="1099" data-batch-id="39" data-toggle="modal" data-target="#task-1099-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-1099-users-done-modal" data-task-id="1099" data-batch-id="39">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "4. Free list"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>




    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>



        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task1100" data-position="6" id="task-num-5">
      <div class="panel panel-default task-card " id="task-1100">
  <span id="user_id" data-id="94622"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      5. Get node at index
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="94622"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that returns the nth node of a <code>dlistint_t</code> linked list.</p>

<ul>
<li>Prototype: <code>dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);</code></li>
<li>where <code>index</code> is the index of the node, starting from <code>0</code></li>
<li>if the node does not exist, return <code>NULL</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 5-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *node;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    print_dlistint(head);
    node = get_dnodeint_at_index(head, 5);
    printf(&quot;%d\n&quot;, node-&gt;n);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h
julien@ubuntu:~/0x17. Doubly linked lists$ ./h
0
1
2
3
4
98
402
1024
98
julien@ubuntu:~/0x17. Doubly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x17-doubly_linked_lists</code></li>
            <li>File: <code>5-get_dnodeint.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="1100">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="1100" data-batch-id="39" data-toggle="modal" data-target="#task-1100-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-1100-users-done-modal" data-task-id="1100" data-batch-id="39">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "5. Get node at index"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>




    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>



        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task1101" data-position="7" id="task-num-6">
      <div class="panel panel-default task-card " id="task-1101">
  <span id="user_id" data-id="94622"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      6. Sum list
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="94622"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that returns the sum of all the data (n) of a <code>dlistint_t</code> linked list.</p>

<ul>
<li>Prototype: <code>int sum_dlistint(dlistint_t *head);</code></li>
<li>if the list is empty, return <code>0</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 6-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    int sum;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    sum = sum_dlistint(head);
    printf(&quot;sum = %d\n&quot;, sum);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 6-main.c -std=gnu89 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c -o i
julien@ubuntu:~/0x17. Doubly linked lists$ ./i 
sum = 1534
julien@ubuntu:~/0x17. Doubly linked lists$ 

</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x17-doubly_linked_lists</code></li>
            <li>File: <code>6-sum_dlistint.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="1101">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="1101" data-batch-id="39" data-toggle="modal" data-target="#task-1101-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-1101-users-done-modal" data-task-id="1101" data-batch-id="39">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "6. Sum list"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>




    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>



        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task1102" data-position="8" id="task-num-7">
      <div class="panel panel-default task-card " id="task-1102">
  <span id="user_id" data-id="94622"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      7. Insert at index
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="94622"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that inserts a new node at a given position.</p>

<ul>
<li>Prototype: <code>dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);</code></li>
<li>where <code>idx</code> is the index of the list where the new node should be added. Index starts at <code>0</code></li>
<li>Returns: the address of the new node, or <code>NULL</code> if it failed</li>
<li>if it is not possible to add the new node at index <code>idx</code>, do not add the new node and return <code>NULL</code></li>
</ul>

<p>Your files <code>2-add_dnodeint.c</code> and <code>3-add_dnodeint_end.c</code> will be compiled during the correction</p>

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 7-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    print_dlistint(head);
    printf(&quot;-----------------\n&quot;);
    insert_dnodeint_at_index(&amp;head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j
julien@ubuntu:~/0x17. Doubly linked lists$ ./j 
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
julien@ubuntu:~/0x17. Doubly linked lists$
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x17-doubly_linked_lists</code></li>
            <li>File: <code>7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="1102">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="1102" data-batch-id="39" data-toggle="modal" data-target="#task-1102-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-1102-users-done-modal" data-task-id="1102" data-batch-id="39">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "7. Insert at index"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>




    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>



        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task1103" data-position="9" id="task-num-8">
      <div class="panel panel-default task-card " id="task-1103">
  <span id="user_id" data-id="94622"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      8. Delete at index
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="94622"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that deletes the node at index <code>index</code> of a <code>dlistint_t</code> linked list.</p>

<ul>
<li>Prototype: <code>int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);</code></li>
<li>where <code>index</code> is the index of the node that should be deleted. Index starts at <code>0</code></li>
<li>Returns: <code>1</code> if it succeeded, <code>-1</code> if it failed</li>
</ul>

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 8-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    print_dlistint(head);
    printf(&quot;-----------------\n&quot;);
    delete_dnodeint_at_index(&amp;head, 5);
    print_dlistint(head);
    printf(&quot;-----------------\n&quot;);
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf(&quot;-----------------\n&quot;);
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf(&quot;-----------------\n&quot;);
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf(&quot;-----------------\n&quot;);
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf(&quot;-----------------\n&quot;);
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf(&quot;-----------------\n&quot;);
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf(&quot;-----------------\n&quot;);
    delete_dnodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_dnodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_dnodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_dnodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_dnodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_dnodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_dnodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_dnodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_dnodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    return (0);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o k
julien@ubuntu:~/0x17. Doubly linked lists$ ./k
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
julien@ubuntu:~/0x17. Doubly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x17-doubly_linked_lists</code></li>
            <li>File: <code>8-delete_dnodeint.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="1103">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="1103" data-batch-id="39" data-toggle="modal" data-target="#task-1103-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-1103-users-done-modal" data-task-id="1103" data-batch-id="39">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "8. Delete at index"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>




    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>



        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>

    <p class="lg-gap">
      <a class="btn btn-primary btn-block" data-confirm="Are you sure? Make sure you focused on the mandatory tasks first" href="/projects/240/unlock_optionals">Done with the mandatory tasks? Unlock 3 advanced tasks now!</a>
    </p>




          <div class="modal fade" id="container-specs-modal"><div class="modal-dialog modal-lg"><div class="modal-content"><div class="modal-header"><button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button><h4 class="modal-title">Recommended Sandbox</h4></div><div class="modal-body"><div data-react-class="user_containers/ContainerSpecs" data-react-props="{&quot;containerModelName&quot;:&quot;Sandbox&quot;,&quot;containerSpecs&quot;:[{&quot;description&quot;:&quot;\u003cp\u003eBasic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for Foundations\u003c/p\u003e\n&quot;,&quot;id&quot;:39,&quot;name&quot;:&quot;Ubuntu 20.04&quot;,&quot;online&quot;:true,&quot;container&quot;:{&quot;container_id&quot;:&quot;29d5d2d49ed3548e6cd4fb8aa0ea84e792ae71867ab1e219c9e1f924650ab032&quot;,&quot;id&quot;:187485,&quot;restart_uri&quot;:&quot;/user_containers/187485/restart.json&quot;,&quot;uri&quot;:&quot;/user_containers/187485.json&quot;,&quot;webterm_uri&quot;:&quot;/user_containers/187485/webterm&quot;,&quot;host&quot;:&quot;29d5d2d49ed3.96d38e2a.alx-cod.online&quot;,&quot;password&quot;:&quot;0b9cf7d5f55ea1c86f8d&quot;,&quot;ports&quot;:{&quot;3000&quot;:51196,&quot;5000&quot;:51193,&quot;5001&quot;:51192,&quot;443&quot;:51197,&quot;80&quot;:51198,&quot;8000&quot;:51191,&quot;8080&quot;:51190,&quot;22&quot;:51199,&quot;3306&quot;:51195,&quot;4000&quot;:51194}}}],&quot;containersLimit&quot;:2,&quot;csrfToken&quot;:&quot;KHKgI0N_THMxLbFKmr-n5ugzD4sKljkPK7eoctg31Q2dC4oMpxHow9VbEtuzN8s8jxmVZxU80Pc9sc4nr9MF-g&quot;,&quot;startStatusURI&quot;:&quot;/user_containers/start_status.json&quot;,&quot;startURI&quot;:&quot;/user_containers/start.json&quot;}" data-react-cache-id="user_containers/ContainerSpecs-0"></div></div></div></div></div>

  </div>
</div>


      </article>

      <div class="copyright">Copyright © 2022 ALX, All rights reserved.</div>

    </main>

        <button class="btn btn-primary" id="search-button" data-search-active="false" data-toggle="modal" data-target="#search-modal">
  <i aria-hidden="true" class="fa fa-search "></i>
  <i aria-hidden="true" class="fa fa-window-minimize "></i>
</button>

        <div class="modal fade" id="search-modal" tabindex="-1" role="dialog" aria-labelledby="search-modal-label">
    <div class="modal-dialog modal-md">
        <div class="modal-content">
            <div class="modal-header">
                <div id="search-bar-container">
    <input id="search-bar"
            type="text"
            name="hbtn-search-bar"
            placeholder="✨Start search by typing in this field✨">
</div>

            </div>
            <div class="modal-body">
                <div id="modal-spinner" class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div id="search-results-container">
</div>

            </div>
        </div>
    </div>
</div>



        <div class="modal fade" id="markdownGuideModal" tabindex="-1" role="dialog" aria-labelledby="markdownGuideModalLabel" aria-hidden="true">
  <div class="modal-dialog modal-md">
    <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
          <h4 class="modal-title">Markdown Guide</h4>
        </div>
        <div class="modal-body">
            <h4>Emphasis</h4>
<pre>**<strong>bold</strong>**
*<em>italics</em>*
~~<strike>strikethrough</strike>~~</pre>
<h4>Headers</h4>
<pre># Big header
## Medium header
### Small header
#### Tiny header</pre>
<h4>Lists</h4>
<pre>* Generic list item
* Generic list item
* Generic list item

1. Numbered list item
2. Numbered list item
3. Numbered list item</pre>
<h4>Links</h4>
<pre>[Text to display](http://www.example.com)</pre>
<h4>Quotes</h4>
<pre>> This is a quote.
> It can span multiple lines!</pre>
<h4>Images</h4>
<p>CSS style available: <code>width, height, opacity</code></p>
<pre>![](http://www.example.com/image.jpg)
![](http://www.example.com/image.jpg | width: 200px)
![](http://www.example.com/image.jpg | height: 124px | width: 80px | opacity: 0.6)
</pre>
<h4>Tables</h4>
<pre>| Column 1 | Column 2 | Column 3 |
| -------- | -------- | -------- |
| John     | Doe      | Male     |
| Mary     | Smith    | Female   |

<em>Or without aligning the columns...</em>

| Column 1 | Column 2 | Column 3 |
| -------- | -------- | -------- |
| John | Doe | Male |
| Mary | Smith | Female |
</pre>
<h4>Displaying code</h4>
<pre>`var example = "hello!";`

<em>Or spanning multiple lines...</em>

```
var example = "hello!";
alert(example);
```</pre>
        </div>
    </div>
  </div>
</div>


        <script>
    (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
    (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
    m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
    })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

      ga('create',
        'UA-67152800-9',
        'auto', {
          userId: '94622'
        }
      );

    ga('send', 'pageview');

    $(document).ready(function() {
      ga(function(tracker) {
        var clientId = tracker.get('clientId');
        $('.ga-client-id').val(clientId);
      });
    });
  </script>




  </body>
</html>
